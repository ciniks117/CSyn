  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 76;
      section.data(76)  = dumData; %prealloc
      
	  ;% rtP.dFilt
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.nFilt
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.Integrator_IC
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtP.Gi1_Gain
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtP.Sp1_Gain
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtP.DiscreteTransferFcn_InitialStates
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtP.Gp1_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtP.Gd1_Gain
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtP.D1_UpperSat
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtP.D1_LowerSat
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtP.Integrator1_IC
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtP.Gi2_Gain
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtP.Sp2_Gain
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% rtP.DiscreteTransferFcn1_InitialStates
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% rtP.Gp2_Gain
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% rtP.Gd2_Gain
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% rtP.D2_UpperSat
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% rtP.D2_LowerSat
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% rtP.Integrator2_IC
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% rtP.Gi3_Gain
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% rtP.Sp3_Gain
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% rtP.DiscreteTransferFcn2_InitialStates
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% rtP.Gp3_Gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% rtP.Gd3_Gain
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% rtP.D3_UpperSat
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% rtP.D3_LowerSat
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% rtP.Integrator3_IC
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% rtP.Gi4_Gain
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% rtP.Sp4_Gain
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% rtP.DiscreteTransferFcn3_InitialStates
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% rtP.Gp4_Gain
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% rtP.Gd4_Gain
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% rtP.D4_UpperSat
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% rtP.D4_LowerSat
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% rtP.Integrator4_IC
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% rtP.Gi5_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 37;
	
	  ;% rtP.Sp5_Gain
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% rtP.DiscreteTransferFcn4_InitialStates
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 39;
	
	  ;% rtP.Gp5_Gain
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 40;
	
	  ;% rtP.Gd5_Gain
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 41;
	
	  ;% rtP.D5_UpperSat
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 42;
	
	  ;% rtP.D5_LowerSat
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 43;
	
	  ;% rtP.Integrator5_IC
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 44;
	
	  ;% rtP.Gi6_Gain
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 45;
	
	  ;% rtP.Sp6_Gain
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 46;
	
	  ;% rtP.DiscreteTransferFcn5_InitialStates
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 47;
	
	  ;% rtP.Gp6_Gain
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 48;
	
	  ;% rtP.Gd6_Gain
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 49;
	
	  ;% rtP.D6_UpperSat
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 50;
	
	  ;% rtP.D6_LowerSat
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 51;
	
	  ;% rtP.R1_Gain
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 52;
	
	  ;% rtP.R2_Gain
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 53;
	
	  ;% rtP.R3_Gain
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 54;
	
	  ;% rtP.R4_Gain
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 55;
	
	  ;% rtP.R5_Gain
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 56;
	
	  ;% rtP.R6_Gain
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 57;
	
	  ;% rtP.Break_Value
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 58;
	
	  ;% rtP.Break1_Value
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 59;
	
	  ;% rtP.Break2_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 60;
	
	  ;% rtP.Break3_Value
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 61;
	
	  ;% rtP.Break4_Value
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 62;
	
	  ;% rtP.Break5_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 63;
	
	  ;% rtP.Constant1_Value
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 64;
	
	  ;% rtP.IC_Value
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 65;
	
	  ;% rtP.u5_UpperSat
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 66;
	
	  ;% rtP.u5_LowerSat
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 67;
	
	  ;% rtP.u51_UpperSat
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 68;
	
	  ;% rtP.u51_LowerSat
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 69;
	
	  ;% rtP.u52_UpperSat
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 70;
	
	  ;% rtP.u52_LowerSat
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 71;
	
	  ;% rtP.u53_UpperSat
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 72;
	
	  ;% rtP.u53_LowerSat
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 73;
	
	  ;% rtP.u54_UpperSat
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 74;
	
	  ;% rtP.u54_LowerSat
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 75;
	
	  ;% rtP.u55_UpperSat
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 76;
	
	  ;% rtP.u55_LowerSat
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 77;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 133;
      section.data(133)  = dumData; %prealloc
      
	  ;% rtB.kpuxbwdbqy
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.e4jpommznb
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 29;
	
	  ;% rtB.dqejxyzqpz
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 41;
	
	  ;% rtB.bagwbwq1rt
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 42;
	
	  ;% rtB.hsnbhfvlji
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 43;
	
	  ;% rtB.grwuc0rtke
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 44;
	
	  ;% rtB.ladvsqy4po
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 45;
	
	  ;% rtB.hsvhvzaitf
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 46;
	
	  ;% rtB.aayombost0
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 47;
	
	  ;% rtB.nbg2no4kfn
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 48;
	
	  ;% rtB.polzbmpty5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 49;
	
	  ;% rtB.cavafntrgm
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 50;
	
	  ;% rtB.fht4xkh1ev
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 51;
	
	  ;% rtB.m4nbz10psi
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 52;
	
	  ;% rtB.no42p5lqd0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 53;
	
	  ;% rtB.oqprhwxbtn
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 54;
	
	  ;% rtB.okawz4w12q
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 55;
	
	  ;% rtB.fvsrxbfg4g
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 56;
	
	  ;% rtB.mn03pjitnu
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 57;
	
	  ;% rtB.fl2ljqidug
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 58;
	
	  ;% rtB.iztuma3owj
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 59;
	
	  ;% rtB.pfjse2trbp
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 60;
	
	  ;% rtB.erfi1h50vk
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 61;
	
	  ;% rtB.eqsuyearws
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 62;
	
	  ;% rtB.bgkhkuq1uv
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 63;
	
	  ;% rtB.eackyyj2tp
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 64;
	
	  ;% rtB.eh2hjsaicu
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 65;
	
	  ;% rtB.k0jr3j5oxo
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 66;
	
	  ;% rtB.buqdf1fc0l
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 67;
	
	  ;% rtB.lozfekbxyk
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 68;
	
	  ;% rtB.dlc4zw50uu
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 69;
	
	  ;% rtB.hsgnje4cmi
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 70;
	
	  ;% rtB.p2n0iwadpz
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 71;
	
	  ;% rtB.boum0gprkv
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 72;
	
	  ;% rtB.j25zwoocn5
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 73;
	
	  ;% rtB.aatxioghgk
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 74;
	
	  ;% rtB.hndwswnyoz
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 75;
	
	  ;% rtB.i53xrhehpp
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 76;
	
	  ;% rtB.oew5eo25ef
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 77;
	
	  ;% rtB.iclarv42jt
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 78;
	
	  ;% rtB.btorth4vln
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 79;
	
	  ;% rtB.hfh4ccgrqw
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 80;
	
	  ;% rtB.cx2pgcpxmh
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 81;
	
	  ;% rtB.gcyzeyasy2
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 82;
	
	  ;% rtB.hqaumiwlfi
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 83;
	
	  ;% rtB.omps0qn1bp
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 84;
	
	  ;% rtB.a3xwdirkee
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 85;
	
	  ;% rtB.fqne33prwc
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 86;
	
	  ;% rtB.dxfnpqbkcb
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 87;
	
	  ;% rtB.jk5baceso4
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 88;
	
	  ;% rtB.bkvix0h45z
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 89;
	
	  ;% rtB.n5av2fk0n2
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 90;
	
	  ;% rtB.hs52pyeuw2
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 91;
	
	  ;% rtB.arsgpeonhl
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 92;
	
	  ;% rtB.imw2c4hmx0
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 93;
	
	  ;% rtB.ht4gnbs14o
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 94;
	
	  ;% rtB.oaqctdd1z4
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 95;
	
	  ;% rtB.iktdwnifqy
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 96;
	
	  ;% rtB.cz1ppk0zx1
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 97;
	
	  ;% rtB.f1s03qmtvz
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 98;
	
	  ;% rtB.aj2xvlnbau
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 99;
	
	  ;% rtB.dnyn3lbtrv
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 100;
	
	  ;% rtB.ldiq5q5naa
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 101;
	
	  ;% rtB.b4uivev3hv
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 102;
	
	  ;% rtB.gmslp1xfld
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 103;
	
	  ;% rtB.n2cbzljwsr
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 104;
	
	  ;% rtB.kfizj0xxbp
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 105;
	
	  ;% rtB.l5vvo0nd3q
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 106;
	
	  ;% rtB.asyj1ffrm5
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 107;
	
	  ;% rtB.awwm15wr2b
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 108;
	
	  ;% rtB.m5tahxhn0f
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 109;
	
	  ;% rtB.on0z4zmhgg
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 110;
	
	  ;% rtB.dvrimdcswm
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 111;
	
	  ;% rtB.onhuz22qes
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 112;
	
	  ;% rtB.ao5dn0t2uz
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 113;
	
	  ;% rtB.ayfkra0odz
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 114;
	
	  ;% rtB.lw1ku45fyz
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 115;
	
	  ;% rtB.lmpujrulyo
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 116;
	
	  ;% rtB.hw1ccwcgua
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 117;
	
	  ;% rtB.gue5wmwueg
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 118;
	
	  ;% rtB.cyywu0nyp5
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 119;
	
	  ;% rtB.nzuj0tkyis
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 120;
	
	  ;% rtB.nny34gtevo
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 121;
	
	  ;% rtB.oawdzxyk1g
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 125;
	
	  ;% rtB.go1xfp1pfe
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 129;
	
	  ;% rtB.inipmccc32
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 133;
	
	  ;% rtB.efla2tgklq
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 137;
	
	  ;% rtB.gcaq34maq5
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 146;
	
	  ;% rtB.ggdoah4lpg
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 147;
	
	  ;% rtB.clw3kkg5lz
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 151;
	
	  ;% rtB.o10dy052cl
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 155;
	
	  ;% rtB.kwsufxstz0
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 159;
	
	  ;% rtB.e5djqxbatk
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 163;
	
	  ;% rtB.hg55o3nyo3
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 167;
	
	  ;% rtB.pnxfeg3myh
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 171;
	
	  ;% rtB.d432tayljp
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 175;
	
	  ;% rtB.kvb4zpjzgq
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 179;
	
	  ;% rtB.boj21qbs4q
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 197;
	
	  ;% rtB.myut2kekff
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 198;
	
	  ;% rtB.ji3vchq3tw
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 202;
	
	  ;% rtB.h2xuzybx31
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 206;
	
	  ;% rtB.aalhpeekcz
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 210;
	
	  ;% rtB.n2nhbhgaoj
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 214;
	
	  ;% rtB.an5wlueyqi
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 218;
	
	  ;% rtB.ccbyphkuvf
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 227;
	
	  ;% rtB.gloyjgyfuk
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 228;
	
	  ;% rtB.pv1aefa4ak
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 232;
	
	  ;% rtB.j2hdft1opa
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 236;
	
	  ;% rtB.lkp0ijlter
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 240;
	
	  ;% rtB.c3sg5zcxif
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 244;
	
	  ;% rtB.hefgnl12g0
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 248;
	
	  ;% rtB.neow0ggyvd
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 257;
	
	  ;% rtB.oi2jfcurfm
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 258;
	
	  ;% rtB.kdsjhcimkb
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 262;
	
	  ;% rtB.mmtghsbk5w
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 266;
	
	  ;% rtB.cqr0wtwuy4
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 270;
	
	  ;% rtB.dwr0nxvsbj
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 274;
	
	  ;% rtB.edkd4wserg
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 278;
	
	  ;% rtB.g0ribq2fff
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 287;
	
	  ;% rtB.j5gqirfivu
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 288;
	
	  ;% rtB.bezsqifqzd
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 292;
	
	  ;% rtB.ovfjzuhpy1
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 296;
	
	  ;% rtB.got3v1adxi
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 300;
	
	  ;% rtB.dgpujci0nh
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 304;
	
	  ;% rtB.krwjqqdwhs
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 308;
	
	  ;% rtB.bhsz3zdcal
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 317;
	
	  ;% rtB.ijej1daezt
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 318;
	
	  ;% rtB.cg0peil0nn
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 322;
	
	  ;% rtB.cjuzvphzfa
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 323;
	
	  ;% rtB.hqhclugji4
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 324;
	
	  ;% rtB.bve50u2tic
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 325;
	
	  ;% rtB.ezre3gedwd
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 326;
	
	  ;% rtB.bf4kcmzwgq
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 327;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 83;
      section.data(83)  = dumData; %prealloc
      
	  ;% rtDW.pw2pe5xudt
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.osuwpyfhhy
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.n1egvt1ecq
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.fxsfevo34c
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.n0cpdtot23
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.dhnlnnkmax
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.g55yrwtthh
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.kzdsnvl0ni
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.e5pyhcmzqf
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% rtDW.nttssxfe10
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtDW.nrfeeblrr2
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 13;
	
	  ;% rtDW.bcq0i32d1x
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% rtDW.iogo3cshur
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 17;
	
	  ;% rtDW.grxbe2l4yb
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 19;
	
	  ;% rtDW.kdprvszesk
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 21;
	
	  ;% rtDW.oi5gacvc4f
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 23;
	
	  ;% rtDW.mxa34oudwo
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 25;
	
	  ;% rtDW.onw2qwsiq3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 27;
	
	  ;% rtDW.cmhkhckkbw
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 29;
	
	  ;% rtDW.mbaklywx2p
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 31;
	
	  ;% rtDW.ceopzbvdcs
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 33;
	
	  ;% rtDW.deyxx53lrn
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 35;
	
	  ;% rtDW.n5ciem0fnx
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 37;
	
	  ;% rtDW.mdu2prkicz
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 39;
	
	  ;% rtDW.lzyv2sl2tx
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 41;
	
	  ;% rtDW.ohsmzxhpuz
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 43;
	
	  ;% rtDW.f2lssqn4ys
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 45;
	
	  ;% rtDW.kt415tdana
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 47;
	
	  ;% rtDW.bkypudi3a1
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 49;
	
	  ;% rtDW.enulsbgyxv
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 51;
	
	  ;% rtDW.owkmmn2z4e
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 53;
	
	  ;% rtDW.lnedb1enyu
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 55;
	
	  ;% rtDW.gjf2vc4lik
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 57;
	
	  ;% rtDW.ghhq4q11uc
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 59;
	
	  ;% rtDW.iir45l3sdw
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 61;
	
	  ;% rtDW.n5l2mrc3v5
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 63;
	
	  ;% rtDW.phevtdietv
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 65;
	
	  ;% rtDW.hrcshd2jnu
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 67;
	
	  ;% rtDW.gxur1jxjle
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 69;
	
	  ;% rtDW.fdxk5h5nfb
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 71;
	
	  ;% rtDW.mompnqx50t
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 73;
	
	  ;% rtDW.nvsr3bfete
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 74;
	
	  ;% rtDW.il1m24s12p
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 75;
	
	  ;% rtDW.dkqlehltbl
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 76;
	
	  ;% rtDW.kzugk1exec
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 77;
	
	  ;% rtDW.girpkbb0k4
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 78;
	
	  ;% rtDW.o1zzawxzxl
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 79;
	
	  ;% rtDW.hf5ayypcbu
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 80;
	
	  ;% rtDW.pc3l0jaikj
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 81;
	
	  ;% rtDW.od5nlggen3
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 82;
	
	  ;% rtDW.h5kjdlwr41
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 83;
	
	  ;% rtDW.moyjmke4l3
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 84;
	
	  ;% rtDW.ghph52rdce
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 85;
	
	  ;% rtDW.lagmo53nka
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 86;
	
	  ;% rtDW.cnn05julux
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 87;
	
	  ;% rtDW.cwizofgkej
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 88;
	
	  ;% rtDW.ifix50azhp
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 89;
	
	  ;% rtDW.ksz3qgvme2
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 90;
	
	  ;% rtDW.ahdgarqwel
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 91;
	
	  ;% rtDW.dc2k3ryr1h
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 92;
	
	  ;% rtDW.noevtlpdnr
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 93;
	
	  ;% rtDW.mnro1vxwzd
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 94;
	
	  ;% rtDW.lsnzpaafr0
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 95;
	
	  ;% rtDW.jea0fzolcb
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 96;
	
	  ;% rtDW.kecuqjxdts
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 97;
	
	  ;% rtDW.iagl52grv4
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 98;
	
	  ;% rtDW.oltxmhvdjk
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 99;
	
	  ;% rtDW.btgoxpvg4h
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 100;
	
	  ;% rtDW.opadpf4fq0
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 101;
	
	  ;% rtDW.nbytpsj5tm
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 102;
	
	  ;% rtDW.gzyqtgku3f
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 103;
	
	  ;% rtDW.pw3owok3vx
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 104;
	
	  ;% rtDW.gluzokmfs1
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 105;
	
	  ;% rtDW.fcg5fdf0oq
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 106;
	
	  ;% rtDW.bzynygth0l
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 107;
	
	  ;% rtDW.br0nvfzzdo
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 108;
	
	  ;% rtDW.mgn4qmeh1w
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 109;
	
	  ;% rtDW.oogtzxflgo
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 110;
	
	  ;% rtDW.lqkmp55gjx
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 111;
	
	  ;% rtDW.fhsxv1yddz
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 112;
	
	  ;% rtDW.pf5wglytiw
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 113;
	
	  ;% rtDW.cwd4sm1def
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 114;
	
	  ;% rtDW.j1rgpnrnqp
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 115;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 118;
      section.data(118)  = dumData; %prealloc
      
	  ;% rtDW.bxxdhn0h2f
	  section.data(1).logicalSrcIdx = 83;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.mkeckqut4f
	  section.data(2).logicalSrcIdx = 84;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.maabazmrfg
	  section.data(3).logicalSrcIdx = 85;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.e3tb1nphvp
	  section.data(4).logicalSrcIdx = 86;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ke13cdwtxf
	  section.data(5).logicalSrcIdx = 87;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.pbavcelntb
	  section.data(6).logicalSrcIdx = 88;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.jgihp3vmhr
	  section.data(7).logicalSrcIdx = 89;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.en1uoclqpn
	  section.data(8).logicalSrcIdx = 90;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.bfh4whyigp
	  section.data(9).logicalSrcIdx = 91;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.hugdnb4xw2
	  section.data(10).logicalSrcIdx = 92;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.fkhju0d3rl.AQHandles
	  section.data(11).logicalSrcIdx = 93;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.nbjxrunoh4.AQHandles
	  section.data(12).logicalSrcIdx = 94;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.ox2wjis5ak.AQHandles
	  section.data(13).logicalSrcIdx = 95;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.avhnfypyzw.AQHandles
	  section.data(14).logicalSrcIdx = 96;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.h5ig2mnnp5.AQHandles
	  section.data(15).logicalSrcIdx = 97;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.ju0hwcip3s.AQHandles
	  section.data(16).logicalSrcIdx = 98;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.h1wvgvd1h4.AQHandles
	  section.data(17).logicalSrcIdx = 99;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.dcbtcmf10i.AQHandles
	  section.data(18).logicalSrcIdx = 100;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.jvokyr3vc0.AQHandles
	  section.data(19).logicalSrcIdx = 101;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.gvul0tg30e.AQHandles
	  section.data(20).logicalSrcIdx = 102;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.pluidmihey.AQHandles
	  section.data(21).logicalSrcIdx = 103;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.nqajuamynq.AQHandles
	  section.data(22).logicalSrcIdx = 104;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.dkygoqftlz.AQHandles
	  section.data(23).logicalSrcIdx = 105;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.d4ovmgffgs.AQHandles
	  section.data(24).logicalSrcIdx = 106;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.bj5lql4lou.AQHandles
	  section.data(25).logicalSrcIdx = 107;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.ixg02n0kht.AQHandles
	  section.data(26).logicalSrcIdx = 108;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.akh35vbfzy.AQHandles
	  section.data(27).logicalSrcIdx = 109;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.c2qb0n32ss.AQHandles
	  section.data(28).logicalSrcIdx = 110;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.bx5yrpmeoz.AQHandles
	  section.data(29).logicalSrcIdx = 111;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.oyj5nltrtm.AQHandles
	  section.data(30).logicalSrcIdx = 112;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.l1xqkb0uuj.AQHandles
	  section.data(31).logicalSrcIdx = 113;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.cqsrogmetz.AQHandles
	  section.data(32).logicalSrcIdx = 114;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.nuk5ajouhh.AQHandles
	  section.data(33).logicalSrcIdx = 115;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.difeoh0o3t.AQHandles
	  section.data(34).logicalSrcIdx = 116;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.ijvorwciil.AQHandles
	  section.data(35).logicalSrcIdx = 117;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.ewswq3ixhs.AQHandles
	  section.data(36).logicalSrcIdx = 118;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.pd5b5eork3.AQHandles
	  section.data(37).logicalSrcIdx = 119;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.lxuytvgznq.AQHandles
	  section.data(38).logicalSrcIdx = 120;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.crkalficod.AQHandles
	  section.data(39).logicalSrcIdx = 121;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.ckmmj1b1a4.AQHandles
	  section.data(40).logicalSrcIdx = 122;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.ejwlgw0b0w.AQHandles
	  section.data(41).logicalSrcIdx = 123;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.lkmtjgr4pk.AQHandles
	  section.data(42).logicalSrcIdx = 124;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.doxequ5ptr.AQHandles
	  section.data(43).logicalSrcIdx = 125;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.isfan0gc4x.AQHandles
	  section.data(44).logicalSrcIdx = 126;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.bhw5fpwwrv.AQHandles
	  section.data(45).logicalSrcIdx = 127;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.ffbfzmbeso.AQHandles
	  section.data(46).logicalSrcIdx = 128;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.bdep3qr3ra.AQHandles
	  section.data(47).logicalSrcIdx = 129;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.p14ax2esvj.AQHandles
	  section.data(48).logicalSrcIdx = 130;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtDW.d0f32oeoza.AQHandles
	  section.data(49).logicalSrcIdx = 131;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtDW.dksd5f0dzc.AQHandles
	  section.data(50).logicalSrcIdx = 132;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtDW.amkx3ztxsb.AQHandles
	  section.data(51).logicalSrcIdx = 133;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtDW.lc00gioize.AQHandles
	  section.data(52).logicalSrcIdx = 134;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtDW.ld2f3yh3ph.AQHandles
	  section.data(53).logicalSrcIdx = 135;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtDW.gio3iy02hl.AQHandles
	  section.data(54).logicalSrcIdx = 136;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtDW.mkxd2pc5z0.AQHandles
	  section.data(55).logicalSrcIdx = 137;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtDW.cc5bqxzmbs.AQHandles
	  section.data(56).logicalSrcIdx = 138;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtDW.iyliuua3m1.AQHandles
	  section.data(57).logicalSrcIdx = 139;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtDW.k4edalu3p2.AQHandles
	  section.data(58).logicalSrcIdx = 140;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtDW.p3qsy4ac3i
	  section.data(59).logicalSrcIdx = 141;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtDW.b2ulm0qurb
	  section.data(60).logicalSrcIdx = 142;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtDW.aoztfxt3k3
	  section.data(61).logicalSrcIdx = 143;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtDW.lrd5jpm3xr
	  section.data(62).logicalSrcIdx = 144;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtDW.prmb43b2lg
	  section.data(63).logicalSrcIdx = 145;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtDW.nl02lte1sn
	  section.data(64).logicalSrcIdx = 146;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtDW.d4hhejeuln
	  section.data(65).logicalSrcIdx = 147;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtDW.m54odtvz3u
	  section.data(66).logicalSrcIdx = 148;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtDW.ocfvci0ogv
	  section.data(67).logicalSrcIdx = 149;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtDW.p03omiha1p
	  section.data(68).logicalSrcIdx = 150;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtDW.mtcob204rl
	  section.data(69).logicalSrcIdx = 151;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtDW.ir5o5sem4f
	  section.data(70).logicalSrcIdx = 152;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtDW.jspmsolpsx
	  section.data(71).logicalSrcIdx = 153;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtDW.dp5qzyrocu
	  section.data(72).logicalSrcIdx = 154;
	  section.data(72).dtTransOffset = 71;
	
	  ;% rtDW.nwqr5wmare
	  section.data(73).logicalSrcIdx = 155;
	  section.data(73).dtTransOffset = 72;
	
	  ;% rtDW.alkigtb3eo
	  section.data(74).logicalSrcIdx = 156;
	  section.data(74).dtTransOffset = 73;
	
	  ;% rtDW.jedewwpx2b
	  section.data(75).logicalSrcIdx = 157;
	  section.data(75).dtTransOffset = 74;
	
	  ;% rtDW.oxiddlwl0e
	  section.data(76).logicalSrcIdx = 158;
	  section.data(76).dtTransOffset = 75;
	
	  ;% rtDW.ofxirgtbli
	  section.data(77).logicalSrcIdx = 159;
	  section.data(77).dtTransOffset = 76;
	
	  ;% rtDW.gsusnlk2qm
	  section.data(78).logicalSrcIdx = 160;
	  section.data(78).dtTransOffset = 77;
	
	  ;% rtDW.esgd45ifwg
	  section.data(79).logicalSrcIdx = 161;
	  section.data(79).dtTransOffset = 78;
	
	  ;% rtDW.mvbznvevad
	  section.data(80).logicalSrcIdx = 162;
	  section.data(80).dtTransOffset = 79;
	
	  ;% rtDW.j0ckgxpmx5
	  section.data(81).logicalSrcIdx = 163;
	  section.data(81).dtTransOffset = 80;
	
	  ;% rtDW.dsdhwjplhg
	  section.data(82).logicalSrcIdx = 164;
	  section.data(82).dtTransOffset = 81;
	
	  ;% rtDW.b3bjh45ijd
	  section.data(83).logicalSrcIdx = 165;
	  section.data(83).dtTransOffset = 82;
	
	  ;% rtDW.knwl0j21ex
	  section.data(84).logicalSrcIdx = 166;
	  section.data(84).dtTransOffset = 83;
	
	  ;% rtDW.lxi10debkw
	  section.data(85).logicalSrcIdx = 167;
	  section.data(85).dtTransOffset = 84;
	
	  ;% rtDW.o0t2zajdar
	  section.data(86).logicalSrcIdx = 168;
	  section.data(86).dtTransOffset = 85;
	
	  ;% rtDW.f53d4xlhf3
	  section.data(87).logicalSrcIdx = 169;
	  section.data(87).dtTransOffset = 86;
	
	  ;% rtDW.i1mfiref1s
	  section.data(88).logicalSrcIdx = 170;
	  section.data(88).dtTransOffset = 87;
	
	  ;% rtDW.hsnnp23xx3
	  section.data(89).logicalSrcIdx = 171;
	  section.data(89).dtTransOffset = 88;
	
	  ;% rtDW.ehoo31suuw
	  section.data(90).logicalSrcIdx = 172;
	  section.data(90).dtTransOffset = 89;
	
	  ;% rtDW.eqaph1hnr4
	  section.data(91).logicalSrcIdx = 173;
	  section.data(91).dtTransOffset = 90;
	
	  ;% rtDW.lmypu1lxkh
	  section.data(92).logicalSrcIdx = 174;
	  section.data(92).dtTransOffset = 91;
	
	  ;% rtDW.a0rjofmfib
	  section.data(93).logicalSrcIdx = 175;
	  section.data(93).dtTransOffset = 92;
	
	  ;% rtDW.ltacaubgtq
	  section.data(94).logicalSrcIdx = 176;
	  section.data(94).dtTransOffset = 93;
	
	  ;% rtDW.ojep3hp3tz
	  section.data(95).logicalSrcIdx = 177;
	  section.data(95).dtTransOffset = 94;
	
	  ;% rtDW.oofcw1u5oj
	  section.data(96).logicalSrcIdx = 178;
	  section.data(96).dtTransOffset = 95;
	
	  ;% rtDW.f15fux53ym
	  section.data(97).logicalSrcIdx = 179;
	  section.data(97).dtTransOffset = 96;
	
	  ;% rtDW.je3k2frne1
	  section.data(98).logicalSrcIdx = 180;
	  section.data(98).dtTransOffset = 97;
	
	  ;% rtDW.pfajoqccjj
	  section.data(99).logicalSrcIdx = 181;
	  section.data(99).dtTransOffset = 98;
	
	  ;% rtDW.hp2ndf5vf3
	  section.data(100).logicalSrcIdx = 182;
	  section.data(100).dtTransOffset = 99;
	
	  ;% rtDW.cq5hsabgd5
	  section.data(101).logicalSrcIdx = 183;
	  section.data(101).dtTransOffset = 100;
	
	  ;% rtDW.duaadggefk
	  section.data(102).logicalSrcIdx = 184;
	  section.data(102).dtTransOffset = 101;
	
	  ;% rtDW.a5s5o05xbg
	  section.data(103).logicalSrcIdx = 185;
	  section.data(103).dtTransOffset = 102;
	
	  ;% rtDW.otxi1ujsu5
	  section.data(104).logicalSrcIdx = 186;
	  section.data(104).dtTransOffset = 103;
	
	  ;% rtDW.onsxqbd1pr
	  section.data(105).logicalSrcIdx = 187;
	  section.data(105).dtTransOffset = 104;
	
	  ;% rtDW.mb03qpxir0
	  section.data(106).logicalSrcIdx = 188;
	  section.data(106).dtTransOffset = 105;
	
	  ;% rtDW.gyuopvy42y
	  section.data(107).logicalSrcIdx = 189;
	  section.data(107).dtTransOffset = 106;
	
	  ;% rtDW.lt2lmcwoap
	  section.data(108).logicalSrcIdx = 190;
	  section.data(108).dtTransOffset = 107;
	
	  ;% rtDW.o4y0j0g15n
	  section.data(109).logicalSrcIdx = 191;
	  section.data(109).dtTransOffset = 108;
	
	  ;% rtDW.onerx1yfb2
	  section.data(110).logicalSrcIdx = 192;
	  section.data(110).dtTransOffset = 109;
	
	  ;% rtDW.geu4q0xuqi
	  section.data(111).logicalSrcIdx = 193;
	  section.data(111).dtTransOffset = 110;
	
	  ;% rtDW.e32c0o14uh
	  section.data(112).logicalSrcIdx = 194;
	  section.data(112).dtTransOffset = 111;
	
	  ;% rtDW.h5gbvyn1wb
	  section.data(113).logicalSrcIdx = 195;
	  section.data(113).dtTransOffset = 112;
	
	  ;% rtDW.bdnu2nsumd
	  section.data(114).logicalSrcIdx = 196;
	  section.data(114).dtTransOffset = 113;
	
	  ;% rtDW.gpyxtothik
	  section.data(115).logicalSrcIdx = 197;
	  section.data(115).dtTransOffset = 114;
	
	  ;% rtDW.loqycrqsns
	  section.data(116).logicalSrcIdx = 198;
	  section.data(116).dtTransOffset = 115;
	
	  ;% rtDW.ixblyekg32
	  section.data(117).logicalSrcIdx = 199;
	  section.data(117).dtTransOffset = 116;
	
	  ;% rtDW.fykj1pdl3o
	  section.data(118).logicalSrcIdx = 200;
	  section.data(118).dtTransOffset = 117;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% rtDW.izcotr23dr
	  section.data(1).logicalSrcIdx = 201;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.medbouh1bz
	  section.data(2).logicalSrcIdx = 202;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cjrqthhfyx
	  section.data(3).logicalSrcIdx = 203;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.kzxyadr5jp
	  section.data(4).logicalSrcIdx = 204;
	  section.data(4).dtTransOffset = 7;
	
	  ;% rtDW.aha3ttluaz
	  section.data(5).logicalSrcIdx = 205;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtDW.iyrt2vmhf4
	  section.data(6).logicalSrcIdx = 206;
	  section.data(6).dtTransOffset = 18;
	
	  ;% rtDW.huqf5ahxl5
	  section.data(7).logicalSrcIdx = 207;
	  section.data(7).dtTransOffset = 19;
	
	  ;% rtDW.o0gg5vcyvl
	  section.data(8).logicalSrcIdx = 208;
	  section.data(8).dtTransOffset = 24;
	
	  ;% rtDW.eofsatdfl4
	  section.data(9).logicalSrcIdx = 209;
	  section.data(9).dtTransOffset = 25;
	
	  ;% rtDW.h4lvhpzsjg
	  section.data(10).logicalSrcIdx = 210;
	  section.data(10).dtTransOffset = 30;
	
	  ;% rtDW.l0sp34a5vt
	  section.data(11).logicalSrcIdx = 211;
	  section.data(11).dtTransOffset = 31;
	
	  ;% rtDW.jo3q0ft4ok
	  section.data(12).logicalSrcIdx = 212;
	  section.data(12).dtTransOffset = 36;
	
	  ;% rtDW.iwcrwapmy1
	  section.data(13).logicalSrcIdx = 213;
	  section.data(13).dtTransOffset = 37;
	
	  ;% rtDW.owfi3fj2gy
	  section.data(14).logicalSrcIdx = 214;
	  section.data(14).dtTransOffset = 42;
	
	  ;% rtDW.axbmdyzm4s
	  section.data(15).logicalSrcIdx = 215;
	  section.data(15).dtTransOffset = 43;
	
	  ;% rtDW.nqfxnpzhb1
	  section.data(16).logicalSrcIdx = 216;
	  section.data(16).dtTransOffset = 44;
	
	  ;% rtDW.nk2cgiuqq4
	  section.data(17).logicalSrcIdx = 217;
	  section.data(17).dtTransOffset = 45;
	
	  ;% rtDW.bibznrlmwf
	  section.data(18).logicalSrcIdx = 218;
	  section.data(18).dtTransOffset = 46;
	
	  ;% rtDW.dd4ef3do3g
	  section.data(19).logicalSrcIdx = 219;
	  section.data(19).dtTransOffset = 47;
	
	  ;% rtDW.ji0h4d4wet
	  section.data(20).logicalSrcIdx = 220;
	  section.data(20).dtTransOffset = 48;
	
	  ;% rtDW.c4g1psscp2
	  section.data(21).logicalSrcIdx = 221;
	  section.data(21).dtTransOffset = 49;
	
	  ;% rtDW.m1ysjubrvj
	  section.data(22).logicalSrcIdx = 222;
	  section.data(22).dtTransOffset = 50;
	
	  ;% rtDW.hoht0lvf35
	  section.data(23).logicalSrcIdx = 223;
	  section.data(23).dtTransOffset = 51;
	
	  ;% rtDW.a30y20nurj
	  section.data(24).logicalSrcIdx = 224;
	  section.data(24).dtTransOffset = 52;
	
	  ;% rtDW.genkbxgaug
	  section.data(25).logicalSrcIdx = 225;
	  section.data(25).dtTransOffset = 53;
	
	  ;% rtDW.k2xrlwkxds
	  section.data(26).logicalSrcIdx = 226;
	  section.data(26).dtTransOffset = 54;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.a2nd5ads1x
	  section.data(1).logicalSrcIdx = 227;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nimo41obeb
	  section.data(2).logicalSrcIdx = 228;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.lyzikhn1qu
	  section.data(3).logicalSrcIdx = 229;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.okzl3d4upr
	  section.data(4).logicalSrcIdx = 230;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.mnfh0gsrkg
	  section.data(5).logicalSrcIdx = 231;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.oggkregolh
	  section.data(6).logicalSrcIdx = 232;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtDW.md2scv0jlp
	  section.data(1).logicalSrcIdx = 233;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.crekcq1kpz
	  section.data(2).logicalSrcIdx = 234;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cuh4s0nlhu
	  section.data(3).logicalSrcIdx = 235;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.impojcl0nu
	  section.data(4).logicalSrcIdx = 236;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.hpkzoxodns
	  section.data(5).logicalSrcIdx = 237;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.fnxjrk32mp
	  section.data(6).logicalSrcIdx = 238;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.k0rkpkziyh
	  section.data(7).logicalSrcIdx = 239;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.dulztvghtj
	  section.data(8).logicalSrcIdx = 240;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.gk2a44vhme
	  section.data(9).logicalSrcIdx = 241;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.dnnhghwnmd
	  section.data(10).logicalSrcIdx = 242;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.m1abnhxlw1
	  section.data(11).logicalSrcIdx = 243;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.l2dh0gucv3
	  section.data(12).logicalSrcIdx = 244;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.aich5dsmmb
	  section.data(13).logicalSrcIdx = 245;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.djrwqz3mqp
	  section.data(14).logicalSrcIdx = 246;
	  section.data(14).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3631493749;
  targMap.checksum1 = 2582222913;
  targMap.checksum2 = 3759986011;
  targMap.checksum3 = 1457407973;

