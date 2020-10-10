%% this is file to run multiple simulations and goto the point where 
%% we find which of the signal in the SL model is faulty


%% Interface Automatic Transmission model with Breach 
%B = BreachSimulinkSystem('Autotrans_shift'); % Falsifying trace found
B = BreachSimulinkSystem('Autotrans_shift');
%B = BreachSimulinkSystem('phi1_Autotrans_shift'); % phi1 falsifying trace not found
%B.PrintAll % print available signals and parameters 

% define the formula1
%phi1 = STL_Formula('phi1', '(alw (speed[t]<vmax)) and (alw (RPM[t]<rpm_max))');
%phi1 = set_params(phi1,{'vmax', 'rpm_max'}, [160 4500]);
%get_params(phi1)

%define the formula2
STL_ReadFile('Autotrans_spec.stl');
%phi1 = never_gear3_and_speed_low; %this is phi2
%phi1 = phi_vmaxmin;  % this is phi3
phi1 = alw_stay2_for_t1; %this is phi4


%% Running one simulation
%B.SetTime(0:.01:30); B.SetParam({'throttle_u0'}, 100);
%B.Sim(); B.PlotSignals({'throttle', 'RPM', 'speed', 'gear'});

%% Describes complex driving scenarios 
% We create an input generator that will alternates between acceleration and braking 
sg = var_step_signal_gen({'throttle', 'brake'}, 5);
B.SetInputGen(sg);

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
B.Sim();
B.PlotSignals({'throttle', 'brake','RPM', 'speed', 'gear'});


%% Generate and run multiple test cases
%B.QuasiRandomSample(10); B.Sim();

%% Checks property by monitoring 
%B.CheckSpec(phi1);
%B.PrintSpecs

%% Falsify property
falsif_pb = FalsificationProblem(B, phi1);
falsif_pb.max_time = 180;
falsif_pb.solve();
if falsif_pb.obj_best>=0
    return;
end
BrFalse = falsif_pb.GetBrSet_False();

for i=1:B.P.DimX
  A(i,:) = B.P.ParamList(i);
end
BrFalse.PlotSignals(A);


BrFalse.PlotRobustSat(phi1);
    BrFalse.PlotSigPortrait(A(1));
    h = findobj(gca,'Type','line');
    x = h.XData;
    y = h.YData;
    xlswrite('BrFalse',{transpose(x),transpose(y)});
    
  %for sig = {'brake','speed','RPM','gear'}
signals = STL_ExtractSignals(phi1); % gives us 'RPM' and 'speed'
%get_params(phi1);

for i=2:B.P.DimX
        BrFalse.PlotSigPortrait(A(i));
        h = findobj(gca,'Type','line');
        y = h.YData;
        %Step 1 - Read the file
        M = csvread('BrFalse.csv');
        % Step 2 - Add a column to the data
        M = [ M transpose(y)];
        % Step 3 - Save the file
        csvwrite('BrFalse.csv', M);
end

if BrFalse.CheckSpec(phi1)<0
    out = STL_Break(phi1,2);
    out1 = out(1);
    while length(out)>2
        for i=1:length(out)-1
            if BrFalse.CheckSpec(out(i))<0
                out1=out(i);
                break;
            end
        end
        out = STL_Break(out1,2);
    end
end
   
%out2 = STL_Break(out(2),2);
out = STL_Break(out1,2);
error = STL_ExtractSignals(out(1));
err1 = ' the suspect is';
disp(err1);
disp(error);

BrFalse.PlotRobustSat(out(1));
h = findobj(gca,'Type','line');
x = h.XData;
y = h.YData;
%xlswrite('BrFalse_Plot_Robust_Sat',{transpose(x),transpose(y)});

delete 'BrFalse_Plot_Robust_Sat.csv';

for i=1:length(x)
    if y(i)<0
        dlmwrite('BrFalse_Plot_Robust_Sat.csv',{transpose(x(i)),transpose(y(i))},'delimiter',',','-append');
    end
end

%below is the linux command for joining two csv files
! sort -t , -k 1,1 BrFalse.csv > sort1.csv
! sort -t , -k 1,1 BrFalse_Plot_Robust_Sat.csv > sort2.csv
! join -t , -1 1 -2 1 sort1.csv sort2.csv > join.csv

 M = csvread('join.csv');
 % Step 2 - Add a column to the data
min=Inf;
col=B.P.DimX+2;
[ m , n ] = size(M);
 for i=1:m
     if M(i,col)<min
         min=M(i,col);
         E=M(i,:);
     end
 end
 %disp('min robustness is');
 %disp(min);
 disp('values at this point are');
 A{end+1} =  'rob';
 disp('time');
 disp(E(1));
 for i=1:col-1
    disp(A(i));
    disp(E(i+1));
 end
 
 close all;
 M(:,1)=[];
 N=M(:,1:end-1); % removing robustness column
 [R,id]=licols(N,0.01);
 
 
 %% to delete ith column use a(:,i) = [];
 %% we get id =2,3,4,9 which is ImplTorque,OutTorque,RPMand rob.
 %% so the linearly dependent columns would be its complement i.e. 
 %% gear,speed,throttle and brake which we can say as suspected signals.
 %% Now taking intersection with the sliced signals we come down to gear,
 %% throttle and brake.
 

 function [Xsub,idx]=licols(X,tol)
%Extract a linearly independent set of columns of a given matrix X
%
%    [Xsub,idx]=licols(X)
%
%in:
%
%  X: The given input matrix
%  tol: A rank estimation tolerance. Default=1e-10
%
%out:
%
% Xsub: The extracted columns of X
% idx:  The indices (into X) of the extracted columns
     if ~nnz(X) %X has no non-zeros and hence no independent columns
         Xsub=[]; idx=[];
         return
     end
     if nargin<2, tol=1e-10; end
       [Q, R, E] = qr(X,0); 
       if ~isvector(R)
        diagr = abs(diag(R));
       else
        diagr = R(1);   
       end
       %Rank estimation
       r = find(diagr >= tol*diagr(1), 1, 'last'); %rank estimation
       idx=sort(E(1:r));
       Xsub=X(:,idx);
 end
 

