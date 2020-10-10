%% Interfacing a Simulink model with Breach  
% Breach can interact with a Simulink model by 
%
% * Changing parameters defined in the base workspace
% * Generating input signals  
% * Running simulations and collecting signals for analysis
%  
% We use the model $\mathtt{AbstractFuelControl\_M1}$ as running example.

%%
% First, we initialize Breach and instantiate parameters for the model to run properly: 
clear;
InitBreach;
fuel_inj_tol = 1.0; 
MAF_sensor_tol = 1.0;
fault_time = 50;
AF_sensor_tol = 1.0; 
pump_tol = 1;
kappa_tol=1; 
tau_ww_tol=1;
fault_time=50;
kp = 0.04;
ki = 0.14;
max_rob = 20;
throttle_sw=1;
speed_sw=1;
map_sw=1;
ego_sw=1;

STL_ReadFile('AFC_simple_spec.stl');
%phi1=AF_alw_tol;  % this is
%phi1=AF_overshoot_req; %this is phi2
phi1=AF_alw_ok; %this is phi1   phi1_sldemo works

%STL_ReadFile('AFC_settling_spec.stl');
%phi1=AF_stable;  % this is phi4

%% Creating an Interface Object
% Running the following will create a BreachSystem interface with the model:
mdl = 'sldemo_fuelsys_original';
warning('off', 'Simulink:LoadSave:EncodingMismatch') %avoid warning encoding conflict windows vs iso
B = BreachSimulinkSystem(mdl);

%% Running one simulation
B.SetTime(0:0.01:30);
%B.Sim();
%B.PlotSignals();

%% Input Signals
% Input signals of different types can be generated. They are defined by 
% parameters of the form $\mathtt{input1\_u0, input1\_u1}$ etc.
%B.SetParam({'Speed_u0'}, 300);
sg = var_step_signal_gen({'Speed','Throttle'},3);
B.SetInputGen(sg); 

%{
% We assign ranges for duration and amplitude of each input:
B.SetParamRanges({'dt_u0', 'dt_u1', 'dt_u2'}, ...
                  [.1 10  ;  .1 10;    0.1 10]);
B.SetParamRanges({'Speed_u0','Speed_u1','Speed_u2'}, ... 
                  [ 300 300; 300 300; 300 300]);
B.SetParamRanges({'Throttle_u0','Throttle_u1','Throttle_u2'},...
                    [10 20;  10 20; 10 20]);
%}
B.SetParam({'Throttle_dt0', 'Throttle_dt1', 'Throttle_dt2'}, ...
                  [10; 10;  10]);
B.SetParam({'Speed_dt0','Speed_dt1','Speed_dt2'}, ...
                  [ 10;  10;  10]);
B.SetParamRanges({'Speed_u0','Speed_u1','Speed_u2'}, ... 
                  [ 300 700; 300 700; 300 700]);
B.SetParamRanges({'Throttle_u0','Throttle_u1','Throttle_u2'},...
                    [10 20;  10 20; 10 20]);
                