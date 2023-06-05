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


