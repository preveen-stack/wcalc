%IC_MICROSTRIP_CALC - Integrated circuit microstrip transmission line analysis 
%  
%  SYNOPSIS
%  
%  [z0, keff, elen, loss, L, R, C, G] = ic_microstrip_calc(w, l, tox, h, er,
%  sigmas, tmet, rho, rough, f)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * w : width of ic_microstrip line (meters)
%    * l : lentgh of ic_microstrip line (meters)
%    * tox : oxide thickness (meters)
%    * h : substrate thickness (meters)
%    * er : substrate relative permitivity
%    * sigmas : substrate conductivity (1/ohm-m)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of wire (relative to copper)
%    * rough : conductor surface roughness (meters-rms)
%    * f : synthesis frequency (Hz)
%  
%  OUTPUT VALUES
%  
%    * z0 : calculated characteristic impedance (Ohms)
%    * keff : calculated effective relative permitivitty
%    * elen : calculated electrical length of the line (degrees)
%    * loss : calculated loss of the line (dB)
%    * L : calculated inductance per length (Henries/meter)
%    * R : calculated resistance per length (Ohms/meter)
%    * C : calculated capacitance per length (Farads/meter)
%    * G : calculated conductance per length (Siemens/meter)
%  
%  DESCRIPTION
%  
%  Function to analyze the electrical characteristics of a single integrated
%  circuit microstrip transmission line. The physical dimensions of the microstrip
%  line are given as inputs and the characteristic impedance, effective dielectric
%  constant, loss and open circuit end correction are calculated.
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
%  EXAMPLE
%  
%   % width
%  w=150e-6;
%   % substrate height
%  h=250e-6;
%   % length
%  l=1000e-6;
%   % substrate permitivitty
%  es=11.8;
%   % substrate conductivity
%  sigmas=0.5;
%   % oxide thickness
%  tox=1.5e-6;
%   % oxide permitivitty
%  eox=4;
%   % metal thickenss
%  tmet=0.8e-6;
%   % metal resitivity
%  rho=3.0e-8;
%   % metal surface roughness
%  rough=0.0;
%   % frequency
%  f=2.4e9;
%  [z0,keff,elen,loss,L,R,C,G] = ...
%    ic_microstrip_calc(w,l,tox,eox,h,es,sigmas,tmet,rho,rough,f);
%  disp(sprintf('z0 = %8.4g + j %8.4g Ohms', real(z0), imag(z0) ));
%  disp(sprintf('keff = %8.4g ',keff));
%  disp(sprintf('elen = %8.4g degrees',elen));
%  disp(sprintf('loss = %8.4g dB',loss));
%  disp(sprintf('L  = %8.4g nH/mm', L*1e6));
%  disp(sprintf('R  = %8.4g Ohm/mm', R*1e-3));
%  disp(sprintf('C  = %8.4g fF/mm', C*1e12));
%  disp(sprintf('G  = %8.4g uMho/mm', G*1e3));
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


