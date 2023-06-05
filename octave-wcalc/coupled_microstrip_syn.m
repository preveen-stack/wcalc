%COUPLED_MICROSTRIP_SYN - Coupled microstrip transmission line synthesis 
%  
%  SYNOPSIS
%  
%  [w_out, s_out, l_out] = coupled_microstrip_syn(z0, k, z0e, z0o, w, s, h, l,
%  tmet, rho, rough, er, tand, f, flag)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * z0 : desired characteristic impedance (Ohms)
%    * k : desired coupling coefficient
%    * z0e : desired even mode characteristic impedance (Ohms)
%    * z0o : desired odd mode characteristic impedance (Ohms)
%    * w : width of coupled microstrip line (meters)
%    * s : spacing between coupled microstrip lines (meters)
%    * h : substrate thickness (meters)
%    * l : length of coupled_microstrip line (meters)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of wire (relative to copper)
%    * rough : conductor surface roughness (meters-rms)
%    * er : substrate relative permitivitty
%    * tand : substrate loss tangent
%    * f : synthesis frequency (Hz)
%    * flag : indicates which parameters should be optimized
%        + flag=1 : synthesize based on characteristic impedance and coupling
%          coefficient
%        + flag=0 : synthesize based on even and odd mode characteristic
%          impedances
%  
%  OUTPUT VALUES
%  
%    * w_out : calculated metal width
%    * s_out : calculated gap
%    * l_out : calculated metal length
%  
%  DESCRIPTION
%  
%  Function to synthesize the physical dimenstions of a coupled microstrip
%  transmission line to achieve a desired characteristic impedance and electrical
%  length. The desired characteristic impedance and some of the physical
%  dimensions of the coupled_microstrip line are given as inputs and the remaining
%  dimensions are calculated. The line may be specified either in terms of an even
%  mode and odd mode characteristic impedance or a characteristic impedance and
%  coupling coefficient. The model accounts for dispersion (frequency dependent
%  propagation velocity).
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
%   % desired impedance
%  z0=75;
%   % desired coupling
%  k=0.3;
%   % desired electrical length (degrees)
%  elen=90;
%   % width (we'll synthesize this)
%  w=0;
%   % spacing (we'll synthesize this)
%  s=0;
%   % height
%  h=15*sf;
%   % length
%  l=1100*sf;
%   % metal thickness
%  tmet=1.4*sf;
%   % resitivity of copper
%  rho=1.72e-8;
%   % metal surface roughness
%  rough=0.05*sf;
%   % relative dielectric constant
%  er=4.5;
%   % loss tangent
%  tand=0.01;
%   % frequency
%  f=2.4e9;
%   % synthesize from z0 and k (instead
%  flag=1;
%   % of z0e and z0o)
%  
%  [w_out,s_out,l_out] = ...
%      coupled_microstrip_syn(z0,k,elen,w,s,h,l,tmet,rho,rough,er,tand,f,flag);
%  disp(sprintf('w=%8.4g mils, s=%8.4g mils, l=%8.4g mils',w_out/sf,s_out/sf,l_out/sf));
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
