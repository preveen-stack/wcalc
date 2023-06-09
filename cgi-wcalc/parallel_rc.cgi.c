/* $Id: parallel_rc.cgi.c,v 1.1 2009/02/11 00:00:30 dan Exp $ */

/*
 * Copyright (C) 2009 Dan McMahill
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

/*
 * a cgi interface to the parallel_rc calculator
 */

/* #define DEBUG */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <math.h>
#include <stdio.h>

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

/* CGI specific */
#include "cgic.h"
#include "cgi-common.h"
#include "cgi-units.h"
#include "cookie.h"

/* libwcalc */
#include "parallel_rc.h"
#include "parallel_rc_loadsave.h"
#include "misc.h"
#include "physconst.h"
#include "units.h"

/* ID's for this module */
#include "parallel_rc_id.h"

#ifdef DMALLOC
#include <dmalloc.h>
#endif

#define ACTION_LEN  20

/* possible actions we're supposed to take */
#define LOAD      0
#define RESET     1
#define S2P       2
#define P2S       3



/* defaults for the various parameters */
#define defCp     10e-12
#define defRp     1e6
#define defQp     100

#define defCs     10e-12
#define defRs     0.1
#define defQs     100


#define defFREQ   100.0e6


/* default for Q/C vs R/C input */
#define defSTYPE  1
#define NSTYPE    2
static char *stypeStrings[]={"use_R" , "use_Q"};
	     
static const char *name_string="parallel_rc.cgi";
		
