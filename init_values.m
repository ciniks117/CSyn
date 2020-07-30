
   %global index;
   %global pval;
   %global newfile;
   %global modelno;
function [pval,sind]=init_values(newfile,modelno)   
    lenp=3; 
    if modelno==1
      sind={'Gain';'Gain1';'Gain2'};
      pval=[1,5,10]; 
      lenp=3; 
      %dlmwrite('dataset.csv',{transpose(1),transpose(2),transpose(20),transpose(old_rob)},'delimiter',',','-append'); 
    elseif modelno==2
      sind={'Gain';'Gain1';'Gain2'};
      pval=[0.1,0.5,1];
      lenp=3; 
      %dlmwrite('dataset.csv',{transpose(0.1),transpose(0.2),transpose(5),transpose(old_rob)},'delimiter',',','-append'); 
    elseif modelno==3 
      %init_vars
      %global Q;
      sind={'Kp','Ki','Kd','Kp1','Ki1','Kd1','Kp2','Ki2','Kd2','Kp3','Ki3','Kd3','Kp4','Ki4','Kd4','Kp5','Ki5','Kd5'};
      %pval=[Q.Kp_x,Q.Ki_x,Q.Kd_x,Q.Kp_y,Q.Ki_y,Q.Kd_y,Q.Kp_z,Q.Ki_z,Q.Kd_z,Q.Kp_phi,Q.Ki_phi,Q.Kd_phi,Q.Kp_theta,Q.Ki_theta,Q.Kd_theta,Q.Kp_psi,Q.Ki_psi,Q.Kd_psi];       
      %pval=[0.1,0,-0.16,0.1,0,-0.16,4,0,-4,4.5,0,0,4.5,0,0,10,0,0];
      pval=[.1,0,-.1,.1,0,-.1,4,0,-4,4.5,0,0,4.5,0,0,10,0,0];
      %pval=[.1,.1,-1,.1,.1,-1,1.5625,.1,-6.4072,4.5,0,0,4.5,0,0,10,0,0];%all
      lenp=18;
    elseif modelno==4
        sind={'Gain';'Gain1';'Gain2'};
        pval=[0.348,0.495,0.115];
        lenp=3; 
    elseif modelno==5
        sind={'Gain';'Gain1';'Gain2'};
        pval=[65.58,41.76,3.87];
        lenp=3; 
    elseif modelno==6
        sind={'Gain';'Gain1';'Gain2'};
        pval=[50,20,1.65];
        lenp=3; 
    elseif modelno==7
        sind={'Gain';'Gain1';'Gain2'};
        pval=[356623.87,183466.47,23596.25];
        lenp=3;
    end
    default_val=pval;
       open_system(newfile);
       b = find_system(newfile,'Type','Block');  
        for i=1:length(b)
           prefix = strsplit(char(b(i)),'/');
           if length(prefix)>2
               continue;
           end

           for j=1:lenp
              if strcmp(prefix(2),sind(j))
                handle(j) = get_param(b{i},'handle');
                block = get(handle(j));
              end
           end
        end  
           %{
           if strcmp(prefix(2),sind(1))
              handle1 = get_param(b{i},'handle');
              block1 = get(handle1);
           end    
           if strcmp(prefix(2),sind(2))
              handle2 = get_param(b{i},'handle');
              block2 = get(handle2);
           end    
           if strcmp(prefix(2),sind(3))
              handle3 = get_param(b{i},'handle');
              block3 = get(handle3);
           end    
           %}
        %end
        for j=1:lenp
          set_param(handle(j),block.BlockType,num2str(pval(j)));
        end  
        %set_param(handle2,block2.BlockType,num2str(pval(2)));
        %set_param(handle3,block3.BlockType,num2str(pval(3)));
        save_system(newfile);
    close_system(newfile);
end  
