%PARALLEL_RL_P2S  - Convert Parallel RL Network into Equivalent Series RL Network 
%  
%  SYNOPSIS
%  
%  [] = parallel_rl_p2s(Lp, Rp, Qp, freq, flag, Ls, Rs, Qs, Lp, Rp, Qp)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * Lp : Parallel inductance (Farads)
%    * Rp : Parallel resistance (Ohms)
%    * Qp : Parallel quality factor
%    * freq : Analysis frequency (Hertz)
%    * flag : indicates if Qs or Rs should be used for the loss input
%        + flag=0 : Qs will be calculated from Rs.
%        + flag=1 : Rs will be calculated from Qs.
%    * Ls : Series inductance (Farads)
%    * Rs : Series resistance (Ohms)
%    * Qs : Series quality factor
%    * Lp : Parallel inductance (Farads)
%    * Rp : Parallel resistance (Ohms)
%    * Qp : Parallel quality factor
%  
%  OUTPUT VALUES
%  
%  DESCRIPTION
%  
%  Function to calculate an equivalent series RL network from an input parallel RL
%  network.
%  
%  EXAMPLE
%  
%   % 10 nH
%  Lp=10e-9;
%   % 5 kOhms
%  Rp=5e3;
%   % This value will be replaced
%  Qp=100;
%   % 100 MHz operation
%  f=100e6;
%   % Use Rp (and calculate Qp)
%  flag=0;
%  [Ls, Rs, Qs, Lp, Rp, Qp] = parallel_rl_p2s(Lp, Rp,
%    Qp, f, flag);
%  disp(sprintf('Equivalent series L = %g nH', Ls/1e-9));
%  disp(sprintf('Equivalent series R = %g Ohm', Rs));
%  disp(sprintf('Quality factor      =%g',Qs));
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
