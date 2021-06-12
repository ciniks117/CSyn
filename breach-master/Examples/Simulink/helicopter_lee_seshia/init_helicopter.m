%% Creating an interface with Breach using BreachSimulinkSystem 

%%
% Name of the Simulink model:
mdl = 'helicopter';

%%
% Next, we define the parameters needed to run the model in the workspace.
% These parameters will be detected by Breach, and included in its 
% interface with the system. 
K = 10;
i = 0; 
a = 1;

%%
% By default, Breach will look for inputs, outputs and logged signals. 
% Breach interface will then allow to change parameters and constant 
% input signals, simulate the model and collect and observe the resulting 
% trace. 
Br = BreachSimulinkSystem(mdl);

%%
% We set the default simulation time:
Br.SetTime(0:.01:10);

%%
Br.SetParam({'dt_u0'}, ...
              [10;]);

% We set the default value for the (constant) input signal: 
Br.SetParamRanges('psi_u0', [0 20]);

%%
% Print signals and parameters of the resulting interface:
Br.PrintAll();
falsif_pb = FalsificationProblem(Br,phi);
falsif_pb.max_time = 180;
    falsif_pb.solve();
     rob=falsif_pb.obj_best;
     if rob>=0
         BrFalse='';
         return;
     end
     BrFalse = falsif_pb.GetBrSet_False();
     %BrFalse=BrFalse.BrSet;
     BrFalse.PlotRobustSat(phi);