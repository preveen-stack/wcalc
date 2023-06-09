/* $Id: ic_microstrip_loadsave.c,v 1.12 2008/11/29 20:42:14 dan Exp $ */

/*
 * Copyright (C) 2001, 2002, 2004 Dan McMahill
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
#include "ic_microstrip.h"
#include "ic_microstrip_loadsave.h"
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
  ic_microstrip_line *line=0;
  ic_microstrip_subs *subs=0;

  if (linespec == NULL) {
    /* Build up the list which describes the file format */

    linespec=fspec_add_sect(NULL,"ic_microstrip");
    fspec_add_key(linespec,"file_version","I.C. microstrip file version",'f',FILE_VERSION);

    fspec_add_key(linespec,"L","Length (meters)",'d',&line->l);
    fspec_add_key(linespec,"W","Width (meters)",'d',&line->w);
    fspec_add_key(linespec,"Ro","Characteristic Impedance (ohms)",'d',&line->Ro);
    fspec_add_key(linespec,"Elen","Electrical Length (degrees)",'d',&line->len);
    fspec_add_key(linespec,"freq","Frequency of operation",'d',&line->freq);

    /*
     * The desired user units
     */
    fspec_add_comment(linespec, "User units");

    fspec_add_key(linespec, 
		  "units_lwht", "Length, width, oxide, substrate and metal thickness units",
		  'u', &line->units_lwht);

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
    fspec_add_key(linespec, "units_rho", "Metal resistivity units",  
		  'u', &line->units_rho);
    fspec_add_key(linespec, "units_sigmas", "Substrate conductivity units",  
		  'u', &line->units_sigmas);
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

    fspec_add_key(subspec, "TMET", "Metalization thickness (meters)", 
		  'd', &subs->tmet);
    fspec_add_key(subspec, "RHO", "Metalization resistivity (ohm-meters)", 
		  'd', &subs->rho);
    fspec_add_key(subspec, "ROUGH", "Metalization surface roughness (meters-RMS)",
		  'd', &subs->rough);
    fspec_add_key(subspec, "Eox", "Oxide relative dielectric constant", 
		  'd', &subs->eox);
    fspec_add_key(subspec, "Tox", "Oxide thickness (meters)", 
		  'd', &subs->tox);
    fspec_add_key(subspec, "H", "Substrate thickness (meters)", 
		  'd', &subs->h);
    fspec_add_key(subspec, "Es", "Substrate relative dielectric constant", 
		  'd', &subs->es);
    fspec_add_key(subspec, "sigmas", "Substrate conductivity (1/(ohm-meters))", 
		  'd', &subs->sigmas);

  }

  if (which_one == LINE_SPEC)
    return linespec;
  else
    return subspec;
}

int ic_microstrip_load(ic_microstrip_line *line, FILE *fp)
{
  fspec *myspec;
  char *val;
  int rslt,tmpi;

  assert(fp!=NULL);

  /* read the model version  */
  if ( (val=file_read_val(fp,"[ic_microstrip]","file_version")) == NULL ){
    alert("Could not determine the ic_microstrip file_version\n");
    return -1;
  }

#ifdef DEBUG
  printf("ic_microstrip_loadsave.c:ic_microstrip_load():  Got file_version=\"%s\"\n",
	 val);
#endif

  if (strcmp(val, FILE_VERSION) != 0) {
    alert("Unable to load a wcalc ic_microstrip file\n"
	  "with ic_microstrip file version\n"
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


void ic_microstrip_save(ic_microstrip_line *line, FILE *fp, char *fname)
{
  fspec *myspec;

  wcalc_save_header(fp, fname, FILE_IC_MICROSTRIP);

  myspec=get_fspec(LINE_SPEC);
  fspec_write_file(myspec,fp,(unsigned long) line);

  myspec=get_fspec(SUBSTRATE_SPEC);
  fspec_write_file(myspec,fp,(unsigned long) line->subs);
}

char * ic_microstrip_save_string(ic_microstrip_line *line)
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
    fprintf(stderr, "malloc failed in ic_microstrip_save_string()\n");
    exit(1);
  }

  sprintf(str3, "%s %s", str1, str2);

  return str3;
}

int ic_microstrip_load_string(ic_microstrip_line *line, const char *str)
{
  fspec *myspec;
  char *val;
  char *mystr;
  int rslt;

  assert(str!=NULL);

#ifdef DEBUG
  printf("ic_microstrip_loadsave.c:ic_microstrip_load_string():  "
	 "loading \"%s\"\n",str);
#endif

  mystr = strdup(str);

  /* XXX fixme*/
  val = strtok(mystr," ");

  free(mystr);

  /* read the model version  */
  if ( val == NULL ){
    alert("Could not determine the ic_microstrip file_version\n");
    return -1;
  }


#ifdef DEBUG
  printf("ic_microstrip_loadsave.c:ic_microstrip_load_string():  "
	 "Got file_version=\"%s\"\n",
	 val);
#endif
  /*
   * If the file format changes, this is where we would call legacy
   * routines to read old style formats.
   */

#ifdef DEBUG
  printf("ic_microstrip_loadsave.c:ic_microstrip_load_string():  "
	 "loading \"%s\"\n",str);
#endif

  myspec = get_fspec(LINE_SPEC);
  rslt = fspec_read_string(myspec, str, (unsigned long) line);
  if (rslt != 0) {
	return rslt;
  }

  myspec = get_fspec(SUBSTRATE_SPEC);
#ifdef DEBUG
  printf("ic_microstrip_loadsave.c:ic_microstrip_load_string():  "
	 "loading \"%s\"\n",str);
#endif
  rslt = fspec_read_string(myspec, str, (unsigned long) line->subs);
  if (rslt != 0) {
	return rslt;
  }

  return rslt;
}
