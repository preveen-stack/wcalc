/* $Id: coupled_stripline_loadsave.c,v 1.2 2008/11/29 20:42:12 dan Exp $ */

/*
 * Copyright (C) 2001, 2002, 2004, 2006 Dan McMahill
 * All rights reserved.
 *
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 * 
 */

/* #define DEBUG */

#include "config.h"

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#include <sys/types.h>
#include <time.h>

#include "alert.h"
#include "stripline.h"
#include "coupled_stripline.h"
#include "coupled_stripline_loadsave.h"
#include "units.h"
#include "wcalc_loadsave.h"

#ifdef DMALLOC
#include <dmalloc.h>
#endif

#define FILE_VERSION "0.1"

#define LINE_SPEC      0
#define SUBSTRATE_SPEC 1


static fspec * get_fspec(int which_one)
{
  static fspec *linespec=NULL;
  static fspec *subspec=NULL;
  coupled_stripline_line *line=0;
  stripline_subs *subs=0;

  if (linespec == NULL) {
    /* Build up the list which describes the file format */

    linespec=fspec_add_sect(NULL, "coupled_stripline");
    fspec_add_key(linespec, "file_version", "Coupled stripline file version",
		  'f', FILE_VERSION);

    fspec_add_key(linespec, "L", "Length (meters)", 'd', &line->l);
    fspec_add_key(linespec, "W", "Width (meters)", 'd', &line->w);
    fspec_add_key(linespec, "S", "Spacing (meters)", 'd', &line->s);
    fspec_add_key(linespec, "Z0", "Characteristic Impedance (ohms)", 
		  'd', &line->z0);
    fspec_add_key(linespec, "k", "Coupling coefficient", 
		  'd', &line->k);
    fspec_add_key(linespec, "Z0e", "Even Mode Characteristic Impedance (ohms)", 
		  'd', &line->z0e);
    fspec_add_key(linespec, "Z0o", "Odd Mode Characteristic Impedance (ohms)", 
		  'd', &line->z0o);
    fspec_add_key(linespec, "use_z0k", "Flag to use z0/k vs z0e/z0o for synthesis", 
		  'i', &line->use_z0k);
    fspec_add_key(linespec, "Elen", "Electrical Length (degrees)", 
		  'd', &line->len);
    fspec_add_key(linespec, "freq", "Frequency of operation", 
		  'd', &line->freq);

    /*
     * The desired user units
     */
    fspec_add_comment(linespec, "User units");

    fspec_add_key(linespec, 
		  "units_lwht", "Length, width, substrate and metal thickness units",
		  'u', &line->units_lwst);

    fspec_add_key(linespec, "units_L", "Incremental inductance units",  
		  'u', &line->units_L);
    fspec_add_key(linespec, "units_R", "Incremental resistance units",  
		  'u', &line->units_R);
    fspec_add_key(linespec, "units_C", "Incremental capacitance units", 
		  'u', &line->units_C);
    fspec_add_key(linespec, "units_G", "Incremental conductance units", 
		  'u', &line->units_G);

    fspec_add_key(linespec, "units_len", "Line physical length units",  
		  'u', &line->units_len);
    fspec_add_key(linespec, "units_freq", "Frequency units",  
		  'u', &line->units_freq);
    fspec_add_key(linespec, "units_loss", "Loss units",  
		  'u', &line->units_loss);
    fspec_add_key(linespec, "units_losslen", "Loss/length units",  
		  'u', &line->units_losslen);
    fspec_add_key(linespec, "units_rho", "Resistivity units",  
		  'u', &line->units_rho);
    fspec_add_key(linespec, "units_rough", "Surface roughness units (RMS)",  
		  'u', &line->units_rough);
    fspec_add_key(linespec, "units_delay", "Delay units",
		  'u', &line->units_delay);
    fspec_add_key(linespec, "units_depth", "Skin depth units",  
		  'u', &line->units_depth);
    fspec_add_key(linespec, "units_deltal", "End correction units",  
		  'u', &line->units_deltal);
    
  }

  if (subspec == NULL) {
    /* Build up the list which describes the file format */

    subspec=fspec_add_sect(NULL,"substrate");

    fspec_add_key(subspec,"H","Height (meters)",
		  'd',&subs->h);
    fspec_add_key(subspec,"ER","Relative dielectric constant",
		  'd',&subs->er);
    fspec_add_key(subspec,"TMET","Metalization thickness (meters)",
		  'd',&subs->tmet);
    fspec_add_key(subspec,"RHO","Metalization resistivity (ohm-meters)",
		  'd',&subs->rho);
    fspec_add_key(subspec,"ROUGH","Metalization surface roughness (meters-RMS)",
		  'd',&subs->rough);
    fspec_add_key(subspec,"TAND","Dielectric loss tangent",
		  'd',&subs->tand);

  }

  if (which_one == LINE_SPEC)
    return linespec;
  else
    return subspec;
}

