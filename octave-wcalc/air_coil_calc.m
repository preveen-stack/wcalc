%AIR_COIL_CALC    - Single layer air core solenoid inductor analysis 
%  
%  SYNOPSIS
%  
%  [L, Q, SRF, len_out, fill_out, lmax] = air_coil_calc(N, len, fill, AWG, rho,
%  dia, freq, flag)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * N : Number of turns
%    * len : length of the coil (meters)
%    * fill : ratio of coil length to closewound length
%    * AWG : wire size (American Wire Gauge)
%    * rho : resistivity of wire (ohm-m)
%    * dia : inside diameter of coil (meters)
%    * freq : analysis frequency (Hertz)
%    * flag : used to calculate coil length.
%        + flag=0 : the length given by len is used.
%        + flag=1 : the length is calculated from the wire size, number of turns
%          and fill input.
%  
%  OUTPUT VALUES
%  
%    * L : calculated inductance (Henries)
%    * Q : calculated quality factor
%    * SRF : calculated self resonant frequency (Hertz)
%    * len_out : length used for the analysis (meters)
%    * fill_out : fill used for the analysis
%    * lmax : maximum (closewound) inductance
%  
%  DESCRIPTION
%  
%  Function to analyze the electrical characteristics of a single layer, uniformly
%  spaced, air core, solenoid inductor. The physical dimensions of the coil are
%  given as inputs and the inductance, quality factor, and self resonant frequency
%  are calculated.
%  
%  EXAMPLE
%  
%   % number of turns
%  N=5;
%   % we'll use the fill parameter instead
%  len=0;
%   % the coil is 20% longer than the minimum
%  fill=1.2;
%   % wire size
%  AWG=22;
%   % resistivity of copper (ohm-m)
%  rho=1.72e-8;
%   % 0.25 inches inside diameter
%  dia=0.25*0.0254;
%   % 10 MHz operation
%  f=10e6;
%   % use fill to calculate length
%  flag=1;
%  [L,Q,SRF,len_out,fill_out,Lmax] = air_coil_calc(N,len,fill,AWG,rho,dia,f,flag);
%  disp(sprintf('L=%g nH',L*1e9));
%  disp(sprintf('Q=%g at %g MHz',Q,f/1e6));
%  disp(sprintf('Self Resonant Freq=%g MHz',SRF/1e6));
%  disp(sprintf('Length=%g inches',len_out/0.0254));
%  disp(sprintf('Fill=%g',fill_out));
%  disp(sprintf('Lmax=%g nH',Lmax*1e9));
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
