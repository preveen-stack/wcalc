%MICROSTRIP_CALC  - Symmetric microstrip transmission line analysis 
%  
%  SYNOPSIS
%  
%  [z0, keff, elen, loss, L, R, C, G, lc, ld, deltal, depth] = microstrip_calc(w,
%  h, l, tmet, rho, rough, er, tand, f)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * w : width of microstrip line (meters)
%    * h : substrate thickness (meters)
%    * l : lentgh of microstrip line (meters)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of the line (relative to copper)
%    * rough : conductor surface roughness (meters-rms)
%    * er : substrate relative permitivitty
%    * tand : substrate loss tangent
%    * f : analysis frequency (Hz)
%  
%  OUTPUT VALUES
%  
%    * z0 : calculated characteristic impedance (Ohms)
%    * keff : calculated effective relative permitivity
%    * elen : calculated electrical length of the line (degrees)
%    * loss : calculated loss of the line (dB)
%    * L : calculated inductance per length (Henries/meter)
%    * R : calculated resistance per length (Ohms/meter)
%    * C : calculated capacitance per length (Farads/meter)
%    * G : calculated conductance per length (Siemens/meter)
%    * lc : conductor loss (dB/meter)
%    * ld : dielectric loss (dB/meter)
%    * deltal : calculated open circuit end correction (meters)
%    * depth : calculated skin depth (meters)
%  
%  DESCRIPTION
%  
%  Function to analyze the electrical characteristics of a single microstrip
%  transmission line. The physical dimensions of the microstrip line are given as
%  inputs and the characteristic impedance, effective dielectric constant, loss
%  and open circuit end correction are calculated. The model accounts for
%  dispersion (frequency dependent propagation velocity).
%  
%  
%                   |<--W-->|
%                    _______
%                   | metal | <- rho,rough
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
%   % height
%  h=15*sf;
%   % length
%  l=1100*sf;
%   % metal thickness
%  tmet=1.4*sf;
%   % resitivity
%  rho=1.72e-8;
%   % metal surface roughness
%  rough=0.05*sf;
%   % relative dielectric constant
%  er=4.5;
%   % loss tangent
%  tand=0.01;
%   % frequency
%  f=2.4e9;
%  [z0,keff,elen,loss,L,R,C,G,lc,ld,deltal,depth] = ...
%    microstrip_calc(w,h,l,tmet,rho,rough,er,tand,f);
%  disp(sprintf('z0   = %8.4g Ohms', z0));
%  disp(sprintf('keff = %8.4g ', keff));
%  disp(sprintf('elen = %8.4g degrees', elen));
%  disp(sprintf('loss = %8.4g dB', loss));
%  disp(sprintf('L    = %8.4g H/m', L));
%  disp(sprintf('R    = %8.4g Ohms/m', R));
%  disp(sprintf('C    = %8.4g F/m', C));
%  disp(sprintf('G    = %8.4g S/m', G));
%  disp(sprintf('lc   = %8.4g dB/m', lc));
%  disp(sprintf('ld   = %8.4g dB/m', ld));
%  disp(sprintf('open end correction = %8.4g mil', deltal/sf));
%  disp(sprintf('skin depth = %8.4g um', depth*1e6));
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
