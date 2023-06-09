/* $Id: coupled_stripline_syn.c,v 1.3 2008/11/29 20:42:36 dan Exp $ */

static char vcid[] = "$Id: coupled_stripline_syn.c,v 1.3 2008/11/29 20:42:36 dan Exp $";

/*
 * Copyright (C) 2001, 2002, 2004, 2006, 2007 Dan McMahill
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

#include "config.h"

#include <stdio.h>
#include <stdlib.h>

#include "coupled_stripline.h"
#include "physconst.h"

#include "mex.h"

#ifdef DMALLOC
#include <dmalloc.h>
#endif

/*
 * function [w_out,s_out,l_out] = 
 *       coupled_stripline_syn(z0,k,w,s,h,l,tmet,rho,rough,er,tand,f,flag);
 */

/* Input Arguments */

#define	Z0_IN	  prhs[0]
#define	K_IN	  prhs[1]
#define	ELEN_IN	  prhs[2]
#define	W_IN	  prhs[3]
#define	S_IN	  prhs[4]
#define	H_IN	  prhs[5]
#define	L_IN	  prhs[6]
#define	TMET_IN   prhs[7]
#define	RHO_IN    prhs[8]
#define	ROUGH_IN  prhs[9]
#define	ER_IN	  prhs[10]
#define	TAND_IN	  prhs[11]
#define	FREQ_IN	  prhs[12]
#define	FLAG_IN	  prhs[13]

/* Output Arguments */

#define	W_OUT	   plhs[0]
#define	S_OUT	   plhs[1]
#define	L_OUT	   plhs[2]

#define CHECK_INPUT(x,y,z,v)                                          \
m = mxGetM(x);                                                        \
n = mxGetN(x);                                                        \
if (!mxIsNumeric(x) ||                                                \
     mxIsComplex(x) ||                                                \
     mxIsSparse(x)  ||                                                \
    !mxIsDouble(x) ) {                                                \
    mexErrMsgTxt(#y " must be a real valued vector "                  \
                    "in COUPLED_STRIPLINE_SYN.");                    \
}                                                                     \
if (vector && (m>1 || n>1) &&                                         \
    ( (m != rows) || (n != cols) ) ){                                 \
    mexErrMsgTxt(#y ": all vector/matrix inputs must have the same"   \
                    " dimensions in COUPLED_STRIPLINE_SYN.");        \
    (z) = NULL;                                                       \
}                                                                     \
else if(m*n > 1) {                                                    \
 vector=1;                                                            \
 rows=m;                                                              \
 cols=n;                                                              \
 (z) = &ind;                                                          \
}                                                                     \
else {                                                                \
 (z) = &fixed;                                                        \
}                                                                     \
(v) = mxGetPr(x);                                                     \


/*
 * Note that the V4_COMPAT is for compiling with Matlab.
 * For Scilab, we always want to avoid the `const' part.
 */
