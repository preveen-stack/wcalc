/* $Id: coupled_microstrip.h,v 1.11 2008/11/29 20:42:09 dan Exp $ */

/*
 * Copyright (C) 1999, 2000, 2001, 2002, 2004 Dan McMahill
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

#ifndef __COUPLED_MICROSTRIP_H_
#define __COUPLED_MICROSTRIP_H_

#include "microstrip.h"
#include "units.h"


typedef struct COUPLED_MICROSTRIP_LINE
{

  /* length, width, and spacing */
  double l;
  double w;
  double s;

  /* characteristic impedance (ohms) and coupling factor */
  double z0, k;

  /* even and odd mode impedance */
  double z0e;
  double z0o;

  /* flag which says to use z0/k instead of z0e/z0o for synthesis */
  int use_z0k;

  /* electrical length (degrees) */
  double len;


  /* open circuit end line correction */
  double deltale, deltalo;

  /* even and odd mode effective relative permitivitty */
  double kev, kodd;

  double loss_ev, loss_odd, losslen_ev, losslen_odd, skindepth;

  /* incremental circuit model */
  double Lev, Rev, Cev, Gev;
  double Lodd, Rodd, Codd, Godd;

  /* analysis frequency */
  double freq;

  microstrip_subs *subs;

  /* user units */
  wc_units *units_lwst;
  wc_units *units_len;

  wc_units *units_freq;
  wc_units *units_loss;
  wc_units *units_losslen;
  wc_units *units_rho;
  wc_units *units_rough;
  wc_units *units_delay;
  wc_units *units_depth;
  wc_units *units_deltal;

  wc_units *units_L, *units_R, *units_C, *units_G;

} coupled_microstrip_line;


int coupled_microstrip_calc(coupled_microstrip_line *line, double f);
int coupled_microstrip_syn(coupled_microstrip_line *line, double f);

void coupled_microstrip_line_free(coupled_microstrip_line * line);
coupled_microstrip_line *coupled_microstrip_line_new(void);


#endif /*__COUPLED_MICROSTRIP_H_*/
