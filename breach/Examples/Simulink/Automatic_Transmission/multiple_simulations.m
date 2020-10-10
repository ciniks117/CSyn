%% Breach demo: analysis of an Automatic transmission controller


%% Interface Automatic Transmission model with Breach 
B = BreachSimulinkSystem('Autotrans_shift');
B.PrintAll % print available signals and parameters 

% define the formula
phi1 = STL_Formula('phi1', '(alw (speed[t]<vmax)) and (alw (RPM[t]<rpm_max))');
phi1 = set_params(phi1,{'vmax', 'rpm_max'}, [160 4500]);
%get_params(phi1)


%% Running one simulation
%B.SetTime(0:.01:30); B.SetParam({'throttle_u0'}, 100);
%B.Sim(); B.PlotSignals({'throttle', 'RPM', 'speed', 'gear'});

%% Describes complex driving scenarios 
% We create an input generator that will alternates between acceleration and braking 
sg = var_step_signal_gen({'throttle', 'brake'}, 5);
B.SetInputGen(sg);

%%
% We assign ranges for duration and amplitude of each input:
B.SetParamRanges({'dt_u0', 'dt_u1', 'dt_u2', 'dt_u3'}, ...
                  [.1 10  ;  .1 10;    0.1 10;    0.1 10]);
B.SetParamRanges({'throttle_u0','brake_u1', 'throttle_u2', 'brake_u3'}, ... 
                  [0 100;        0 325;      0 100;         0 325]);
% We don't specify a range for brake_u0 so that it remains constant equal
% to 0 (by default). Same for throttle_u1, etc.
              
              
%% Run one simulation and plots result
% For each parameter for which we assigned a range, Breach will pick the
% center value (e.g., throttle_u0=50, etc)
%B.Sim();
%B.PlotSignals({'throttle', 'brake','RPM', 'speed', 'gear'});

%% Checks a property: The speed is never below 30 while in gear3 
%STL_ReadFile('spec.stl');
%B.PlotRobustSat(phi1)

%% Generate and run multiple test cases
B.QuasiRandomSample(10); B.Sim();
B.PlotSignals({'throttle', 'brake','RPM', 'speed', 'gear'});

%% Check property visually 
%B.PlotSigPortrait({'RPM', 'speed'})   


%% Checks property by monitoring 
%B.CheckSpec(phi1);
%B.PrintSpecs

%% Falsify property
falsif_pb = FalsificationProblem(B, phi1);
falsif_pb.max_time = 180;
falsif_pb.solve();

if falsif_pb.obj_best < 0
    %B.Sim(); 
    h = findobj(B.PlotSignals(3),'Type','line');
    x = h(1).XData;
    y = h(1).YData;
   
    xlswrite('auto_trans_',{transpose(x),transpose(y)});
    for i = 2:10
        y = h(i).YData;
        %Step 1 - Read the file
        M = csvread('auto_trans_.csv');
        % Step 2 - Add a column to the data
        M = [ M transpose(y)];
        % Step 3 - Save the file
        csvwrite('auto_trans_.csv', M);
        %xlswrite("auto_trans_",transpose(y),'append');
    end
end

%{
%% Examine counter-example
BFalse = falsif_pb.BrSet_False;
BFalse.PlotSigPortrait({'gear','speed'});

%% Fix Specification
param_pb = ParamSynthProblem(BFalse, never_gear3_and_speed_low, 'v_low', [0 30]);
param_pb.solve();

%% Requirement mining: Iterate 
mining_pb = ReqMiningProblem(param_pb, falsif_pb);
mining_pb.solve();

%% Visualizing final coverage 
mining_pb.falsif_pb.BrSet_Logged.PlotSigPortrait({'gear','speed'})

%}
