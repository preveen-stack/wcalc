%BARS_CALC        - Self and mutual inductance of a pair of parallel rectangular bars 
%  
%  SYNOPSIS
%  
%  [L1, L2, M, k] = bars_calc(a, b, l1, d, c, l2, E, P, l3, freq)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * a : Width of bar 1 (meters)
%    * b : Thickness of bar 1 (meters)
%    * l1 : Length of bar 1 (meters)
%    * d : Width of bar 2 (meters)
%    * c : Thickness of bar 2 (meters)
%    * l2 : Length of bar 2 (meters)
%    * E : Position of bar 2 in the width direction (meters)
%    * P : Position of bar 2 in the thickness direction (meters)
%    * l3 : Position of bar 2 in the length direction (meters)
%    * freq : analysis frequency (Hertz)
%  
%  OUTPUT VALUES
%  
%    * L1 : Bar 1 self inductance (Henries)
%    * L2 : Bar 2 self inductance (Henries)
%    * M : Mutual inductance (Henries)
%    * k : Coupling coefficient
%  
%  DESCRIPTION
%  
%  Function to analyze the self and mutual inductances of two parallel rectanglar
%  bars.
%  
%  EXAMPLE
%  
%   % Width of bar #1
%  a=10e-6;
%   % Thickness of bar #1
%  b=1e-6;
%   % Length of bar #1
%  l1=1e-3;
%   % Width of bar #2
%  d=10e-6;
%   % Thickness of bar #2
%  c=1e-6;
%   % Length of bar #2
%  l2=1e-3;
%   % Position of bar #2 in the width direction
%  E=12e-6;
%   % Position of bar #2 in the thickness direction
%  P=0;
%   % Position of bar #2 in the length direction
%  l3=0;
%   % 1 GHz operation
%  f=1e9;
%  [L1, L2, M, k] = bars_calc(a,b,l1,d,c,l2,E,P,l3,f);
%  disp(sprintf('L1=%g nH',L1*1e9));
%  disp(sprintf('L2=%g nH',L2*1e9));
%  disp(sprintf('M =%g nH',M*1e9));
%  disp(sprintf('k =%g',k));
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