int cgiMain(void){

  /* CGI variables */
  char str_action[ACTION_LEN];

  int stype;

  int action;
  int input_err = 0;

  /* parallel_rc variables */
  parallel_rc *line;
  double freq;

  double Cs, Rs, Qs, Cp, Rp, Qp;

  /* these are either "" or "checked\0" */
  char use_Q_checked[8];
  char use_R_checked[8];

  char *cookie_str;
  char cookie_load_str[COOKIE_MAX+1];
  cgiCookieType *cookie;

  cgi_units_menu *menu_C;
  cgi_units_menu *menu_Rs;
  cgi_units_menu *menu_Rp;
  cgi_units_menu *menu_freq;

  /*
   * uncomment to be able to run in the debugger.
   * access the CGI URL that gives the problem, then change foo.cgi to 
   * capture.cgi and reload.  That dumps the env to /tmp/capcgi.dat.
   */
  /* cgiReadEnvironment("/tmp/capcgi.dat"); */

  /* create the parallel_rc line */
  line = parallel_rc_new();

  menu_C  = cgi_units_menu_new(line->units_C);
  menu_Rs = cgi_units_menu_new(line->units_Rs);
  menu_Rp = cgi_units_menu_new(line->units_Rp);
  menu_freq = cgi_units_menu_new(line->units_freq);

  cgi_units_attach_entry(menu_C, "entry_C");

  /* flags to the program: */
  if(cgiFormStringNoNewlines("s2p", str_action, ACTION_LEN) ==
     cgiFormSuccess){
    action = S2P;
    line->series_to_parallel = 1;
  }
  else if(cgiFormStringNoNewlines("p2s", str_action, ACTION_LEN) ==
     cgiFormSuccess){
    action = P2S;
    line->series_to_parallel = 0;
  }
  else if(cgiFormStringNoNewlines("reset", str_action, ACTION_LEN) ==
     cgiFormSuccess){
    action = RESET;
  }
  else{
    action = LOAD;
  }

  /*
   * extract the parameters from the CGI form and use them to populate
   * the parallel_rc structure
   */

  if ( (action != RESET) && (action != LOAD) ) {
    
    cgi_units_menu_read();
        
    /* Series Network */
    if(cgiFormDouble("Cs", &Cs, defCs/line->units_C->sf) !=
       cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading series capacitance");
    }
    if( Cs <= 0.0 ) {
      Cs = defCs/line->units_C->sf;
      printFormError("Capacitance may not be negative");
    }

    if(cgiFormDouble("Rs", &Rs, defRs/line->units_Rs->sf) !=
       cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading series resistance");
    }
    if( Rs <= 0.0 ) {
      Rs = defRs/line->units_Rs->sf;
      printFormError("Resistance may not be negative");
    }

    if(cgiFormDouble("Qs", &Qs, defQs) !=
       cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading series quality factor");
    }
    if( Qs <= 0.0 ) {
      Qs = defQs;
      printFormError("Quality factor may not be negative");
    }

    /* Parallel Network */
    if(cgiFormDouble("Cp", &Cp, defCp/line->units_C->sf) !=
       cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading parallel capacitance");
    }
    if( Cp <= 0.0 ) {
      Cp = defCp/line->units_C->sf;
      printFormError("Capacitance may not be negative");
    }

    if(cgiFormDouble("Rp", &Rp, defRp/line->units_Rp->sf) !=
       cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading parallel resistance");
    }
    if( Rp <= 0.0 ) {
      Rp = defRp/line->units_Rp->sf;
      printFormError("Resistance may not be negative");
    }

    if(cgiFormDouble("Qp", &Qp, defQp) !=
       cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading parallel quality factor");
    }
    if( Qp <= 0.0 ) {
      Qp = defQp;
      printFormError("Quality factor may not be negative");
    }

    /* Frequency of operation */
    if(cgiFormDouble("freq", &freq, defFREQ/line->units_freq->sf) !=
       cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading frequency");
    }
    if( freq <= 0.0 ) {
      freq = defFREQ/line->units_freq->sf;
      printFormError("Frequency must be %gt 0");
    }


    /* control parameters: */
    cgiFormRadio("stype", stypeStrings, NSTYPE, &stype, defSTYPE);
    
    if (cgiFormRadio("stype", stypeStrings, NSTYPE, 
		     &line->use_Q, defSTYPE) !=
        cgiFormSuccess){
      inputErr(&input_err);
      printFormError("Error reading Q/C versus R/C radio buttons");
    }
    

#ifdef DEBUG
  fprintf(cgiOut,"CGI:  action = %d\n",action);
#endif


  /* copy data over to the line structure */
  line->Cs = Cs*line->units_C->sf;
  line->Rs = Rs*line->units_Rs->sf;
  line->Qs = Qs;

  line->Cp = Cp*line->units_C->sf;
  line->Rp = Rp*line->units_Rp->sf;
  line->Qp = Qp;

  line->freq = freq * line->units_freq->sf;
  
  } /* if ( (action != RESET) && (action != LOAD) ) */
  else {

#ifdef DEBUG
    printf("parallel_rc.cgi:  checking for a cookie to load\n");
#endif
    /* load a stored cookie if it exists */
    if(cgiCookieStringNoNewlines(name_string, cookie_load_str, COOKIE_MAX) ==
       cgiCookieSuccess) {
#ifdef DEBUG
    printf("parallel_rc.cgi:  loading cookie \"%s\"\n", cookie_load_str);
#endif
      parallel_rc_load_string(line, cookie_load_str);
#ifdef DEBUG
    printf("parallel_rc.cgi:  finished loading cookie\n\n");
#endif
    }
  }
  
  if (!input_err){
    cookie_str = parallel_rc_save_string(line);
    cookie = cgiCookie_new(name_string, cookie_str);
    cgiCookie_MaxAge_set(cookie, COOKIE_AGE);
    cgiHeaderSetCookie(cookie);
    
    /* Put out the CGI header */
    cgiHeaderContentType("text/html");  
  }
  else {
    fixInputMsg();
  }
  
#ifdef DEBUG
    fprintf(cgiOut, "<pre>use_Q = %d\n</pre>\n", line->use_Q);
    fprintf(cgiOut, "<pre>series_to_parallel = %d\n</pre>\n", line->series_to_parallel);
#endif
    
    switch (line->use_Q){
    case 1:
      sprintf(use_Q_checked,"checked");
      sprintf(use_R_checked," ");
      break;
    case 0:
      sprintf(use_Q_checked," ");
      sprintf(use_R_checked,"checked");
      break;
    default:
      fprintf(cgiOut,"<PRE>\n");
      fprintf(cgiOut,"CGI:  illegal stype (%d)\n", line->use_Q);
      fprintf(cgiOut,"</PRE>\n");
      exit(1);
      break;
  }

  
#ifdef DEBUG
  fprintf(cgiOut,"<pre>\n");
  fprintf(cgiOut,"CGI: --------------- Series/Parallel RC Network -----------\n");
  fprintf(cgiOut,"CGI: Cs = %g %s\n",
	  line->Cs/line->units_C->sf, line->units_C->name);
  fprintf(cgiOut,"CGI: Rs = %g %s\n",
	  line->Rs/line->units_Rs->sf, line->units_Rs->name);
  fprintf(cgiOut,"CGI: Qs = %g\n",
	  line->Qs);

  fprintf(cgiOut,"CGI: Cp = %g %s\n",
	  line->Cp/line->units_C->sf, line->units_C->name);
  fprintf(cgiOut,"CGI: Rp = %g %s\n",
	  line->Rp/line->units_Rp->sf, line->units_Rp->name);
  fprintf(cgiOut,"CGI: Qp = %g\n",
	  line->Qp);

  fprintf(cgiOut,"CGI: Frequency = %g %s\n",
	  line->freq/line->units_freq->sf, line->units_freq->name); 

  fprintf(cgiOut,"CGI: use_Q = %d\n", line->use_Q);
  fprintf(cgiOut,"CGI: series_to_parallel = %d\n", line->series_to_parallel);
  
  fprintf(cgiOut,"CGI: action = %d\n", action);
  fprintf(cgiOut,"CGI: str_action = \"%s\"\n", str_action);
  fprintf(cgiOut,"CGI: -------------- ---------------------- ----------\n");
  fprintf(cgiOut,"</pre>\n");
#endif

  switch (action){
  case S2P:
  case P2S:
    /* 
     * in case parallel_rc_calc has some error output, surround it
     * with <pre></pre> so we can read it ok.
     */
    fprintf(cgiOut,"<pre>");
    parallel_rc_calc(line, line->freq);
    fprintf(cgiOut,"</pre>\n");

    break;
  }

  /* include the HTML output */
#include "header_html.c"
#include "parallel_rc_html.c"
#include "footer_html.c"
	
  return 0;
}

