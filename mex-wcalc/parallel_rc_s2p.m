%PARALLEL_RC_S2P  - Convert Series RC Network into Equivalent Parallel RC Network 
%  
%  SYNOPSIS
%  
%  [] = parallel_rc_s2p(Cs, Rs, Qs, freq, flag, Cs, Rs, Qs, Cp, Rp, Qp)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * Cs : Series capacitance (Farads)
%    * Rs : Series resistance (Ohms)
%    * Qs : Series quality factor
%    * freq : Analysis frequency (Hertz)
%    * flag : indicates if Qs or Rs should be used for the loss input
%        + flag=0 : Qs will be calculated from Rs.
%        + flag=1 : Rs will be calculated from Qs.
%    * Cs : Series capacitance (Farads)
%    * Rs : Series resistance (Ohms)
%    * Qs : Series quality factor
%    * Cp : Parallel capacitance (Farads)
%    * Rp : Parallel resistance (Ohms)
%    * Qp : Parallel quality factor
%  
%  OUTPUT VALUES
%  
%  DESCRIPTION
%  
%  Function to calculate an equivalent parallel RC network from an input series RC
%  network.
%  
%  EXAMPLE
%  
%   % 10 pF
%  Cs=10e-12;
%   % 0.5 Ohms
%  Rs=0.5;
%   % This value will be replaced
%  Qs=100;
%   % 100 MHz operation
%  f=100e6;
%   % Use Rs (and calculate Qs)
%  flag=0;
%  [Cs, Rs, Qs, Cp, Rp, Qp] = parallel_rc_s2p(Cs, Rs,
%    Qs, f, flag);
%  disp(sprintf('Equivalent parallel C = %g pF', Cp/1e-12));
%  disp(sprintf('Equivalent parallel R = %g kOhm', Rp/1e3));
%  disp(sprintf('Quality factor         =%g',Qp));
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



