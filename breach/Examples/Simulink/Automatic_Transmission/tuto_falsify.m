InitBreach;

% Model
mdl = 'Autotrans_shift';
Br = BreachSimulinkSystem(mdl);
%Br.SetParam( 'throttle_dt0', 20);


% define the formula
phi1 = STL_Formula('phi1', '(alw (speed[t]<vmax)) and (alw (RPM[t]<rpm_max))');
%phi2 = STL_Formula('phi2', '(alw (not ((gear[t] == 3) and (speed[t]< v_low ))))'); 
phi1 = set_params(phi1,{'vmax', 'rpm_max'}, [160 4500]);

% define the input parameters and ranges 
input_params.names = {'throttle_u0'};
input_params.ranges = [0 100];

% defines the falsification problem and solve it
falsif_pb = FalsificationProblem(Br, phi1, input_params.names, input_params.ranges);

% solves using the default solver
falsif_pb.solve();


% collect the falsifying trace 
BrFalse = falsif_pb.GetBrSet_False()


BrFalse.PlotSignals({'throttle','brake','speed','RPM','gear'}, [], {'LineWidth', 2});

BrFalse.PlotRobustSat(phi1); % add 3 for depth upto 3 levels

%for parameter synthesis
%synth_pb = ParamSynthProblem(AT_ParamSynth, phi1,{'rpm_max'}, [0 5000]);
%synth_pb.solver_options.monotony = [1];
%synth_pb.solve();

%BrFalse.PlotRobustMap(phi1, {'vmax','rpm_max'}, [0 200; 4500 5000]);  
%for sensitivity analysis

%My additions
%Br.Sim(0:.01:40);
%Br.PlotSignals();

%AT_ParamSynth = Br.copy();
%AT_ParamSynth.Sim;
%synth_pb = ParamSynthProblem(AT_ParamSynth, phi1,{'throttle'}, [0 100]);
%param_pb = ParamSynthProblem(AT_ParamSynth, phi2, 'v_low', [0 30]);
%synth_pb.solver_options.monotony = [1];
%synth_pb.solve();
