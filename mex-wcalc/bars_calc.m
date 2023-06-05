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


% Copyright (c) 2001, 2002, 2003, 2004, 2005 Dan McMahill
% All rights reserved.
%
% This code is derived from software written by Dan McMahill
%
% Redistribution and use in source and binary forms, with or without
% modification, are permitted provided that the following conditions
% are met:
% 1. Redistributions of source code must retain the above copyright
%    notice, this list of conditions and the following disclaimer.
% 2. Redistributions in binary form must reproduce the above copyright
%    notice, this list of conditions and the following disclaimer in the
%    documentation and/or other materials provided with the distribution.
% 3. All advertising materials mentioning features or use of this software
%    must display the following acknowledgement:
%        This product includes software developed by Dan McMahill
%  4. The name of the author may not be used to endorse or promote products
%     derived from this software without specific prior written permission.
% 
%  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
%  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
%  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
%  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
%  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
%  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
%  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
%  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
%  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
%  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
%  SUCH DAMAGE.


