%COAX_SYN         - Coaxial transmission line synthesis 
%  
%  SYNOPSIS
%  
%  [a_out, b_out, c_out, er_out, len] = coax_syn(a, b, c, t, rho_a, rho_b, er,
%  tand, len, f, flag)
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
%    * f : operating frequency (Hertz)
%    * flag : indicates which parameters should be optimized
%        + flag=0 : synthesize a
%        + flag=1 : synthesize b
%        + flag=2 : synthesize c
%        + flag=3 : synthesize er
%  
%  OUTPUT VALUES
%  
%    * a_out : synthesized radius of inner conductor (meters)
%    * b_out : synthesized inner radius of outer conductor (meters)
%    * c_out : synthesized offset of the inner conductor from the center (meters)
%    * er_out : synthesized relative permitivitty of dielectric
%    * len : synthesized physical length of line (meters)
%  
%  DESCRIPTION
%  
%  Function to synthesize the physical parameters of a coaxial transmission line
%  to achieve a given set of electrical characteristics.
%  
%  EXAMPLE
%  
%   % mils to meters conversion factor
%  sf=25.4e-6;
%   % desired characteristic impedance
%  z0=75.0;
%   % desired electrical length (degrees)
%  elen=90.0;
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
%   % 100 MHz operation
%  f=100e6;
%   % synthesize b
%  flag=1;
%  [a,b,c,er,len] = ...
%     coax_syn(z0,elen,a,b,c,t,rho_a,rho_b,er,tand,f,flag);
%  disp(sprintf('z0   = %g Ohms',z0));
%  disp(sprintf('elen = %g degrees',elen));
%  disp(sprintf('a    = %g m',a));
%  disp(sprintf('b    = %g m',b));
%  disp(sprintf('c    = %g m',c));
%  disp(sprintf('er   = %g ',er));
%  disp(sprintf('len  = %g m',len));
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


