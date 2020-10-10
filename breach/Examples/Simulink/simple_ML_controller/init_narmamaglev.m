%% Analysis of a simple Neural-Network based controller. 
InitBreach
%narmamaglev_v1

%% Model and inputs
u_ts = 0.001;
tspan=30;
mdl = 'phi1_narmamaglev_v1';
B = BreachSimulinkSystem(mdl); 
B.SetTime(0:.01:20);

%% Checking specifications
STL_ReadFile('NNspecs.stl');
%phi1=alw_reach_ref_in_tau;  % this is phi1
phi1=never_far_ref;  % this is phi2
%phi1=stay_close_ref; %this is phi3

%% Test with piecewise constant inputs  
u_min = 1;
u_max = 3; 
%B.SetInputGen('UniStep3');
sg = var_step_signal_gen({'Ref'},3);
B.SetInputGen(sg);

%% Falsification problem
%B.SetParam({'Ref_dt0', 'Ref_dt1', 'Ref_dt2'}, ...
%                  [10; 10;  10]);
B.SetParamRanges({'Ref_u0','Ref_u1','Ref_u2'}, [u_min u_max; u_min u_max; u_min u_max]);