int coupled_stripline_load(coupled_stripline_line *line, FILE *fp)
{
  fspec *myspec;
  char *val;
  int rslt,tmpi;

  assert(fp!=NULL);

  /* read the model version  */
  if ( (val=file_read_val(fp,"[coupled_stripline]","file_version")) == NULL ){
    alert("Could not determine the coupled_stripline file_version\n");
    return -1;
  }

#ifdef DEBUG
  printf("coupled_stripline_loadsave.c:coupled_stripline_load():  Got file_version=\"%s\"\n",
	 val);
#endif

  if (strcmp(val, FILE_VERSION) != 0) {
    alert("Unable to load a wcalc coupled_stripline file\n"
	  "with coupled_stripline file version\n"
	  "\"%s\".  I only understand version \"%s\"\n", 
	  val, FILE_VERSION);
    return -1;
  }

  /*
   * If the file format changes, this is where we would call legacy
   * routines to read old style file formats.
   */


  myspec=get_fspec(LINE_SPEC);
  rslt=fspec_read_file(myspec,fp,(unsigned long) line);
  rewind(fp);
  myspec=get_fspec(SUBSTRATE_SPEC);
  tmpi=fspec_read_file(myspec,fp,(unsigned long) line->subs);

  if (tmpi != 0)
    rslt=tmpi;

  return rslt;
}


void coupled_stripline_save(coupled_stripline_line *line, FILE *fp, char *fname)
{
  fspec *myspec;

  wcalc_save_header(fp, fname, FILE_COUPLED_STRIPLINE);

  myspec=get_fspec(LINE_SPEC);
  fspec_write_file(myspec,fp,(unsigned long) line);

  myspec=get_fspec(SUBSTRATE_SPEC);
  fspec_write_file(myspec,fp,(unsigned long) line->subs);
}


char * coupled_stripline_save_string(coupled_stripline_line *line)
{
  fspec *myspec;
  char *str1;
  char *str2;
  char *str3;

  myspec = get_fspec(LINE_SPEC);
  str1 = fspec_write_string(myspec, (unsigned long) line);

  myspec = get_fspec(SUBSTRATE_SPEC);
  str2 = fspec_write_string(myspec, (unsigned long) line->subs);

  str3 = (char *) malloc( (strlen(str1) + strlen(str2) + 2) * sizeof(char));
  if( str3 == NULL) {
    fprintf(stderr, "malloc failed in coupled_stripline_save_string()\n");
    exit(1);
  }

  sprintf(str3, "%s %s", str1, str2);

  return str3;
}

int coupled_stripline_load_string(coupled_stripline_line *line, 
				   const char *str)
{
  fspec *myspec;
  char *val;
  char *mystr;
  int rslt;

  assert(str!=NULL);

#ifdef DEBUG
  printf("coupled_stripline_loadsave.c:coupled_stripline_load_string():  "
	 "loading \"%s\"\n",str);
#endif

  mystr = strdup(str);

  /* XXX fixme*/
  val = strtok(mystr," ");

  free(mystr);
  /* read the model version  */
  if ( val == NULL ){
    alert("Could not determine the coupled_stripline file_version\n");
    return -1;
  }

#ifdef DEBUG
  printf("coupled_stripline_loadsave.c:coupled_stripline_load_string():  "
	 "Got file_version=\"%s\"\n",
	 val);
#endif
  /*
   * If the file format changes, this is where we would call legacy
   * routines to read old style formats.
   */

  myspec = get_fspec(LINE_SPEC);
#ifdef DEBUG
  printf("coupled_stripline_loadsave.c:coupled_stripline_load_string():  "
	 "loading \"%s\"\n",str);
#endif
  rslt = fspec_read_string(myspec, str, (unsigned long) line);
  if (rslt != 0) {
	return rslt;
  }

  myspec = get_fspec(SUBSTRATE_SPEC);
#ifdef DEBUG
  printf("coupled_stripline_loadsave.c:coupled_stripline_load_string():  "
	 "loading \"%s\"\n",str);
#endif
  rslt = fspec_read_string(myspec, str, (unsigned long) line->subs);
  if (rslt != 0) {
	return rslt;
  }

  return rslt;
}
