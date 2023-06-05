%IC_MICROSTRIP_SYN - Integrated circuit microstrip transmission line synthesis 
%  
%  SYNOPSIS
%  
%  [w_out, h_out, tox_out, l_out] = ic_microstrip_syn(z0, w, h, l, tmet, rho,
%  rough, er, tand, f, flag)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * z0 : desired characteristic impedance (Ohms)
%    * w : width of ic_microstrip line (meters)
%    * h : substrate thickness (meters)
%    * l : lentgh of ic_microstrip line (meters)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of wire (relative to copper)
%    * rough : conductor surface roughness (meters-rms)
%    * er : substrate relative permitivitty
%    * tand : substrate loss tangent
%    * f : synthesis frequency (Hz)
%    * flag : indicates which parameters should be optimized
%        + flag=1 : synthesize the metal width
%        + flag=1 : synthesize the substrate thickness
%        + flag=2 : synthesize the oxide thickness
%  
%  OUTPUT VALUES
%  
%    * w_out : calculated metal width
%    * h_out : calculated substrate thickness
%    * tox_out : calculated oxide thickness
%    * l_out : calculated metal length
%  
%  DESCRIPTION
%  
%  Function to synthesize the physical dimenstions of a single ic_microstrip
%  transmission line to achieve a desired characteristic impedance and electrical
%  length. The desired characteristic impedance and some of the physical
%  dimensions of the ic_microstrip line are given as inputs and the remaining
%  dimensions are calculated. The model accounts for dispersion (frequency
%  dependent propagation velocity).
%  
%  
%                   |<--W-->|
%                    _______
%                   | metal | <- tmet,rho,rough
%      ----------------------------------------------
%     {**************  Oxide (tox,eox) **************
%      ----------------------------------------------
%     (  substrate                          /|\     (
%      )   es,sigmas                     H   |       )
%     (                                     \|/     (
%      ----------------------------------------------
%      XXXXXXXXXXXXXXXXXX ground XXXXXXXXXXXXXXXXXXXX
%  
%  
%  
%  EXAMPLE
%  
%   % desired impedance
%  z0=75;
%   % desired electrical length (degrees)
%  elen=90;
%   % micron to meters conversion factor
%  sf=1.0e-6;
%   % width
%  w=160e-6;
%   % length
%  l=1000e-6;
%   % oxide thickness
%  tox=1.0e-6;
%   % oxide relative dielectric constant
%  eox=4.0;
%   % substrate thickness
%  h=250e-6;
%   % substrate relative dielectric constant
%  es=11.8;
%   % substrate conductivity (1/(ohm-m))
%  sigmas=10;
%   % metal thickness
%  tmet=1.6e-6;
%   % metal resitivity (ohm-m)
%  rho=3e-8;
%   % metal surface roughness
%  rough=0;
%   % frequency
%  f=2.4e9;
%   % synthesize width
%  flag=0;
%  [w_out,h_out,tox_out,l_out] = ...
%      ic_microstrip_syn(z0,elen,w,l,tox,eox,h,es,sigmas,tmet,rho,rough,f,flag);
%  disp(sprintf('w   = %8.3g um', w_out*1e6));
%  disp(sprintf('h   = %8.3g um', h_out*1e6));
%  disp(sprintf('tox = %8.3g um', tox_out*1e6));
%  disp(sprintf('l   = %8.3g um', l_out*1e6));
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
