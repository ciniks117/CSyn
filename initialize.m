    % init script
    
function [phi,rob,BrFalse]=initialize(modelno,specno)
   
    if modelno==1
        [phi,rob,BrFalse]=init_quadrotor('model',specno,1);
    elseif modelno==2 
        [phi,rob,BrFalse]=init_cc('cruise_ctrl',specno,1);
    elseif modelno==3
        [phi,rob,BrFalse]=init_quadrotor_full('Quad_sim',specno,1);
    elseif modelno==4
        [phi,rob,BrFalse]=init_aircraft('Aircraft_Pitch',specno,1);
    elseif modelno==5
        [phi,rob,BrFalse]=init_pendulum('Inverted_Pendulum',specno,1);
    elseif modelno==6
        [phi,rob,BrFalse]=init_dcmotor('DCMotor',specno,1);
    elseif modelno==7
        [phi,rob,BrFalse]=init_f16('rct_concorde',specno,1);    
    elseif modelno==8
        [phi,rob,BrFalse]=init_walkingRobot('walkingRobot',specno,1);    
    elseif modelno==9
        [phi,rob,BrFalse]=init_robotarm('cst_robotarm',specno,1);    
    elseif modelno==10
        init_suspmod;
    end
end   
