%MICROSTRIP_SYN   - Single microstrip transmission line synthesis 
%  
%  SYNOPSIS
%  
%  [w_out, h_out, l_out, er_out] = microstrip_syn(z0, w, h, l, tmet, rho, rough,
%  er, tand, f, flag)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * z0 : desired characteristic impedance (Ohms)
%    * w : width of microstrip line (meters)
%    * h : substrate thickness (meters)
%    * l : lentgh of microstrip line (meters)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of the metalization (relative to copper)
%    * rough : conductor surface roughness (meters-rms)
%    * er : substrate relative permitivitty
%    * tand : substrate loss tangent
%    * f : synthesis frequency (Hz)
%    * flag : indicates which parameters should be optimized
%        + flag=1 : synthesize the metal width
%        + flag=1 : synthesize the substrate thickness
%        + flag=2 : synthesize the substrate dielectric constant
%        + flag=3 : synthesize the metal length
%  
%  OUTPUT VALUES
%  
%    * w_out : Calculated width of microstrip line (meters)
%    * h_out : Calculated height of microstrip line (meters)
%    * l_out : Calculated length of microstrip line (meters)
%    * er_out : Calculated substrate relative permitivitty of microstrip line
%  
%  DESCRIPTION
%  
%  Function to synthesize the physical dimenstions of a single microstrip
%  transmission line to achieve a desired characteristic impedance and electrical
%  length. The desired characteristic impedance and some of the physical
%  dimensions of the microstrip line are given as inputs and the remaining
%  dimensions are calculated.
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
%  
%  EXAMPLE
%  
%   % mils to meters conversion factor
%  sf=25.4e-6;
%   % desired impedance
%  z0=75;
%   % desired electrical length (degrees)
%  elen=90;
%   % width (we'll synthesize this)
%  w=0;
%   % height
%  h=62*sf;
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
%   % synthesize width
%  flag=0;
%  [w_out,h_out,l_out,er_out] = ...
%    microstrip_syn(z0,elen,w,h,l,tmet,rho,rough,er,tand,f,flag);
%  disp(sprintf('w=%g mils, l=%g mils',w_out/sf,l_out/sf));
%  disp(sprintf('er=%g',er_out));
%  disp(sprintf('z0=%g ohms, length=%g degrees',z0,elen));
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
