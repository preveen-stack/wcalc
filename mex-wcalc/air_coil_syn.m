%AIR_COIL_SYN     - Single layer air core solenoid inductor synthesis 
%  
%  SYNOPSIS
%  
%  [N_out, len_out, fill_out] = air_coil_syn(L, len, fill, AWG, rho, dia, freq,
%  flag)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * L : Desired inductance (Henries)
%    * len : length of the coil (meters)
%    * fill : ratio of coil length to closewound length
%    * AWG : wire size (American Wire Gauge)
%    * rho : resistivity of wire (ohm-m)
%    * dia : inside diameter of coil (meters)
%    * freq : analysis frequency (Hertz)
%    * flag : indicates which parameters should be optimized
%        + flag=0 : the minimum number of turns is calculated along with the
%          corresponding required length/fill. The diameter is held constant.
%        + flag=1 : the number of turns is fixed at the value given and the
%          required length/fill is calculated. The diameter is held constant.
%  
%  OUTPUT VALUES
%  
%    * N_out : calculated required number of turns
%    * len_out : calculated required length (meters)
%    * fill_out : calculated required fill
%  
%  DESCRIPTION
%  
%  Function to synthesize the physical parameters of a single layer, uniformly
%  spaced, air core, solenoid inductor. The physical dimensions of the coil are
%  synthesized from an inductance specification.
%  
%  EXAMPLE
%  
%   % we want 220 nH
%  L=220e-9;
%   % we'll synthesize the number of turns
%  N=0;
%   % we'll synthesize the length/fill
%  len=0;
%   % we'll synthesize the length/fill
%  fill=0;
%   % wire size
%  AWG=22;
%   % Resistivity of copper (ohm-m)
%  rho=1.72e-8;
%   % 0.25 inches inside diameter
%  dia=0.25*0.0254;
%   % 10 MHz operation
%  f=10e6;
%   % synthesize for minimum number of turns
%  flag=0;
%  [Nout,len_out,fill_out] = air_coil_syn(L,N,len,fill,AWG,rho,dia,f,flag);
%  disp(sprintf('Number of turns = %g ',Nout));
%  disp(sprintf('Length=%g inches',len_out/0.0254));
%  disp(sprintf('Fill=%g',fill_out));
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


