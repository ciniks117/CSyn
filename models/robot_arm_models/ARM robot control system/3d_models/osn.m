  clc
 clear all
  close all
% 
% 
% 
% l1=501;
% l2=400;
% l3=326;
% l4=10;
% l5=105;
% 
% l33=100;
% 
% syms x1 x2 x3 x4 x5 x6
%  
% 
% R1=[
%      cos(x1) 0 sin(x1) 0 ;
%       0      1       0 0 ;
%     -sin(x1) 0 cos(x1) 0 ;
%       0      0       0 1
%                ]; %matrica povorota 1go zvena otnositelno bazi
%            
%            
%  R2=[
%         cos(x2) -sin(x2) 0 0;
%         sin(x2) cos(x2) 0 0 ;
%         0 0 1 0 ;
%         0 0 0 1
%                ] ; 
% 
%            
%    R3=[
%         cos(x3) -sin(x3) 0  0;
%         sin(x3) cos(x3) 0   0 ;
%             0       0   1   0 ;
%             0       0   0   1
%                ]; 
%     R4=[
%              1       0    0 0 ;
%              0 cos(x4) -sin(x4)  0 ;
%              0 sin(x4) cos(x4)   0 ;
%              0       0    0 1
%               ]  ; 
%            
%            
%      R5=[
%         cos(x5) -sin(x5) 0 0;
%         sin(x5) cos(x5) 0 0 ;
%         0 0 1 0 ;
%         0 0 0 1
%                ];
%            
%     R6=[
%              1       0    0 0 ;
%              0 cos(x6) -sin(x6)  0 ;
%              0 sin(x6) cos(x6)   0 ;
%              0       0    0 1
%               ]  ;
%          
%          
%          
%      P1=[
%          1 0 0 0
%          0 1 0 l1
%          0 0 1 0
%          0 0 0 1 
%          ];
%            
%      
%       P2=[
%          1 0 0 l2
%          0 1 0 0
%          0 0 1 0
%          0 0 0 1 
%          ];
%      
%      P3=[
%          1 0 0 l3/2
%          0 1 0 0
%          0 0 1 l33
%          0 0 0 1 
%          ];
%      
%       P4=[
%          1 0 0 l3/2
%          0 1 0 0
%          0 0 1 0
%          0 0 0 1 
%          ];
%      
%      P5=[
%          1 0 0 l4
%          0 1 0 0
%          0 0 1 0
%          0 0 0 1 
%          ];
%      
%       P6=[
%          1 0 0 l5
%          0 1 0 0
%          0 0 1 0
%          0 0 0 1 
%          ];
%      
%      
%      
%       T=(R1*P1)*(R2*P2)*(R3*P3)*(R4*P4)*(R5*P5)*(R6*P6) 
%      % T=simplify(T)    ;
% 
% 
% break
% 
%  s = serial('COM22','BaudRate',115200);
%  s.OutputBufferSize = 200000
%  fopen(s)butil.mat



load  circle400_500point.mat
load n500.mat




fa1=[0 0 0 0 0 0]

p1=[500 50 0]';

not=500;
vih=100;
n=1:1:not;
z=1

%break

%выбор режима :1- задание одной точки, 2- задание окружности, 3- движение с
%бутылкой

pr=3;
p1=[800 500 0]';
%p1=[841 501 100]';
switch pr
    case 1          %odna tochka
             z=2;
             p1=[800 500 0]';
             nu=[0,0,0,0,0,0];
             opt=optimset('Algorithm','levenberg-marquardt','MaxIter',10000,'MaxFunEvals',10000, 'tolx',1e-15);
             fa1=fsolve(@(x)inv_kinem(x,p1,[1;0;0;0;1;0;0;0;1]),nu,opt)
             %fsolve(@(x)inv_kinem(x,P,O),nu);
             break
             
    case 2          %движение по окружности (радиус с1) с плавным выходом из начальной точки
                z=1                 
                
                p1=[400 250 0]';%положение центра окружности                
                c1=300;         %радиус окружности
                
                c2=2;
              
                t=linspace(0,pi,not);
                tmpx=zeros(size(t))+p1(1,1);
                zkor=c1*sin(c2*t-pi)+p1(3,1);
                ykor=c1*cos(c2*t-pi)+p1(2,1);   
                
                figure(2)
                plot3(tmpx,zkor,ykor)
                
                disp('ПАУЗА')
                pause
                
                o5=linspace(1, 1,not);               %ориентация при выходе из начальной точки (менее плавно)
                o6=linspace(0, 0,not);
                o8=linspace(0, 0,not);
                o9=linspace(1, 1,not); 
                
                
    case 3           %butilka
                z=1
                
                p1=[350 150 150]';                
                c1=150;                                 
                c2=2;                
                t=linspace(pi+pi/3, pi,not-vih);            %расчет окружности 
                tmpx=zeros(size(t))+p1(1,1);
                zkor=c1*sin(c2*t)+p1(3,1);
                ykor=c1*cos(c2*t)+p1(2,1);
                
                tmpx=[linspace(841, tmpx(1),vih) tmpx];      %выход из стартовой точки на первую точку окружности
                zkor=[linspace(100, zkor(1),vih) zkor];
                ykor=[linspace(501, ykor(1),vih) ykor];
                
                
                co=cos(linspace(pi/3, pi,not-vih));         %ориентация при движении по окружности
                si=sin(linspace(pi/3, pi,not-vih)); 
                
                co=[ linspace(1, cos(pi/3),vih/2) co] ;      %ориентация при подходе к окружности (плавно)
                si=[ linspace(1, sin(pi/3),vih/2) si];
                
                
                o5=[linspace(1, 1,vih/2) co];               %ориентация при выходе из начальной точки (менее плавно)
                o6=[linspace(0, -1,vih/2) -si];
                o8=[linspace(0, 1,vih/2) si];
                o9=[linspace(1, 1,vih/2) co];
                
%                 si=[linspace(1, 1,vih) si]
%                 co=[linspace(1, 1,vih) co]
                 figure(10)
                 plot3(tmpx,zkor,ykor)
%                  figure(2)
%                  comet3(tmpx,zkor,ykor)
%                  figure(3)
%                  plot(zkor,ykor)
 %              break
                


case 4          
                z=1
                 p1=[500 450 0]';
                
                c1=150;
                c2=150;
                
                t=linspace(0, pi/c2,not);
                tmpx=zeros(size(t))+p1(1,1);
                zkor=(c1*-sin(-c2*t-pi*0)+p1(3,1));
                ykor=c1*-cos(-c2*t-pi*0)+p1(2,1);            
                
            
end
  
opt=optimset('Algorithm','levenberg-marquardt','MaxIter',1000,'MaxFunEvals',1000, 'tolx',1e-5);

nu=[0,0,0,0,0,0]

clear f1
for n=1:not

P= [tmpx(n); ykor(n); zkor(n)
    ];
O=[1;0;0;0;o5(n);o6(n);0;o8(n);o9(n) ];


f1(n,:)=fsolve(@(x)inv_kinem(x,P,O),nu,opt);
clc
nu=f1(n,:);

end
f1
n=1:1:not;

break



sim('manus_test')
break

figure(1)
plot(tout,[simout(:,1) simout(:,2) simout(:,3)])
grid on

figure(2)
plot(tout,[simout(:,4) simout(:,8) simout(:,12)])
grid on

figure(3)
plot3(simout(:,1),simout(:,2),simout(:,3) )
grid on

