%STRIPLINE_CALC   - Symmetric stripline transmission line analysis 
%  
%  SYNOPSIS
%  
%  [z0, elen, loss, L, R, C, G, lc, ld, deltal, depth] = stripline_calc(w, h, l,
%  tmet, rho, rough, er, tand, f)
%  
%  PARAMETERS
%  
%  INPUT PARAMETERS
%  
%    * w : width of stripline line (meters)
%    * h : substrate thickness (meters)
%    * l : lentgh of stripline line (meters)
%    * tmet : metal thickness (meters)
%    * rho : resistivity of the line (relative to copper)
%    * rough : conductor surface roughness (meters-rms)
%    * er : substrate relative permitivitty
%    * tand : substrate loss tangent
%    * f : analysis frequency (Hz)
%  
%  OUTPUT VALUES
%  
%    * z0 : calculated characteristic impedance (Ohms)
%    * elen : calculated electrical length of the line (degrees)
%    * loss : calculated loss of the line (dB)
%    * L : calculated inductance per length (Henries/meter)
%    * R : calculated resistance per length (Ohms/meter)
%    * C : calculated capacitance per length (Farads/meter)
%    * G : calculated conductance per length (Siemens/meter)
%    * lc : conductor loss (dB/meter)
%    * ld : dielectric loss (dB/meter)
%    * deltal : calculated open circuit end correction (meters)
%    * depth : calculated skin depth (meters)
%  
%  DESCRIPTION
%  
%  Function to analyze the electrical characteristics of a single stripline
%  transmission line. The physical dimensions of the stripline line are given as
%  inputs and the characteristic impedance, effective dielectric constant, loss
%  and open circuit end correction are calculated.
%  
%  
%      XXXXXXXXXXXXXXXXX ground XXXXXXXXXXXXXXXXXXXXX
%      ----------------------------------------------
%     (  dielectric,er         \/           /|\     (
%      )             -------   --            |       )
%     (             | metal | Tmet           | H    (
%      )             -------   --            |       )
%     (             <---W--->  /\           \|/     (
%      ----------------------------------------------
%      XXXXXXXXXXXXXXXXX ground XXXXXXXXXXXXXXXXXXXXX
%  
%  
%  EXAMPLE
%  
%   % mils to meters conversion factor
%  sf=25.4e-6
%   % width
%  w=20*sf
%   % height
%  h=15*sf
%   % length
%  l=1100*sf
%   % metal thickness
%  tmet=1.4*sf
%   % resitivity
%  rho=1.72e-8
%   % metal surface roughness
%  rough=0.05*sf
%   % relative dielectric constant
%  er=4.5
%   % loss tangent
%  tand=0.01
%   % frequency
%  f=2.4e9
%  [z0,elen,loss,L,R,C,G,lc,ld,deltal,depth] = ...
%    stripline_calc(w,h,l,tmet,rho,rough,er,tand,f)
%  disp(sprintf('z0   = %8.4g Ohms',z0))
%  disp(sprintf('elen = %8.4g degrees',elen))
%  disp(sprintf('loss = %8.4g dB',loss))
%  disp(sprintf('L    = %8.4g H/m',L))
%  disp(sprintf('R    = %8.4g Ohms/m',R))
%  disp(sprintf('C    = %8.4g F/m',C))
%  disp(sprintf('G    = %8.4g S/m',G))
%  disp(sprintf('lc   = %8.4g dB/m',lc))
%  disp(sprintf('ld   = %8.4g dB/m',ld))
%  disp(sprintf('open end correction = %8.4g mil', deltal/sf))
%  disp(sprintf('skin depth = %8.4g um', depth*1e6))
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