void mexFunction(
                 int nlhs,
		 mxArray *plhs[],
                 int nrhs,
#if !defined(V4_COMPAT) && !defined(SCI_MEX)
		 const mxArray *prhs[]
#else
		 mxArray *prhs[]
#endif
		 )
{
  /* inputs */
  double *z0,*k,*elen,*w,*s,*h,*l,*tmet,*rho,*rough,*er,*tand,*freq,*flag;
  unsigned int *ind_z0,*ind_k,*ind_elen,*ind_w,*ind_s,*ind_h,*ind_l;
  unsigned int *ind_tmet,*ind_rho;
  unsigned int *ind_rough,*ind_er,*ind_tand,*ind_freq,*ind_flag;

  /* outputs */
  double *w_out,*s_out,*l_out;

  /* number of rows and columns */
  unsigned int rows=1,cols=1;

  /* temp variables */
  unsigned int	m,n;

  /* do we have any vectors in our input */
  int vector=0;

  /* indices for the main loop */
  unsigned int ind=0, fixed=0;

  /* our coupled_stripline for calculations */
  coupled_stripline_line *line;


  /*
   * Argument checking and processing
   */

  if (nrhs == 0) {
    mexPrintf("%s\r\n",vcid);
    return;
  }

  /* Check for proper number of arguments */
  if (nrhs != 14) {
    mexErrMsgTxt("wrong number of input arguments to COUPLED_STRIPLINE_SYN"
		 " (needs 14).");
  } 

  if (nlhs > 3) {
    mexErrMsgTxt("wrong number of output arguments to COUPLED_STRIPLINE_SYN"
		 " (needs <= 3).");
  }
  
  
  /* 
   * Check the dimensions of the inputs and assign pointers to 
   * the various parameters 
   *
   * CHECK_INPUT( input_variable,
   *              variable_name (for messages),
   *              index,
   *              pointer)
   */
  CHECK_INPUT(Z0_IN, Z0, ind_z0, z0);
  CHECK_INPUT(K_IN, K, ind_k, k);
  CHECK_INPUT(ELEN_IN, ELEN, ind_elen, elen);
  CHECK_INPUT(W_IN, W, ind_w, w);
  CHECK_INPUT(S_IN, S, ind_s, s);
  CHECK_INPUT(H_IN, H, ind_h, h);
  CHECK_INPUT(L_IN, L, ind_l, l);
  CHECK_INPUT(TMET_IN, TMET, ind_tmet, tmet);
  CHECK_INPUT(RHO_IN, RHO, ind_rho, rho);
  CHECK_INPUT(ROUGH_IN, ROUGH, ind_rough, rough);
  CHECK_INPUT(ER_IN, ER, ind_er, er);
  CHECK_INPUT(TAND_IN, TAND, ind_tand, tand);
  CHECK_INPUT(FREQ_IN, FREQ, ind_freq, freq);
  CHECK_INPUT(FLAG_IN, FLAG, ind_flag, flag);

  /* Create matrices for the return arguments */
  W_OUT      = mxCreateDoubleMatrix(rows, cols, mxREAL);
  S_OUT      = mxCreateDoubleMatrix(rows, cols, mxREAL);
  L_OUT      = mxCreateDoubleMatrix(rows, cols, mxREAL);
  
  /* output pointers */
  w_out  = mxGetPr(W_OUT);
  s_out  = mxGetPr(S_OUT);
  l_out  = mxGetPr(L_OUT);

  /* the actual computation */
  line = coupled_stripline_line_new();

  for (ind=0; ind<(rows*cols); ind++){
    /*
     * copy over the parameters.  Note, some of the ind_* pointers
     * point to 'ind' and others point to 'fixed'.  This lets us pick
     * which inputs are scalar and which are matrices easily.  (It's
     * done when processsing the input arguments.
     */
    line->w           = w[*ind_w];
    line->s           = s[*ind_s];
    line->l           = l[*ind_l];
    line->subs->h     = h[*ind_h];
    line->subs->tmet  = tmet[*ind_tmet];
    line->subs->rho   = rho[*ind_rho];
    line->subs->rough = rough[*ind_rough];
    line->subs->er    = er[*ind_er];
    line->subs->tand  = tand[*ind_tand];
    line->freq        = freq[*ind_freq];

    line->z0          = z0[*ind_z0];
    line->k           = k[*ind_k];
    line->z0e         = z0[*ind_z0];
    line->z0o         = k[*ind_k];
    line->len         = elen[*ind_elen];
    line->use_z0k     = flag[*ind_flag];
   

    if ((flag[*ind_flag] > 1) || (flag[*ind_flag] < 0) ) {
      mexErrMsgTxt("flag must be one of {0,1} in COUPLED_STRIPLINE_SYN");
    }

    /* run the calculation */
    coupled_stripline_syn(line, line->freq);

    /* extract the outputs */
    w_out[ind]  = line->w;
    s_out[ind]  = line->s;
    l_out[ind]  = line->l;
  }

  /* clean up */
  coupled_stripline_line_free(line);

  return;
}
