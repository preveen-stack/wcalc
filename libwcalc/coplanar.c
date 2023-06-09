/*      $Id: coplanar.c,v 1.18 2009/02/27 05:25:02 dan Exp $ */

/*
 * Copyright (C) 2006, 2007, 2009 Dan McMahill
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
 *  References:
 *    Brian C. Wadell
 *    "Transmission Line Design Handbook"
 *    Archtech House, 1991
 *    ISBN 0-89006-436-9
 *    TK7876.W29 1991
 *
 *
 */

/* debug coplanar_syn()  */
/* #define DEBUG_SYN */

/* debug coplanar_calc() */
/* #define DEBUG_CALC */

#include "config.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "alert.h"
#include "defaults.h"
#include "mathutil.h"
#include "misc.h"
#include "physconst.h"
#include "coplanar.h"
#include "coplanar_loadsave.h"
#include "units.h"

#ifdef DMALLOC
#include <dmalloc.h>
#endif

/* flags for coplanar_calc_int() */
#define NOLOSS   0
#define WITHLOSS 1

static int coplanar_calc_int(coplanar_line *line, double f, int flag);


/*
 *
 *
 *                          |<--S--|<--W-->|<---S--->|
 *   _______________________        _______           _______________________
 *   //// ground metal //// |      | metal |         | //// ground metal ////
 *   -----------------------------------------------------------------------
 *  (  dielectric,er                      /|\                              (
 *   )                                 H   |                                )
 *  (                                     \|/                              (
 *   -----------------------------------------------------------------------
 *   ////////////////////////////// ground /////////////////////////////////
 * 
 *
 */

