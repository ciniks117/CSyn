function jacob0 = jacob0(rob,in2)
%% JACOB0 - Jacobian with respect to the base coordinate frame of the two link arm. 
% ========================================================================= 
%    
%    J0 = jacob0(rob,q) 
%    J0 = rob.jacob0(q) 
%    
%  Description:: 
%    Given a full set of joint variables the function 
%    computes the robot jacobian with respect to the base frame. 
%    
%  Input:: 
%    q:  2-element vector of generalized coordinates. 
%    Angles have to be given in radians! 
%    
%  Output:: 
%    J0:  [6x2] Jacobian matrix 
%    
%  Example:: 
%    --- 
%    
%  Known Bugs:: 
%    --- 
%    
%  TODO:: 
%    --- 
%    
%  References:: 
%    1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar 
%    2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano 
%    3) Introduction to Robotics, Mechanics and Control - Craig 
%    4) Modeling, Identification & Control of Robots - Khalil & Dombre 
%    
%  Authors:: 
%    This is an autogenerated function! 
%    Code generator written by: 
%    Joern Malzahn 
%    2012 RST, Technische Universitaet Dortmund, Germany 
%    http://www.rst.e-technik.tu-dortmund.de 
%    
%  See also fkine,jacobe.
%    
    
% Copyright (C) 1993-2019, by Peter I. Corke 
% Copyright (C) 2012-2019, by Joern Malzahn 
% 
% This file has been automatically generated with The Robotics Toolbox for Matlab (RTB). 
% 
% RTB and code generated with RTB is free software: you can redistribute it and/or modify 
% it under the terms of the GNU Lesser General Public License as published by 
% the Free Software Foundation, either version 3 of the License, or 
% (at your option) any later version. 
%  
% RTB is distributed in the hope that it will be useful, 
% but WITHOUT ANY WARRANTY; without even the implied warranty of 
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
% GNU Lesser General Public License for more details. 
%  
% You should have received a copy of the GNU Leser General Public License 
% along with RTB.  If not, see <http://www.gnu.org/licenses/>. 
% 
% http://www.petercorke.com 
% 
% The code generation module emerged during the work on a project funded by 
% the German Research Foundation (DFG, BE1569/7-1). The authors gratefully  
% acknowledge the financial support. 

%% Bugfix
%  In some versions the symbolic toolbox writes the constant $pi$ in
%  capital letters. This way autogenerated functions might not work properly.
%  To fix this issue a local variable is introduced:
PI = pi;
   




%    This function was generated by the Symbolic Math Toolbox version 7.2.
%    12-Mar-2019 12:20:44

q1 = in2(:,1);
q2 = in2(:,2);
t2 = q1+q2;
t3 = sin(t2);
t4 = cos(t2);
t5 = cos(q2);
t6 = t5+1.0;
t7 = sin(q2);
jacob0 = reshape([-t3.*t6+t4.*t7,t3.*t7.*6.123233995736766e-17+t4.*t6.*6.123233995736766e-17,t3.*t7+t4.*t6,0.0,-1.0,6.123233995736766e-17,-t3,t4.*6.123233995736766e-17,t4,0.0,-1.0,6.123233995736766e-17],[6,2]);
