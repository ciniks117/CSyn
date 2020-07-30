%% main script
%modelno=1; % select model no

setenv PYTHON 'LD_LIBRARY_PATH="" python3';
%%export LD_PRELOAD=/lib/x86_64-linux-gnu/libexpat.so.1

delete 'dataset.csv';
close all;
%init_model;
%init_quadrotor;
fixed=0;
warning off;

%return;
%while fixed==0  
  parameter_tuning;
  %Map1(char(sind(index)))=1;
  disp("#############################");
  if falsif_pb.obj_best>=0
    disp("fixed model");
    fixed=1;
    return;
  else
    disp("not fixed");
  end
  disp("----------------------------------------");
  %disp("----FIXING ANOTHER SUBSPEC---------");
%end

