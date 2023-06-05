%COUPLED_MICROSTRIP_CALC - Coupled microstrip transmission line analysis 
%  
%  SYNOPSIS
%  
%  [z0, k, z0e, z0o, kev, kev, loss, deltal] = coupled_microstrip_calc(w, s, h, l,
%  tmet, rho, rough, er, tand, f)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * w : width of coupled microstrip lines (meters)
%    * s : spacing between coupled microstrip lines (meters)
%    * h : substrate thickness (meters)
%    * l : lentgh of coupled microstrip line (meters)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of the metal (ohm-meters)
%    * rough : conductor surface roughness (meters-rms)
%    * er : substrate relative permitivitty
%    * tand : substrate loss tangent
%    * f : analysis frequency (Hz)
%  
%  OUTPUT VALUES
%  
%    * z0 : calculated characteristic impedance (Ohms)
%    * k : calculated coupling coefficient
%    * z0e : calculated even mode characteristic impedance (Ohms)
%    * z0o : calculated odd mode characteristic impedance (Ohms)
%    * kev : calculated even mode effective relative permitivitty
%    * kev : calculated odd mode effective relative permitivitty
%    * loss : calculated loss of the line (dB)
%    * deltal : calculated open circuit end correction (meters)
%  
%  DESCRIPTION
%  
%  Function to analyze the electrical characteristics of a coupled microstrip
%  transmission line. The physical dimensions of the coupled microstrip line are
%  given as inputs and the characteristic impedance, effective dielectric
%  constant, loss and open circuit end correction are calculated. The model
%  accounts for dispersion (frequency dependent propagation velocity).
%  
%  
%                |<--W-->|<-S->|<--W-->|
%                 _______       -------
%                | metal |     | metal | <- rho,rough
%      ----------------------------------------------
%     (  dielectric                         /|\     (
%      )   er,tand                       H   |       )
%     (                                     \|/     (
%      ----------------------------------------------
%      XXXXXXXXXXXXXXXXXX ground XXXXXXXXXXXXXXXXXXXX
%  
%  
%  EXAMPLE
%  
%   % mils to meters conversion factor
%  sf=25.4e-6;
%   % width
%  w=20*sf;
%   % spacing
%  s=8*sf;
%   % height
%  h=15*sf;
%   % length
%  l=1100*sf;
%   % metal thickness
%  tmet=1.4*sf;
%   % resitivity relative to copper
%  rho=1;
%   % metal surface roughness
%  rough=0.05*sf;
%   % relative dielectric constant
%  er=4.5;
%   % loss tangent
%  tand=0.01;
%   % frequency
%  f=2.4e9;
%  [z0,k,z0e,z0o,kev,kodd] = ...
%    coupled_microstrip_calc(w,s,h,l,tmet,rho,rough,er,tand,f);
%  disp(sprintf('z0=%g Ohms, k=%g',z0,k));
%  disp(sprintf('z0e=%g Ohms, z0o=%g Ohms',z0e,z0o));
%  disp(sprintf('kev=%g, kodd=%g',kev,kodd));
%  
%  SEE ALSO
%  
%  air_coil_calc
%  air_coil_syn
%  coax_calc
%  bars_calc
%  coax_syn
%  coplanar_calc
%  coplanar_syn
%  coupled_microstrip_calc
%  coupled_microstrip_syn
%  coupled_stripline_calc
%  coupled_stripline_syn
%  ic_microstrip_calc
%  ic_microstrip_syn
%  microstrip_calc
%  microstrip_syn
%  parallel_rc_p2s
%  parallel_rc_s2p
%  parallel_rl_p2s
%  parallel_rl_s2p
%  stripline_calc
%  stripline_syn
%  
%  AUTHOR
%  
%  Dan McMahill
%  
%  BUGS
%  
%  None known
%  
%  Please report any bugs on the Wcalc Sourceforge Project Page
%  


% Copyright (c) 2001-2009 Dan McMahill
% All rights reserved.
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; version 2 of the License.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
%
