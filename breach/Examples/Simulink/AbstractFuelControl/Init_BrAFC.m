InitBreach;
fuel_inj_tol = 1.0; 
MAF_sensor_tol = 1.0;
AF_sensor_tol = 1.0; 
pump_tol = 1.;
kappa_tol=1; 
tau_ww_tol=1;
fault_time=50;
kp = 0.04;
ki = 0.14;

mdl = 'sldemo_fuelsys_original';
BrAFC = BreachSimulinkSystem(mdl)

%Speed_gen = pulse_signal_gen({'Speed'}); % Generate a pulse signal for pedal angle
Throttle_gen      = fixed_cp_signal_gen({'Throttle'}, ... % signal name
                                       3,...                % number of control points
                                      {'spline'});       % interpolation method 
        
InputGen = BreachSignalGen({Speed_gen, Throttle_gen});

InputGen.SetParam({'Throttle_u0','Throttle_u1','Throttle_u2'},...
                        [10 20 10]);

InputGen.SetParam({'Speed_u0'}, ... 
                         [300]);
   
BrAFC.SetInputGen(InputGen);
%BrAFC.Sim();
%BrAFC.PlotSignals();

STL_ReadFile('AFC_simple_spec.stl');
phi1=AF_tol;

falsif_pb = FalsificationProblem(BrAFC,phi1);
falsif_pb.max_time = 40;
falsif_pb.solve();
if falsif_pb.obj_best>=0
    return;
end
  
BrFalse = falsif_pb.GetBrSet_False();
