%COAX_CALC        - Coaxial transmission line analysis 
%  
%  SYNOPSIS
%  
%  [L, R, C, G, lc, ld, fc, em] = coax_calc(a, b, c, t, rho_a, rho_b, er, tand,
%  len, f)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * a : radius of inner conductor (meters)
%    * b : inner radius of outer conductor (meters)
%    * c : offset of the inner conductor from the center (meters)
%    * t : thickness of shield (meters)
%    * rho_a : resistivity of inner conductor (ohms/meter)
%    * rho_b : resistivity of outer conductor (ohms/meter)
%    * er : relative permitivitty of dielectric
%    * tand : loss tangent of dielectric
%    * len : physical length of line (meters)
%    * f : analysis frequency (Hertz)
%  
%  OUTPUT VALUES
%  
%    * L : calculated inductance per length (Henries/meter)
%    * R : calculated resistance per length (Ohms/meter)
%    * C : calculated capacitance per length (Farads/meter)
%    * G : calculated conductance per length (Siemens/meter)
%    * lc : conductor loss (dB/meter)
%    * ld : dielectric loss (dB/meter)
%    * fc : TE10 cutoff frequency (Hz)
%    * em : Max Electric Field (Volts/meter)
%  
%  DESCRIPTION
%  
%  Function to analyze the electrical characteristics of a coaxial transmission
%  line. The physical dimensions of the line are given as inputs and the
%  characteristic impedance and incremental circuit model elements are calculated.
%  
%  EXAMPLE
%  
%   % mils to meters conversion factor
%  sf=25.4e-6;
%   % radius of inner conductor
%  a=10.0*sf;
%   % inner radius of outer conductor
%  b=100.0*sf;
%   % offset of inner conductor
%  c=0*sf;
%   % thickness of outer conductor
%  t=5.0*sf;
%   % resistivity of inner conductor
%  rho_a=3.5e-8;
%   % resistivity of outer conductor
%  rho_b=rho_a;
%   % relative permitivitty of dielectric
%  er=9.5;
%   % dielectric loss tangent
%  tand=0.01;
%   % length of line
%  len=1.0;
%   % 100 MHz operation
%  f=100e6;
%  [z0,elen,loss,L,R,C,G,lc,ld,fc,em] = coax_calc(a,b,c,t,rho_a,rho_b,er,tand,len,f);
%  disp(sprintf('z0   = %g Ohms',z0));
%  disp(sprintf('elen = %g degrees',elen));
%  disp(sprintf('loss = %g dB',loss));
%  disp(sprintf('L    = %g H/m',L));
%  disp(sprintf('R    = %g Ohms/m',R));
%  disp(sprintf('C    = %g F/m',C));
%  disp(sprintf('G    = %g S/m',G));
%  disp(sprintf('Conductor loss  = %g dB/m', lc));
%  disp(sprintf('Dielectric loss = %g dB/m', ld));
%  disp(sprintf('TE10 cutoff     = %g GHz', fc/1e9));
%  disp(sprintf('Max E field     = %g kV/m', em/1e3));
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