int coplanar_calc(coplanar_line *line, double f)
{
  int rslt;
  
#ifdef DEBUG_CALC
  printf("coplanar_calc(): --------------- Coplanar Analysis ------------\n");
  printf("coplanar_calc(): Metal width                 = %g m\n",line->w);
  printf("coplanar_calc():                             = %g %s\n",
	 line->w/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_calc(): Metal spacing               = %g m\n",line->s);
  printf("coplanar_calc():                             = %g %s\n",
	 line->s/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_calc(): Metal thickness             = %g m\n",
	 line->subs->tmet);
  printf("coplanar_calc():                             = %g %s\n",
	 line->subs->tmet/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_calc(): Metal relative resistivity  = %g \n",
	 line->subs->rho);
  printf("coplanar_calc(): Metal surface roughness     = %g m-rms\n",
	 line->subs->rough);
  printf("coplanar_calc():                             = %g %s\n",
	 line->subs->rough/line->units_rough->sf, line->units_rough->name);
  printf("coplanar_calc(): Substrate thickness         = %g m\n",
	 line->subs->h);
  printf("coplanar_calc():                             = %g %s\n",
	 line->subs->h/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_calc(): Substrate dielectric const. = %g \n",
	 line->subs->er);
  printf("coplanar_calc(): Substrate loss tangent      = %g \n",
	 line->subs->tand);
  printf("coplanar_calc(): Frequency                   = %g MHz\n",
	 f/1e6); 
  printf("coplanar_calc():                             = %g %s\n",
	 f/line->units_freq->sf, line->units_freq->name);
  printf("coplanar_calc(): -------------- --------------------- ----------\n");
#endif
  rslt = coplanar_calc_int(line, f, WITHLOSS);
  return(rslt);
}

static int coplanar_calc_int(coplanar_line *line, double f, int flag)
{

  /* calculation variables */
  double k, k1, kt, z0, v, loss;
  double k_kp, k_kp1, k_kpt;
  double a, at, b, bt, eeff;

  /* loss variables*/
  double lambdag, q;
  double z1,z2,lc,ld,delta;
  double mu;

  int rslt;
  coplanar_line tmp_line;

  double L, R, C, G, delay, depth, deltal;

#ifdef DEBUG_CALC
  printf("coplanar_calc_int(): --------------- Coplanar Analysis ------------\n");
  printf("coplanar_calc_int(): flag                        = %d\n",flag);
  printf("coplanar_calc_int():       WITHLOSS              = %d\n",WITHLOSS);
  printf("coplanar_calc_int():       NOLOSS                = %d\n",NOLOSS);
  printf("coplanar_calc_int(): -------------- --------------------- ----------\n");
#endif

  /*
   * Characteristic Impedance
   */

#ifdef DEBUG_CALC
  printf("coplanar_calc_int(): Thin coplanar analysis\n");
#endif

  if( line->with_ground == 0) {
    /*
     * These equations are _without_ the bottom side ground plane.
     */

    /* match the notation in Wadell */
    a = line->w;
    b = line->w + 2.0 * line->s;

    /* Wadell (3.4.1.8), (3.4.1.9) but avoid issues with tmet = 0 */
    if( line->subs->tmet > 0.0) {
      at = a + (1.25*line->subs->tmet / M_PI)*(1.0 + log( 4.0 * M_PI * a / line->subs->tmet));
      bt = b - (1.25*line->subs->tmet / M_PI)*(1.0 + log( 4.0 * M_PI * a / line->subs->tmet));
    } else {
      at = a;
      bt = b;
    }

    /*
     * we have to be a bit careful here.  If we're not careful, we can
     * end up with b < a which is nonsense and it will cause the
     * calculation of the elliptic integral ratios to produce NaN
     */
    if( bt <= at ) {
      at = a;
      bt = b;
      alert("Warning:  bt <= at so I am reverting to zero thickness equations\n");
    }

    /* Wadell (3.4.1.6) */
    k1 = sinh(M_PI * at / (4.0 * line->subs->h)) / sinh(M_PI * bt / (4.0 * line->subs->h));

    /* Wadell (3.4.1.4), (3.4.1.5) */
    k = a / b;
    kt = at / bt;

    k_kp  = k_over_kp( k );
    k_kp1 = k_over_kp( k1 );
    k_kpt = k_over_kp( kt );

    /* Wadell (3.4.1.3) */
    eeff = 1.0 + 0.5*(line->subs->er - 1.0)*k_kp1/k_kp;

    /* Wadell (3.4.1.2) */
    line->keff = eeff - (eeff - 1.0) / ( (0.5*(b - a)/(0.7 * line->subs->tmet))*k_kp + 1.0);

    /* for coplanar waveguide (ground signal ground) */
    z0 = FREESPACEZ0 / (4.0 * sqrt(line->keff) * k_kpt);

#ifdef DEBUG_CALC
    printf("%s():  using the equations without ground plane\n", __FUNCTION__);
    printf("%s():  a     = %g\n", __FUNCTION__, a);
    printf("%s():  b     = %g\n", __FUNCTION__, b);
    printf("%s():  at    = %g\n", __FUNCTION__, at);
    printf("%s():  bt    = %g\n", __FUNCTION__, bt);
    printf("%s():  k1    = %g\n", __FUNCTION__, k1);
    printf("%s():  k     = %g\n", __FUNCTION__, k);
    printf("%s():  kt    = %g\n", __FUNCTION__, kt);
    printf("%s():  k_kp  = %g\n", __FUNCTION__, k_kp);
    printf("%s():  k_kp1 = %g\n", __FUNCTION__, k_kp1);
    printf("%s():  k_kpt = %g\n", __FUNCTION__, k_kpt);
    printf("%s():  eff   = %g\n", __FUNCTION__, eeff);
    printf("%s():  keff  = %g\n", __FUNCTION__, line->keff);
    printf("%s():  z0    = %g\n", __FUNCTION__, z0);
#endif

  } else {  
    /*
     * These equations are _with_ the bottom side ground plane.
     *
     * See Wadell, eq 3.4.3.1 through 3.4.3.6 on p. 79
     */

    /*
     * FIXME -- surely these are not accurate without accounting for
     * metal thickness...
     */
    k = line->w / (line->w + 2.0*line->s);
    k1 = tanh(M_PI*line->w / (4.0*line->subs->h)) / 
      tanh(M_PI*(line->w + 2.0*line->s) / (4.0 * line->subs->h));
    k_kp = k_over_kp( k );
    k_kp1 = k_over_kp( k1 );

    line->keff = (1.0 + line->subs->er*k_kp1/k_kp) /
      (1.0 + k_kp1/k_kp);

    z0 = (FREESPACEZ0 / (2.0 * sqrt(line->keff))) / (k_kp + k_kp1);
#ifdef DEBUG_CALC
    printf("%s():  using the equations with ground plane\n", __FUNCTION__);
    printf("%s():  k     = %g\n", __FUNCTION__, k);
    printf("%s():  k1    = %g\n", __FUNCTION__, k1);
    printf("%s():  k_kp  = %g\n", __FUNCTION__, k_kp);
    printf("%s():  k_kp1 = %g\n", __FUNCTION__, k_kp1);
    printf("%s():  keff  = %g\n", __FUNCTION__, line->keff);
    printf("%s():  z0    = %g\n", __FUNCTION__, z0);
#endif
  }

#ifdef DEBUG_CALC
  printf("%s():  z0 = %g ohms\n", __FUNCTION__, z0);
#endif
	
  /*
   * Electrical Length
   */

  /* propagation velocity (meters/sec) */
  v = LIGHTSPEED / sqrt(line->keff);
  line->len = 360*line->l*f/v;
  
  /*
   * delay on line 
   */
  delay = line->l / v;
  

  /* FIXME - need open circuit end correction for coplanar */
  deltal = 0;

  /* find the incremental circuit model */
  
  /*
   * find L and C from the impedance and velocity
   * 
   * z0 = sqrt(L/C), v = 1/sqrt(LC)
   * 
   * this gives the result below
   */
   
  L = z0/v;
  C = 1.0/(z0*v);
  
  /* resistance and conductance will be updated below */
  R = 0.0;
  G = 2*M_PI*f*C*line->subs->tand;

  delay = line->l / v;

  /* we'll update this if its a top level calculation */
  depth = 0;

  /* Loss */
  if(flag == WITHLOSS) {
#ifdef DEBUG_CALC
    printf("coplanar_calc_int():  starting loss calculations\n");
#endif
    /*
     * Dielectric Losses
     */

    /* freq * wavelength = velocity */
    lambdag = (LIGHTSPEED/sqrt(line->keff)) / f;

#ifdef DEBUG_CALC
    printf("coplanar_calc_int():  \n");
    printf("                      lambdag = %g\n", lambdag);
    printf("                      keff    = %g\n", line->keff);
    printf("                      er      = %g\n", line->subs->er);
#endif

    /* q from Wadell (2.7.2.1) avoiding a 0/0 error  */
    /* FIXME -- what is the right thing here?  */
    if( fabs(line->subs->er*line->keff - line->keff) < 1e-6 )
      q = 1.0;
    else
      q = (line->keff - 1.0) / (line->keff  - line->keff / line->subs->er);

    /* 
     * loss from Wadell (3.4.1.10).  Note that (3.4.1.10) seems to be
     * missing a factor of pi.
     */
    ld = M_PI * q * line->subs->er * line->subs->tand / (line->keff * lambdag);

    /* Equivalent shunt conductance (Siemens/meter) */
    G = 2.0*ld/z0;

    /* loss in dB/meter */
    ld = 20.0*log10(exp(1.0)) * ld;
    
    /* loss in dB */
    ld = ld * line->l;

  
    /*
     * Conduction Losses
     */
       
    /* calculate skin depth */

    /* permeability of free space */
    mu = 4.0*M_PI*1e-7;
   
    /* skin depth in meters */
    line->skindepth = sqrt(line->subs->rho/(M_PI*f*mu));

    delta = line->skindepth;
       
    /* make a copy, we'll want it  later */
    depth = delta;

    /* warn the user if the loss calc is suspect. */
    if(line->subs->tmet < 3.0*line->skindepth && line->subs->tmet > 0.0)
      {
	alert("Warning:  The metal thickness is less than\n"
	      "three skin depths.  Use the loss results with\n"
	      "caution.\n");
      }

    /*
     * if the skinDepth is greater than Tmet, assume current
     * flows uniformly through  the conductor.  Then loss
     * is just calculated from the dc resistance of the
     * trace.  This is somewhat incorrect
     * but I dont have time right now to come up
     * with a better result.
     */
    if(line->skindepth < line->subs->tmet/3.0)
      {
   
	/* Use Wheelers "incremental inductance" approach */

	/* clone the line */
	tmp_line = *line;
	tmp_line.subs = coplanar_subs_new();
	*(tmp_line.subs) = *(line->subs);

	/* set relative permeability to 1.0 for this */
	tmp_line.subs->er = 1.0;

	/* er = 1.0 impedance with nominal dimensions */
	rslt = coplanar_calc_int(&tmp_line, f, NOLOSS);
	z1 = tmp_line.z0;

	/* 
	 * er = 1.0 impedance with dimensions modified by
	 * 1/2 the skin depth on all conductors.  Note that
	 * this means reduce width by 1/2 the skin depth on both sides
	 * for a total reduction equal to the skin depth.
	 */
	tmp_line.w = line->w - line->skindepth;
	tmp_line.subs->tmet = line->subs->tmet - line->skindepth;
	tmp_line.subs->h = line->subs->h + line->skindepth;
	rslt = coplanar_calc_int(&tmp_line,f,NOLOSS);
	z2 = tmp_line.z0;
	free(tmp_line.subs);

	/* conduction losses, nepers per meter */
	lc = (M_PI*f/LIGHTSPEED)*(z2 - z1)/z0;
#ifdef DEBUG_CALC
	printf("%s(): HF conduction loss, z1=%g,z2=%g,z0=%g,lc=%g\n",
	       __FUNCTION__, z1, z2, z0, lc);
#endif
	R = lc*2*z0;

      }

    /* "dc" case  */
    else if(line->subs->tmet > 0.0 && line->subs->rho > 0.0)
      {
	/* resistance per meter = 1/(Area*conductivity) */
	R = line->subs->rho/(line->w*line->subs->tmet);  
  
	/* conduction losses, nepers per meter */
	lc = R/(2.0*z0);

	/*
	 * change delta to be equal to the metal thickness for
	 * use in surface roughness correction
	 */
	delta = line->subs->tmet;
#ifdef DEBUG_CALC
	printf("coplanar_calc_int(): LF conduction loss, R=%g, lc=%g\n",
	       R,lc);
#endif
	/* no conduction loss case */
      }
    else
      {
	lc=0.0;
#ifdef DEBUG_CALC
	printf("coplanar_calc_int(): 0 thickness strip.  setting"
	       "conduction loss=0\n");
#endif
      }

 
    /* loss in dB/meter */
    lc = 20.0*log10(exp(1.0)) * lc;
   
    /* loss in dB */
    lc = lc * line->l;
   
    /* factor due to surface roughness
     * note that the equation in Fooks and Zakarevicius is slightly 
     * errored.   
     * the correct equation is penciled in my copy and was 
     * found in Hammerstad and Bekkadal
     */
    if( lc > 0.0 )
      lc = lc * (1.0 + (2.0/M_PI)*atan(1.4*pow((line->subs->rough/delta),2.0)));
   
    /*
     * Total Loss
     */
   
    loss = ld + lc;
   
  } /* if (flag == WITHLOSS ) */
  else {
    lc = 0.0;
    ld = 0.0;
    loss = 0.0;
  }

   
  /*  store results */
  line->z0 = z0;

  /* XXX fixme .  Ro + j Xo = sqrt((jwL + R) / (jwC + G))*/
  line->Ro = z0;
  line->Xo = 0.0;

  line->lc = lc;
  line->ld = ld;

  line->loss = loss;
  line->losslen = loss/line->l;
  line->skindepth = depth;

  line->deltal = deltal;
  line->delay = delay;

  line->Ls = L;
  line->Rs = R; 
  line->Cs = C;
  line->Gs = G;

#ifdef DEBUG_CALC
    printf("%s():  L     = %g\n", __FUNCTION__, L);
    printf("%s():  R     = %g\n", __FUNCTION__, R);
    printf("%s():  C     = %g\n", __FUNCTION__, C);
    printf("%s():  G     = %g\n", __FUNCTION__, G);
#endif

  return 0;
}



/*
 *
 */


int coplanar_syn(coplanar_line *line, double f, int flag)
{
  int rslt;

  double Ro, Xo;
  double v, len;

  /* permeability and permitivity of free space */
  double mu0, e0;


  /* the optimization variables, current, min/max, and previous values */
  double var = 0, varmax = 0, varmin = 0, varold = 0;
  
  /* errors due to the above values for the optimization variable */
  double err = 0, errmax = 0, errmin = 0, errold = 0;

  /* derivative */
  double deriv;

  /* the sign of the slope of the function being optimized */
  double sign = 0;

  /* pointer to which parameter of the line is being optimized */
  double *optpar;

  /* number of iterations so far, and max number allowed */
  int iters = 0;
  int maxiters = 100;
  
  /* convergence parameters */
  double abstol = 0.1e-6;
  double reltol = 0.01e-6;
  
  /* flag to end optimization */
  int done = 0;
  
  
  /* permeability and permitivitty of free space (H/m and F/m) */
  mu0 = 4.0 * M_PI * 1.0e-7;
  e0  = 1.0 / (mu0 * LIGHTSPEED * LIGHTSPEED);
  

  /*
   * figure out what parameter we're synthesizing and set up the
   * various optimization parameters.
   *
   * Basically what we need to know are
   *    1)  min/max values for the parameter
   *    2)  how to access the parameter
   *    3)  an initial guess for the parameter
   */

  switch(flag) {
  case CPWSYN_W:
    optpar = &(line->w);
    varmax = 100.0*line->subs->h;
    varmin = 0.01*line->subs->h;
    var    = line->subs->h;
    break;

  case CPWSYN_S:
    optpar = &(line->s);
    varmax = 100.0*line->subs->h;
    varmin = 0.01*line->subs->h;
    var    = line->subs->h;
    break;

  case CPWSYN_H:
    optpar = &(line->subs->h);
    varmax = 100.0*line->w;
    varmin = 0.01*line->w;
    var    = line->w;
    break;

  case CPWSYN_ER:
    optpar = &(line->subs->er);
    varmax = 100.0;
    varmin = 1.0;
    var    = 5.0;
    break;

  default:
    fprintf(stderr,"coplanar_synth():  illegal flag=%d\n",flag);
    exit(1);
    break;
  }

  /*
   * read values from the input line structure
   */

  Ro = line->Ro;
  Xo = line->Xo;


  /*
   * temp value for l used while synthesizing the other parameters.
   * We'll correct l later.
   */
  len = line->len;  /* remember what electrical length we want */
  line->l = 1.0;

#ifdef DEBUG_SYN
  printf("coplanar_syn(): --------------- Coplanar Synthesis -----------\n");
  printf("coplanar_syn(): Metal width                 = %g m\n", line->w);
  printf("coplanar_syn():                             = %g %s\n",
	 line->w/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_calc(): Metal spacing               = %g m\n",line->s);
  printf("coplanar_calc():                             = %g %s\n",
	 line->s/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_syn(): Metal thickness             = %g m\n",line->subs->tmet);
  printf("coplanar_syn():                             = %g %s\n",
	 line->subs->tmet/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_syn(): Metal relative resistivity  = %g \n",line->subs->rho);
  printf("coplanar_syn(): Metal surface roughness     = %g m-rms\n",line->subs->rough);
  printf("coplanar_syn():                             = %g %s\n",
	 line->subs->rough/line->units_rough->sf, line->units_rough->name);
  printf("coplanar_syn(): Substrate thickness         = %g m\n",line->subs->h);
  printf("coplanar_syn():                             = %g %s\n",
	 line->subs->h/line->units_lwht->sf, line->units_lwht->name);
  printf("coplanar_syn(): Substrate dielectric const. = %g \n",line->subs->er);
  printf("coplanar_syn(): Substrate loss tangent      = %g \n",line->subs->tand);
  printf("coplanar_syn(): Frequency                   = %g MHz\n",f/1e6); 
  printf("coplanar_syn():                             = %g %s\n",
	 line->freq/line->units_freq->sf, line->units_freq->name);
  printf("coplanar_syn(): -------------- --------------------- ----------\n");
  printf("coplanar_syn(): Desired Zo                  = %g ohm\n",Ro);
  printf("coplanar_syn(): Desired electrical length   = %g degrees\n", len);
  printf("coplanar_syn(): -------------- --------------------- ----------\n");
  printf("coplanar_syn(): Starting optimization value = %g\n",var);
  printf("coplanar_syn(): Optimization flag           = %d\n",flag);
  printf("coplanar_syn(): -------------- --------------------- ----------\n");
#endif

  if (!done) {
    /* Initialize the various error values */
    *optpar = varmin;
    rslt = coplanar_calc_int(line,f,NOLOSS);
    if (rslt)
      return rslt;
    errmin = line->z0 - Ro;

    *optpar = varmax;
    rslt = coplanar_calc_int(line,f,NOLOSS);
    if (rslt)
      return rslt;
    errmax = line->z0 - Ro;

    *optpar = var;
    rslt = coplanar_calc_int(line,f,NOLOSS);
    if (rslt)
      return rslt;
    err = line->z0 - Ro;

    varold = 0.99*var;
    *optpar = varold;
    rslt = coplanar_calc_int(line,f,NOLOSS);
    if (rslt)
      return rslt;
    errold = line->z0 - Ro;

    /* see if we've actually been able to bracket the solution */
    if (errmax*errmin > 0) {
      alert("Could not bracket the solution.\n"
	    "Synthesis failed.\n");
      return -1;
    }
  
    /* figure out the slope of the error vs variable */
    if (errmax > 0)
      sign =  1.0;
    else
      sign = -1.0;

    iters = 0;
  }

  /* the actual iterations */
  while (!done) {
    /* update the interation count */
    iters = iters + 1;
    
    /* calculate an estimate of the derivative */
    deriv = (err - errold) / (var - varold);

#ifdef DEBUG_SYN
    printf("Iteration #%d:  varmin = %g, var = %g, varold = %g, varmax = %g, err = %g, errold = %g, deriv = %g\n", 
	   iters, varmin, var, varold, varmax, err, errold, deriv);
#endif
    /* copy over the current estimate to the previous one */
    varold = var;
    errold = err;

    /* try a quasi-newton iteration */
    var = var - err / deriv;
  
    
    /*
     * see if the new guess is within our bracketed range.  If so,
     * accept the new estimate.  If not, toss it out and do a
     * bisection step to reduce the bracket.
     */

    if ( (var > varmax) || (var < varmin) ){
#ifdef DEBUG_SYN
      printf("coplanar_syn():  Taking a bisection step\n");
#endif
      var = (varmin + varmax)/2.0;
    }

    /* update the error value */
    *optpar = var;
    rslt = coplanar_calc_int(line, f, NOLOSS);
#ifdef DEBUG_SYN
    printf("line->z0 = %g Ohms\n", line->z0);
#endif
    err = line->z0 - Ro;
    if (rslt)
      return rslt;

    /* update our bracket of the solution. */

    if (sign*err > 0)
      varmax = var;
    else
      varmin = var;

 
    /* check to see if we've converged */
    if (fabs(err) < abstol){
      done = 1;
#ifdef DEBUG_SYN
      printf("coplanar_syn():  abstol converged after iteration #%d\n",
	     iters);
#endif
    }
    else if ( fabs( (var - varold) / var) < reltol){
      done = 1;
#ifdef DEBUG_SYN
      printf("coplanar_syn():  reltol converged after iteration #%d\n",
	     iters);
#endif
    }
    else if (iters >= maxiters){
      alert("Synthesis failed to converge in\n"
	    "%d iterations.  Final optimization parameters:\n"
	    "  min = %g\n"
	    "  val = %g\n"
	    "  max = %g\n", maxiters, varmin, var, varmax);
      return -1;
    }
    

#ifdef DEBUG_SYN
      printf("coplanar_syn(): iteration #%d:  var = %g\terr = %g\n", iters, var, err);
#endif
      /* done with iteration */
  }

  /* velocity on line */
  coplanar_calc(line, f);

  v = LIGHTSPEED / sqrt(line->subs->er);

  line->l = (len/360.0) * (v/f);


  /* recalculate using real length to find loss  */
  coplanar_calc(line,f);
  
#ifdef DEBUG_SYN
  printf("synthesis for Z0=%g [ohms] and len=%g [deg]\n", line->z0, line->len);
  printf("produced:\n");
  printf("\twidth = %g [m] \n\tspacing = %g [m]\n\tlength = %g [m]\n",
	 line->w, line->s, line->l);
  printf("\twidth = %g [%s] \n\tspacing = %g [%s]\n\tlength = %g [%s]\n",
	 line->w/line->units_lwht->sf, line->units_lwht->name,
	 line->s/line->units_lwht->sf, line->units_lwht->name,
	 line->l/line->units_lwht->sf, line->units_lwht->name);
#endif

  return 0;
}



void coplanar_line_free(coplanar_line * line)
{
  free(line->subs);
  wc_units_free(line->units_lwht);
  wc_units_free(line->units_L);
  wc_units_free(line->units_R);
  wc_units_free(line->units_C);
  wc_units_free(line->units_G);
  wc_units_free(line->units_len);
  wc_units_free(line->units_freq);
  wc_units_free(line->units_loss);
  wc_units_free(line->units_losslen);
  wc_units_free(line->units_rho);
  wc_units_free(line->units_rough);
  wc_units_free(line->units_delay);
  wc_units_free(line->units_depth);
  wc_units_free(line->units_deltal);
  free(line);
}


coplanar_line *coplanar_line_new()
{
  coplanar_line *newline;

  newline = (coplanar_line *) malloc(sizeof(coplanar_line));
  if(newline == NULL)
    {
      fprintf(stderr,"coplanar_line_new: malloc() failed\n");
      exit(1);
    }

  newline->subs = coplanar_subs_new();

  /* create the units */
  newline->units_lwht    = wc_units_new(WC_UNITS_LENGTH);
  newline->units_L       = wc_units_new(WC_UNITS_INDUCTANCE_PER_LEN);
  newline->units_R       = wc_units_new(WC_UNITS_RESISTANCE_PER_LEN);
  newline->units_C       = wc_units_new(WC_UNITS_CAPACITANCE_PER_LEN);
  newline->units_G       = wc_units_new(WC_UNITS_CONDUCTANCE_PER_LEN);
  newline->units_len     = wc_units_new(WC_UNITS_LENGTH);
  newline->units_freq    = wc_units_new(WC_UNITS_FREQUENCY);
  newline->units_loss    = wc_units_new(WC_UNITS_DB);
  newline->units_losslen = wc_units_new(WC_UNITS_DB_PER_LEN);
  newline->units_rho     = wc_units_new(WC_UNITS_RESISTIVITY);
  newline->units_rough   = wc_units_new(WC_UNITS_LENGTH);
  newline->units_delay   = wc_units_new(WC_UNITS_TIME);
  newline->units_depth   = wc_units_new(WC_UNITS_LENGTH);
  newline->units_deltal  = wc_units_new(WC_UNITS_LENGTH);

  /* load in the defaults */
  coplanar_load_string(newline, default_coplanar);

  /* and do a calculation to finish the initialization */
  coplanar_calc(newline, newline->freq);

  return(newline);
}


coplanar_subs *coplanar_subs_new(void)
{
  coplanar_subs *newsubs;

  newsubs = (coplanar_subs *) malloc(sizeof(coplanar_subs));
  if(newsubs == NULL)
    {
      fprintf(stderr,"coplanar_subs_new: malloc() failed\n");
      exit(1);
    }

  return(newsubs);
}
