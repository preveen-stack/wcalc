%IC_MICROSTRIP_SYN - Integrated circuit microstrip transmission line synthesis 
%  
%  SYNOPSIS
%  
%  [w_out, h_out, tox_out, l_out] = ic_microstrip_syn(z0, w, h, l, tmet, rho,
%  rough, er, tand, f, flag)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * z0 : desired characteristic impedance (Ohms)
%    * w : width of ic_microstrip line (meters)
%    * h : substrate thickness (meters)
%    * l : lentgh of ic_microstrip line (meters)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of wire (relative to copper)
%    * rough : conductor surface roughness (meters-rms)
%    * er : substrate relative permitivitty
%    * tand : substrate loss tangent
%    * f : synthesis frequency (Hz)
%    * flag : indicates which parameters should be optimized
%        + flag=1 : synthesize the metal width
%        + flag=1 : synthesize the substrate thickness
%        + flag=2 : synthesize the oxide thickness
%  
%  OUTPUT VALUES
%  
%    * w_out : calculated metal width
%    * h_out : calculated substrate thickness
%    * tox_out : calculated oxide thickness
%    * l_out : calculated metal length
%  
%  DESCRIPTION
%  
%  Function to synthesize the physical dimenstions of a single ic_microstrip
%  transmission line to achieve a desired characteristic impedance and electrical
%  length. The desired characteristic impedance and some of the physical
%  dimensions of the ic_microstrip line are given as inputs and the remaining
%  dimensions are calculated. The model accounts for dispersion (frequency
%  dependent propagation velocity).
%  
%  
%                   |<--W-->|
%                    _______
%                   | metal | <- tmet,rho,rough
%      ----------------------------------------------
%     {**************  Oxide (tox,eox) **************
%      ----------------------------------------------
%     (  substrate                          /|\     (
%      )   es,sigmas                     H   |       )
%     (                                     \|/     (
%      ----------------------------------------------
%      XXXXXXXXXXXXXXXXXX ground XXXXXXXXXXXXXXXXXXXX
%  
%  
%  
%  EXAMPLE
%  
%   % desired impedance
%  z0=75;
%   % desired electrical length (degrees)
%  elen=90;
%   % micron to meters conversion factor
%  sf=1.0e-6;
%   % width
%  w=160e-6;
%   % length
%  l=1000e-6;
%   % oxide thickness
%  tox=1.0e-6;
%   % oxide relative dielectric constant
%  eox=4.0;
%   % substrate thickness
%  h=250e-6;
%   % substrate relative dielectric constant
%  es=11.8;
%   % substrate conductivity (1/(ohm-m))
%  sigmas=10;
%   % metal thickness
%  tmet=1.6e-6;
%   % metal resitivity (ohm-m)
%  rho=3e-8;
%   % metal surface roughness
%  rough=0;
%   % frequency
%  f=2.4e9;
%   % synthesize width
%  flag=0;
%  [w_out,h_out,tox_out,l_out] = ...
%      ic_microstrip_syn(z0,elen,w,l,tox,eox,h,es,sigmas,tmet,rho,rough,f,flag);
%  disp(sprintf('w   = %8.3g um', w_out*1e6));
%  disp(sprintf('h   = %8.3g um', h_out*1e6));
%  disp(sprintf('tox = %8.3g um', tox_out*1e6));
%  disp(sprintf('l   = %8.3g um', l_out*1e6));
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


