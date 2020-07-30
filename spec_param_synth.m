
% this script takes modelno and specno as input
%function [phi,rob,BrFalse] = spec_param_synth(newfile,specno)
%synthesis
modelno=3;
%specno=2;
if modelno==4
      if specno==3
        phi_c = STL_Formula('phi_c', 'ev_[0,tau] alw (abs(theta[t]-theta_ref[t]) < epsi )');
        phi = set_params(phi_c,{'tau', 'epsi'}, [10 0.1]);
      elseif specno==5  
        phi_sp = STL_Formula('phi_sp', 'alw (not(((theta[t+dt]-theta[t])*10 > m) and ev_[0,tau] ((theta[t+dt]-theta[t])*10 < -1*m)))');
        phi = set_params(phi_sp,{'tau', 'dt','m'}, [5 0.1 0.1]);
      end  
    
        %phi=phi_c;

        pp=get_params(phi);
        clear phi_mod;
        if isfield(pp,'m')
          dval=pp.m;
          min=dval;
          max=5;
          step=(max-min)/10;
          for i=min:step:max
              phi_mod=set_params(phi,'m',i);
              [phi_mod,rob]=synth_aircraft('Aircraft_Pitch',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end  
        elseif isfield(pp,'tau')
          dval=pp.tau;
          min=dval;
          max=dval*2;
          step=(max-min)/10;
          for i=min:step:max
              phi_mod=set_params(phi,'tau',i);
              [phi_mod,rob]=synth_aircraft('Aircraft_Pitch',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end
        elseif isfield(pp,'dt')
          dval=pp.dt;
        end
elseif modelno==2
        phi_r = STL_Formula('phi_r', 'ev_[0,tau] (speed[t] > bt*ref_speed[t])');
        phi_r = set_params(phi_r,{'tau', 'bt'}, [1 0.9]);
        phi=phi_r;
        pp=get_params(phi);
        clear phi_mod;
        if isfield(pp,'tau')
          dval=pp.tau;
          min=dval;
          max=dval*10;
          step=(max-min)/10;
          for i=min:step:max
              phi_mod=set_params(phi,'tau',i);
              [phi_mod,rob]=synth_cc('cruise_ctrl',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end
        elseif isfield(pp,'bt')
          dval=pp.dt;
          
          min=dval;
          max=1;
          step=0.02;
          for i=min:step:max
              phi_mod=set_params(phi,'bt',i);
              [phi_mod,rob]=synth_cc('cruise_ctrl',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end
        end
     
elseif modelno==5
        phi_r = STL_Formula('phi_r', 'ev_[0,tau] (theta[t] > bt)');
        phi_r = set_params(phi_r,{'tau', 'bt'}, [0.1 0.9]);
        phi=phi_r;
        pp=get_params(phi);
        clear phi_mod;
        if isfield(pp,'bt')
          dval=pp.bt;
          min=dval;
          max=0.1;
          step=-0.1;
          for i=min:step:max
              phi_mod=set_params(phi,'bt',i);
              [phi_mod,rob]=synth_pendulum('Inverted_Pendulum',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end
        elseif isfield(pp,'tau')
          dval=pp.tau;
          min=dval;
          max=dval*10;
          step=(max-min)/10;
          for i=min:step:max
              phi_mod=set_params(phi,'tau',i);
              [phi_mod,rob]=synth_pendulum('Inverted_Pendulum',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end
        end
  elseif modelno==6
      if specno==2
        phi_r = STL_Formula('phi_r', 'ev_[0,tau] (speed[t] > bt)');
        phi = set_params(phi_r,{'tau', 'bt'}, [0.6 0.8]);
      elseif specno==1
        phi_s = STL_Formula('phi_s', 'alw_[0,2.2] (abs(speed[t+dt]-speed[t]) < epsi)');
        phi = set_params(phi_s,{'dt', 'epsi'}, [0.01 0.02]);
      end
        %phi=phi_r;
        pp=get_params(phi);
        clear phi_mod;
        if isfield(pp,'epsi')
          dval=pp.epsi;
          min=dval;
          max=dval*10;
          step=(max-min)/10;
          for i=min:step:max
              phi_mod=set_params(phi,'epsi',i);
              [phi_mod,rob]=synth_dcmotor('DCMotor',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end        
        elseif isfield(pp,'tau')
          dval=pp.tau;
          min=dval;
          max=dval*10;
          step=(max-min)/10;
          for i=min:step:max
              phi_mod=set_params(phi,'tau',i);
              [phi_mod,rob]=synth_dcmotor('DCMotor',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end
        elseif isfield(pp,'bt')
          dval=pp.bt;
          min=dval;
          max=1;
          step=0.02;
          for i=min:step:max
              phi_mod=set_params(phi,'bt',i);
              [phi_mod,rob]=synth_dcmotor('DCMotor',phi_mod);
              if rob>=0
                 disp("new spec is ");
                 phi_mod
                 disp("with params ");
                 disp(get_params(phi_mod));
                 return;
              end
           disp(i);   
          end
        end
   elseif modelno==3
           phi_r = STL_Formula('phi_r', 'ev_[0,tau] ((Z[t] > Zd[t]*bt) and (X[t] > Xd[t]*bt) and (Y[t] > Yd[t]*bt))');
           phi_r = set_params(phi_r,{'tau', 'bt'}, [2.3 0.8]); 
           phi=phi_r;
            pp=get_params(phi);
            clear phi_mod;
            if isfield(pp,'tau')
              dval=pp.tau;
              min=dval;
              max=dval*10;
              step=(max-min)/10;
              for i=min:step:max
                  phi_mod=set_params(phi,'tau',i);
                  [phi_mod,rob]=synth_quadrotor_full('Quad_sim',phi_mod);
                  if rob>=0
                     disp("new spec is ");
                     phi_mod
                     disp("with params ");
                     disp(get_params(phi_mod));
                     return;
                  end
               disp(i);   
              end
            elseif isfield(pp,'bt')
              dval=pp.bt;
              min=dval;
              max=1;
              step=0.02;
              for i=min:step:max
                  phi_mod=set_params(phi,'bt',i);
                  [phi_mod,rob]=synth_quadrotor_full('Quad_sim',phi_mod);
                  if rob>=0
                     disp("new spec is ");
                     phi_mod
                     disp("with params ");
                     disp(get_params(phi_mod));
                     return;
                  end
               disp(i);   
              end
            end
end
return;


% par syn using breach
% %get_params(phi);
% if modelno==2
%   init_cc;
%   AP = B.copy();
%   AP.Sim;
%   synth_pb = ParamSynthProblem(AP, phi_settle, {'dt'}, [1e-2 1]);
%   synth_pb.solve();
% elseif modelno==4
%   init_aircraft;  
%   %AP.Sim;
%   %synth_pb = ParamSynthProblem(AP, phi_rise, {'tau'}, [0 10]);
%   %synth_pb.solver_options.monotony = [1];
%   %synth_pb.solve();
%   AP = B.copy();
%   synth_pb = ParamSynthProblem(AP, phi_conv, {'epsi'}, [0.01 0.50]);
%   synth_pb.solver_options.monotony = [1];
%   synth_pb.solve();
% end
% 
