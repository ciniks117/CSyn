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
      
	  ;% rtB.krcxplu3eq
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.dlgzaqgmhc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 29;
	
	  ;% rtB.h124qx1phd
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 41;
	
	  ;% rtB.kyvfepmlch
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 42;
	
	  ;% rtB.a4h4awrudh
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 43;
	
	  ;% rtB.d4qhj2qvox
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 44;
	
	  ;% rtB.ff0xl0o0on
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 45;
	
	  ;% rtB.knyvewjxd3
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 46;
	
	  ;% rtB.kzvnckcdot
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 47;
	
	  ;% rtB.k0xhr3lmo2
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 48;
	
	  ;% rtB.lnddeflvkv
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 49;
	
	  ;% rtB.cicsqsen0r
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 50;
	
	  ;% rtB.ncmezuqmmk
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 51;
	
	  ;% rtB.fllne2ej2o
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 52;
	
	  ;% rtB.isqdcvco3p
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 53;
	
	  ;% rtB.mmfxcblztm
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 54;
	
	  ;% rtB.fnwiftiak2
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 55;
	
	  ;% rtB.fnevqel4sp
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 56;
	
	  ;% rtB.cxcsyd5d1c
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 57;
	
	  ;% rtB.jndeowmqg5
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 58;
	
	  ;% rtB.fwfn0fe1sh
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 59;
	
	  ;% rtB.bs4ylghjgz
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 60;
	
	  ;% rtB.aidyoivzbo
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 61;
	
	  ;% rtB.daldi2mwjh
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 62;
	
	  ;% rtB.atgk44qqef
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 63;
	
	  ;% rtB.kfkj44nk3p
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 64;
	
	  ;% rtB.cw0yilgxki
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 65;
	
	  ;% rtB.gc0ufezm40
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 66;
	
	  ;% rtB.gaax23jywc
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 67;
	
	  ;% rtB.php12pluqb
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 68;
	
	  ;% rtB.hqug0gb1in
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 69;
	
	  ;% rtB.ghuv4nrpe3
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 70;
	
	  ;% rtB.ddsxiam50k
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 71;
	
	  ;% rtB.h0ga0ulw4o
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 72;
	
	  ;% rtB.otiyf2ict4
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 73;
	
	  ;% rtB.jvcsgidigm
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 74;
	
	  ;% rtB.grmrgx0ato
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 75;
	
	  ;% rtB.jihi4nct2b
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 76;
	
	  ;% rtB.i3zdseytux
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 77;
	
	  ;% rtB.pen2tlbuc2
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 78;
	
	  ;% rtB.etclrumkes
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 79;
	
	  ;% rtB.ps1m5ri5j1
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 80;
	
	  ;% rtB.ejgueusult
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 81;
	
	  ;% rtB.ljrewaf2lo
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 82;
	
	  ;% rtB.f2w1fqz5qt
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 83;
	
	  ;% rtB.iqi5uemowu
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 84;
	
	  ;% rtB.ebkbzp4ifa
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 85;
	
	  ;% rtB.cd0jqvz3v1
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 86;
	
	  ;% rtB.oiq4fammfn
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 87;
	
	  ;% rtB.nji1qqccll
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 88;
	
	  ;% rtB.aqydko43rs
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 89;
	
	  ;% rtB.a52ganzccv
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 90;
	
	  ;% rtB.pwffmskdll
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 91;
	
	  ;% rtB.iz0c33tt3q
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 92;
	
	  ;% rtB.ltooszp1wf
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 93;
	
	  ;% rtB.jv05vc0wdl
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 94;
	
	  ;% rtB.fzulu4txkm
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 95;
	
	  ;% rtB.ngc2vhkcvx
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 96;
	
	  ;% rtB.f5npikm4p2
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 97;
	
	  ;% rtB.nyfblsqmlt
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 98;
	
	  ;% rtB.che1xa0shi
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 99;
	
	  ;% rtB.c1p1nl5zha
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 100;
	
	  ;% rtB.cvhnksc212
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 101;
	
	  ;% rtB.oavnyz4xex
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 102;
	
	  ;% rtB.lqbtlsqcxh
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 103;
	
	  ;% rtB.nqyjzjhqbz
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 104;
	
	  ;% rtB.jgvdzme2mo
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 105;
	
	  ;% rtB.okyvttk103
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 106;
	
	  ;% rtB.puv1ifcb43
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 107;
	
	  ;% rtB.ctvpv2ept2
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 108;
	
	  ;% rtB.hgdvmrnotw
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 109;
	
	  ;% rtB.eq4gdqwc1e
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 110;
	
	  ;% rtB.amm0am250j
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 111;
	
	  ;% rtB.apuphxyrha
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 112;
	
	  ;% rtB.b11x1b5dds
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 113;
	
	  ;% rtB.kmphhlf0c0
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 114;
	
	  ;% rtB.jkyfhps0ke
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 115;
	
	  ;% rtB.f4mz34xjdw
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 116;
	
	  ;% rtB.b0nvbtvute
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 117;
	
	  ;% rtB.kwvtqc24nn
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 118;
	
	  ;% rtB.bccvxfaqok
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 119;
	
	  ;% rtB.i1zzbavhbp
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 120;
	
	  ;% rtB.lgamsddxfw
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 121;
	
	  ;% rtB.mmt4jv2djd
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 125;
	
	  ;% rtB.pzylr3xzgl
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 129;
	
	  ;% rtB.os31fqwjpr
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 133;
	
	  ;% rtB.myphwxfnds
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 137;
	
	  ;% rtB.gq0aoqqtfi
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 146;
	
	  ;% rtB.gsxwzsrgs3
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 147;
	
	  ;% rtB.amckjsk01h
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 151;
	
	  ;% rtB.cxyv2au2fy
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 155;
	
	  ;% rtB.b0pjn0qe1a
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 159;
	
	  ;% rtB.l5pujcrulu
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 163;
	
	  ;% rtB.b2vobw2amc
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 167;
	
	  ;% rtB.c4ncjpj4p3
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 171;
	
	  ;% rtB.hbxx3xyytn
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 175;
	
	  ;% rtB.puxn2q3jes
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 179;
	
	  ;% rtB.fbkymqjw15
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 197;
	
	  ;% rtB.o1ldcw3ssi
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 198;
	
	  ;% rtB.n51jz3r5ms
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 202;
	
	  ;% rtB.nedkaormew
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 206;
	
	  ;% rtB.aowtlt2xsx
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 210;
	
	  ;% rtB.fltnebkpfo
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 214;
	
	  ;% rtB.b4ms4hfc5c
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 218;
	
	  ;% rtB.hiiihp2k0u
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 227;
	
	  ;% rtB.ase3lj3apj
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 228;
	
	  ;% rtB.mevfua5fda
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 232;
	
	  ;% rtB.dycz5qe5i2
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 236;
	
	  ;% rtB.ar342mtoyy
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 240;
	
	  ;% rtB.fntgtrllob
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 244;
	
	  ;% rtB.pfaxquxlh0
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 248;
	
	  ;% rtB.no5mc1kht1
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 257;
	
	  ;% rtB.jcohfzsgmt
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 258;
	
	  ;% rtB.ecbwmrxmul
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 262;
	
	  ;% rtB.bkephdao5q
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 266;
	
	  ;% rtB.ptr4jxtzru
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 270;
	
	  ;% rtB.d1bzzxr1py
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 274;
	
	  ;% rtB.mzskvlpl4t
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 278;
	
	  ;% rtB.bml3meflbj
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 287;
	
	  ;% rtB.nwltqugjxl
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 288;
	
	  ;% rtB.nvp0xnvq03
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 292;
	
	  ;% rtB.moqztnnjfy
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 296;
	
	  ;% rtB.e2oog2ldlk
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 300;
	
	  ;% rtB.l3qlly0y24
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 304;
	
	  ;% rtB.mzifsmwue2
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 308;
	
	  ;% rtB.oew42em5vf
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 317;
	
	  ;% rtB.l4n2e5pdle
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 318;
	
	  ;% rtB.gudjnx4gli
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 322;
	
	  ;% rtB.bxxre2130j
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 323;
	
	  ;% rtB.kkv31bku2h
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 324;
	
	  ;% rtB.i1gvwgou24
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 325;
	
	  ;% rtB.kl5k5speeu
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 326;
	
	  ;% rtB.ftcpietbbk
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
      
	  ;% rtDW.gmlwc0qame
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.c1yhchtyrr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.b5meobzewc
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.phjhcjadmq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ea2ghjrony
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.o3hjuvp5p4
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.mfo0m5mdmb
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.aeyyeaotfv
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.pam2hwcmgh
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 9;
	
	  ;% rtDW.moim2kzboo
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtDW.or531t5xhw
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 13;
	
	  ;% rtDW.b5a1f4pnjy
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 15;
	
	  ;% rtDW.npbefpr1fd
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 17;
	
	  ;% rtDW.f3meayyzxo
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 19;
	
	  ;% rtDW.luph5aup2b
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 21;
	
	  ;% rtDW.ckldk5epkp
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 23;
	
	  ;% rtDW.d1vbkut3et
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 25;
	
	  ;% rtDW.at2tnnhgl4
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 27;
	
	  ;% rtDW.csi3mq51hx
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 29;
	
	  ;% rtDW.kbbzzmma32
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 31;
	
	  ;% rtDW.dfmbkkblmm
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 33;
	
	  ;% rtDW.islrfvewdp
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 35;
	
	  ;% rtDW.auu2gmyygn
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 37;
	
	  ;% rtDW.mwifnouukc
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 39;
	
	  ;% rtDW.m4zzd3ud3d
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 41;
	
	  ;% rtDW.algewdgvo3
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 43;
	
	  ;% rtDW.b2yskfuawk
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 45;
	
	  ;% rtDW.kr1ntmuvlq
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 47;
	
	  ;% rtDW.ljqwv2uj1y
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 49;
	
	  ;% rtDW.ogke1gvqz5
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 51;
	
	  ;% rtDW.hf340lsch3
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 53;
	
	  ;% rtDW.oxhptxmnuv
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 55;
	
	  ;% rtDW.pncbg0ft22
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 57;
	
	  ;% rtDW.pjngd0vx0n
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 59;
	
	  ;% rtDW.gpqot4g4wt
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 61;
	
	  ;% rtDW.krzcgnqi1u
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 63;
	
	  ;% rtDW.ixpnfrhln1
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 65;
	
	  ;% rtDW.jmjufyutkh
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 67;
	
	  ;% rtDW.mfkpdyx02s
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 69;
	
	  ;% rtDW.on2e1zo2kz
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 71;
	
	  ;% rtDW.kqufqx0tu5
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 73;
	
	  ;% rtDW.el1lpuw5zq
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 74;
	
	  ;% rtDW.ez5xo4m5re
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 75;
	
	  ;% rtDW.gawt3eqo1w
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 76;
	
	  ;% rtDW.btzzvjv32s
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 77;
	
	  ;% rtDW.a4ncrv0q4x
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 78;
	
	  ;% rtDW.cujerjqnlc
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 79;
	
	  ;% rtDW.etc2elb4q0
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 80;
	
	  ;% rtDW.ix5mp3senf
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 81;
	
	  ;% rtDW.ka3q1qehwh
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 82;
	
	  ;% rtDW.iyz54pfzbq
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 83;
	
	  ;% rtDW.lhens4aog5
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 84;
	
	  ;% rtDW.njuj213ft1
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 85;
	
	  ;% rtDW.hgs1s5cbrg
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 86;
	
	  ;% rtDW.lzapf4uzyf
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 87;
	
	  ;% rtDW.jnseaklp1y
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 88;
	
	  ;% rtDW.f4jjebddb5
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 89;
	
	  ;% rtDW.lwhxhj0cgm
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 90;
	
	  ;% rtDW.ospktyrmu3
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 91;
	
	  ;% rtDW.jz4witzby0
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 92;
	
	  ;% rtDW.ku4umw2hdw
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 93;
	
	  ;% rtDW.eh4fvnrcpe
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 94;
	
	  ;% rtDW.lhvgthtwgl
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 95;
	
	  ;% rtDW.hahir0y4uj
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 96;
	
	  ;% rtDW.hqk0upav5k
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 97;
	
	  ;% rtDW.pneozxjlkn
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 98;
	
	  ;% rtDW.oep4q2a05l
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 99;
	
	  ;% rtDW.adymbo4t3h
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 100;
	
	  ;% rtDW.ir1daw3liz
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 101;
	
	  ;% rtDW.axlsmtzflm
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 102;
	
	  ;% rtDW.bhpq141ewe
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 103;
	
	  ;% rtDW.lz0ilv4wwe
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 104;
	
	  ;% rtDW.bmklrdesul
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 105;
	
	  ;% rtDW.dxsqzsmbnr
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 106;
	
	  ;% rtDW.itz0oanntq
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 107;
	
	  ;% rtDW.e5jo5xbtad
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 108;
	
	  ;% rtDW.dwtgertbzd
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 109;
	
	  ;% rtDW.pyaa30hu1l
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 110;
	
	  ;% rtDW.dqh2udag13
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 111;
	
	  ;% rtDW.ei5jzybccv
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 112;
	
	  ;% rtDW.csbbxlyjz3
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 113;
	
	  ;% rtDW.lwufoxa2ik
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 114;
	
	  ;% rtDW.bk0lalbjqp
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 115;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 118;
      section.data(118)  = dumData; %prealloc
      
	  ;% rtDW.gykjnl45ou
	  section.data(1).logicalSrcIdx = 83;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nm1pedohdu
	  section.data(2).logicalSrcIdx = 84;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.i2d1fpfnkr
	  section.data(3).logicalSrcIdx = 85;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.do23rw15bt
	  section.data(4).logicalSrcIdx = 86;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.c3cajcxxop
	  section.data(5).logicalSrcIdx = 87;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.nkfuqn44a2
	  section.data(6).logicalSrcIdx = 88;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.g1iq3vbocm
	  section.data(7).logicalSrcIdx = 89;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.al2khf0zpj
	  section.data(8).logicalSrcIdx = 90;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.iursawrbar
	  section.data(9).logicalSrcIdx = 91;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.ngfigwji41
	  section.data(10).logicalSrcIdx = 92;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.apdjv21fm3.AQHandles
	  section.data(11).logicalSrcIdx = 93;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.mh2lzbnvyc.AQHandles
	  section.data(12).logicalSrcIdx = 94;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.kjrs0t1nm4.AQHandles
	  section.data(13).logicalSrcIdx = 95;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.dautlnn30u.AQHandles
	  section.data(14).logicalSrcIdx = 96;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.kvbjdddl4n.AQHandles
	  section.data(15).logicalSrcIdx = 97;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.ava0ojyjuv.AQHandles
	  section.data(16).logicalSrcIdx = 98;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.ps3yjeqnel.AQHandles
	  section.data(17).logicalSrcIdx = 99;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.gl0wpxzu2q.AQHandles
	  section.data(18).logicalSrcIdx = 100;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.oicd0ngvav.AQHandles
	  section.data(19).logicalSrcIdx = 101;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.ptm21fclna.AQHandles
	  section.data(20).logicalSrcIdx = 102;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.oqhwzcjbbx.AQHandles
	  section.data(21).logicalSrcIdx = 103;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.mkhdp3gdkd.AQHandles
	  section.data(22).logicalSrcIdx = 104;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.e2gcoq4oqe.AQHandles
	  section.data(23).logicalSrcIdx = 105;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.h22loax0ke.AQHandles
	  section.data(24).logicalSrcIdx = 106;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.as0djmc41t.AQHandles
	  section.data(25).logicalSrcIdx = 107;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.ejymxznzxh.AQHandles
	  section.data(26).logicalSrcIdx = 108;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.o1kxnuxpyj.AQHandles
	  section.data(27).logicalSrcIdx = 109;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.bxxgxkrr2c.AQHandles
	  section.data(28).logicalSrcIdx = 110;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.kfd3qrvgfd.AQHandles
	  section.data(29).logicalSrcIdx = 111;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.igwari5mqz.AQHandles
	  section.data(30).logicalSrcIdx = 112;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.ewqrtgdvx2.AQHandles
	  section.data(31).logicalSrcIdx = 113;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.dsgwphpbza.AQHandles
	  section.data(32).logicalSrcIdx = 114;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.aw4efzdd4c.AQHandles
	  section.data(33).logicalSrcIdx = 115;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.be53dny0c5.AQHandles
	  section.data(34).logicalSrcIdx = 116;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.kq3yodl2bt.AQHandles
	  section.data(35).logicalSrcIdx = 117;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.ebjpqr4c4g.AQHandles
	  section.data(36).logicalSrcIdx = 118;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.ptu5jdgl35.AQHandles
	  section.data(37).logicalSrcIdx = 119;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.ilijwxnun0.AQHandles
	  section.data(38).logicalSrcIdx = 120;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.odqw4yty3p.AQHandles
	  section.data(39).logicalSrcIdx = 121;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.kzjcgmt1r3.AQHandles
	  section.data(40).logicalSrcIdx = 122;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.f2efmur0hp.AQHandles
	  section.data(41).logicalSrcIdx = 123;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.mskhnw4qrr.AQHandles
	  section.data(42).logicalSrcIdx = 124;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.d3ef2qdubj.AQHandles
	  section.data(43).logicalSrcIdx = 125;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.dg12hpmswq.AQHandles
	  section.data(44).logicalSrcIdx = 126;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.kx25qhu3r4.AQHandles
	  section.data(45).logicalSrcIdx = 127;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.monl4eukr3.AQHandles
	  section.data(46).logicalSrcIdx = 128;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.ngtywitjou.AQHandles
	  section.data(47).logicalSrcIdx = 129;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.l4k2ljdewv.AQHandles
	  section.data(48).logicalSrcIdx = 130;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtDW.blegl3r340.AQHandles
	  section.data(49).logicalSrcIdx = 131;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtDW.ppjxynpq1c.AQHandles
	  section.data(50).logicalSrcIdx = 132;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtDW.erbnwcwrj1.AQHandles
	  section.data(51).logicalSrcIdx = 133;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtDW.kx4roesdqx.AQHandles
	  section.data(52).logicalSrcIdx = 134;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtDW.ejuuwrge5c.AQHandles
	  section.data(53).logicalSrcIdx = 135;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtDW.mtedhvdhqd.AQHandles
	  section.data(54).logicalSrcIdx = 136;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtDW.jg2vujfrzo.AQHandles
	  section.data(55).logicalSrcIdx = 137;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtDW.g5kyzenj0k.AQHandles
	  section.data(56).logicalSrcIdx = 138;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtDW.larmidhtrj.AQHandles
	  section.data(57).logicalSrcIdx = 139;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtDW.co45xeckac.AQHandles
	  section.data(58).logicalSrcIdx = 140;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtDW.ocpy12p22k
	  section.data(59).logicalSrcIdx = 141;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtDW.hcrcwgbmvq
	  section.data(60).logicalSrcIdx = 142;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtDW.az1yo1muxe
	  section.data(61).logicalSrcIdx = 143;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtDW.fjxbkklw4z
	  section.data(62).logicalSrcIdx = 144;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtDW.bzp4psoihm
	  section.data(63).logicalSrcIdx = 145;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtDW.esa01bvjvm
	  section.data(64).logicalSrcIdx = 146;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtDW.kwq3so20nv
	  section.data(65).logicalSrcIdx = 147;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtDW.dw4pbexevd
	  section.data(66).logicalSrcIdx = 148;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtDW.bnpaeznqz0
	  section.data(67).logicalSrcIdx = 149;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtDW.e5wsaqztdu
	  section.data(68).logicalSrcIdx = 150;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtDW.ajpv151fp2
	  section.data(69).logicalSrcIdx = 151;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtDW.dmsckoggfy
	  section.data(70).logicalSrcIdx = 152;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtDW.bkxjnhwg4q
	  section.data(71).logicalSrcIdx = 153;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtDW.mehrggalcc
	  section.data(72).logicalSrcIdx = 154;
	  section.data(72).dtTransOffset = 71;
	
	  ;% rtDW.pmdtly2tim
	  section.data(73).logicalSrcIdx = 155;
	  section.data(73).dtTransOffset = 72;
	
	  ;% rtDW.kdqcwt3oic
	  section.data(74).logicalSrcIdx = 156;
	  section.data(74).dtTransOffset = 73;
	
	  ;% rtDW.gq1bwlllvx
	  section.data(75).logicalSrcIdx = 157;
	  section.data(75).dtTransOffset = 74;
	
	  ;% rtDW.d110twjzhx
	  section.data(76).logicalSrcIdx = 158;
	  section.data(76).dtTransOffset = 75;
	
	  ;% rtDW.k0pzsmno02
	  section.data(77).logicalSrcIdx = 159;
	  section.data(77).dtTransOffset = 76;
	
	  ;% rtDW.l0tjrmchqd
	  section.data(78).logicalSrcIdx = 160;
	  section.data(78).dtTransOffset = 77;
	
	  ;% rtDW.kcmwywlxl1
	  section.data(79).logicalSrcIdx = 161;
	  section.data(79).dtTransOffset = 78;
	
	  ;% rtDW.pufhjztccr
	  section.data(80).logicalSrcIdx = 162;
	  section.data(80).dtTransOffset = 79;
	
	  ;% rtDW.aqd3u0h4s2
	  section.data(81).logicalSrcIdx = 163;
	  section.data(81).dtTransOffset = 80;
	
	  ;% rtDW.bhfc4c1rg3
	  section.data(82).logicalSrcIdx = 164;
	  section.data(82).dtTransOffset = 81;
	
	  ;% rtDW.kiaglq3vqk
	  section.data(83).logicalSrcIdx = 165;
	  section.data(83).dtTransOffset = 82;
	
	  ;% rtDW.ei3pjfumgv
	  section.data(84).logicalSrcIdx = 166;
	  section.data(84).dtTransOffset = 83;
	
	  ;% rtDW.ny31yfa2vw
	  section.data(85).logicalSrcIdx = 167;
	  section.data(85).dtTransOffset = 84;
	
	  ;% rtDW.mwyq2uplon
	  section.data(86).logicalSrcIdx = 168;
	  section.data(86).dtTransOffset = 85;
	
	  ;% rtDW.hgk3rufgjw
	  section.data(87).logicalSrcIdx = 169;
	  section.data(87).dtTransOffset = 86;
	
	  ;% rtDW.n2i2jdgs4t
	  section.data(88).logicalSrcIdx = 170;
	  section.data(88).dtTransOffset = 87;
	
	  ;% rtDW.ejmmacq22h
	  section.data(89).logicalSrcIdx = 171;
	  section.data(89).dtTransOffset = 88;
	
	  ;% rtDW.hrkrw20ytk
	  section.data(90).logicalSrcIdx = 172;
	  section.data(90).dtTransOffset = 89;
	
	  ;% rtDW.b4ac4nh15p
	  section.data(91).logicalSrcIdx = 173;
	  section.data(91).dtTransOffset = 90;
	
	  ;% rtDW.p1rlw4icxg
	  section.data(92).logicalSrcIdx = 174;
	  section.data(92).dtTransOffset = 91;
	
	  ;% rtDW.iwuex0mfjx
	  section.data(93).logicalSrcIdx = 175;
	  section.data(93).dtTransOffset = 92;
	
	  ;% rtDW.fdwlxsnzv1
	  section.data(94).logicalSrcIdx = 176;
	  section.data(94).dtTransOffset = 93;
	
	  ;% rtDW.mm5rcdx55z
	  section.data(95).logicalSrcIdx = 177;
	  section.data(95).dtTransOffset = 94;
	
	  ;% rtDW.l2qm1h0rd5
	  section.data(96).logicalSrcIdx = 178;
	  section.data(96).dtTransOffset = 95;
	
	  ;% rtDW.ckrv2h1vj2
	  section.data(97).logicalSrcIdx = 179;
	  section.data(97).dtTransOffset = 96;
	
	  ;% rtDW.odfcvqfzvj
	  section.data(98).logicalSrcIdx = 180;
	  section.data(98).dtTransOffset = 97;
	
	  ;% rtDW.mluequoe3f
	  section.data(99).logicalSrcIdx = 181;
	  section.data(99).dtTransOffset = 98;
	
	  ;% rtDW.jtehowy45m
	  section.data(100).logicalSrcIdx = 182;
	  section.data(100).dtTransOffset = 99;
	
	  ;% rtDW.ma153abo0u
	  section.data(101).logicalSrcIdx = 183;
	  section.data(101).dtTransOffset = 100;
	
	  ;% rtDW.octvsy2oca
	  section.data(102).logicalSrcIdx = 184;
	  section.data(102).dtTransOffset = 101;
	
	  ;% rtDW.dnnxvtha3r
	  section.data(103).logicalSrcIdx = 185;
	  section.data(103).dtTransOffset = 102;
	
	  ;% rtDW.pelwuspvpm
	  section.data(104).logicalSrcIdx = 186;
	  section.data(104).dtTransOffset = 103;
	
	  ;% rtDW.oapgvyjuop
	  section.data(105).logicalSrcIdx = 187;
	  section.data(105).dtTransOffset = 104;
	
	  ;% rtDW.mtf42ubwyf
	  section.data(106).logicalSrcIdx = 188;
	  section.data(106).dtTransOffset = 105;
	
	  ;% rtDW.gzskxcmvxu
	  section.data(107).logicalSrcIdx = 189;
	  section.data(107).dtTransOffset = 106;
	
	  ;% rtDW.lwdpq5zjjk
	  section.data(108).logicalSrcIdx = 190;
	  section.data(108).dtTransOffset = 107;
	
	  ;% rtDW.lvrxzc3xbz
	  section.data(109).logicalSrcIdx = 191;
	  section.data(109).dtTransOffset = 108;
	
	  ;% rtDW.kxuuq5q1xq
	  section.data(110).logicalSrcIdx = 192;
	  section.data(110).dtTransOffset = 109;
	
	  ;% rtDW.ctneexngj0
	  section.data(111).logicalSrcIdx = 193;
	  section.data(111).dtTransOffset = 110;
	
	  ;% rtDW.d4susot5ug
	  section.data(112).logicalSrcIdx = 194;
	  section.data(112).dtTransOffset = 111;
	
	  ;% rtDW.o2qgzkksu5
	  section.data(113).logicalSrcIdx = 195;
	  section.data(113).dtTransOffset = 112;
	
	  ;% rtDW.atywinawwy
	  section.data(114).logicalSrcIdx = 196;
	  section.data(114).dtTransOffset = 113;
	
	  ;% rtDW.eq0pqdmgzx
	  section.data(115).logicalSrcIdx = 197;
	  section.data(115).dtTransOffset = 114;
	
	  ;% rtDW.jaseroeq2i
	  section.data(116).logicalSrcIdx = 198;
	  section.data(116).dtTransOffset = 115;
	
	  ;% rtDW.jq5aog1ruq
	  section.data(117).logicalSrcIdx = 199;
	  section.data(117).dtTransOffset = 116;
	
	  ;% rtDW.okyxvhuh1i
	  section.data(118).logicalSrcIdx = 200;
	  section.data(118).dtTransOffset = 117;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% rtDW.eqfboolvki
	  section.data(1).logicalSrcIdx = 201;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.joonqvsdqa
	  section.data(2).logicalSrcIdx = 202;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.bqqyvce3il
	  section.data(3).logicalSrcIdx = 203;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.bf15x1kmhl
	  section.data(4).logicalSrcIdx = 204;
	  section.data(4).dtTransOffset = 7;
	
	  ;% rtDW.glcb0crgzp
	  section.data(5).logicalSrcIdx = 205;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtDW.haqsbpukj2
	  section.data(6).logicalSrcIdx = 206;
	  section.data(6).dtTransOffset = 18;
	
	  ;% rtDW.naozloifhf
	  section.data(7).logicalSrcIdx = 207;
	  section.data(7).dtTransOffset = 19;
	
	  ;% rtDW.kaw3ejljvu
	  section.data(8).logicalSrcIdx = 208;
	  section.data(8).dtTransOffset = 24;
	
	  ;% rtDW.ena1m1tqgi
	  section.data(9).logicalSrcIdx = 209;
	  section.data(9).dtTransOffset = 25;
	
	  ;% rtDW.fsft1isk0m
	  section.data(10).logicalSrcIdx = 210;
	  section.data(10).dtTransOffset = 30;
	
	  ;% rtDW.oapkaomns3
	  section.data(11).logicalSrcIdx = 211;
	  section.data(11).dtTransOffset = 31;
	
	  ;% rtDW.a5smqjgxxe
	  section.data(12).logicalSrcIdx = 212;
	  section.data(12).dtTransOffset = 36;
	
	  ;% rtDW.aymgehdyan
	  section.data(13).logicalSrcIdx = 213;
	  section.data(13).dtTransOffset = 37;
	
	  ;% rtDW.ftg3rfhku0
	  section.data(14).logicalSrcIdx = 214;
	  section.data(14).dtTransOffset = 42;
	
	  ;% rtDW.hsuxbusn10
	  section.data(15).logicalSrcIdx = 215;
	  section.data(15).dtTransOffset = 43;
	
	  ;% rtDW.ky2erwn5c2
	  section.data(16).logicalSrcIdx = 216;
	  section.data(16).dtTransOffset = 44;
	
	  ;% rtDW.gbfcuomzsu
	  section.data(17).logicalSrcIdx = 217;
	  section.data(17).dtTransOffset = 45;
	
	  ;% rtDW.lyge1xjidb
	  section.data(18).logicalSrcIdx = 218;
	  section.data(18).dtTransOffset = 46;
	
	  ;% rtDW.f2ti4rhiod
	  section.data(19).logicalSrcIdx = 219;
	  section.data(19).dtTransOffset = 47;
	
	  ;% rtDW.fqxwazsrki
	  section.data(20).logicalSrcIdx = 220;
	  section.data(20).dtTransOffset = 48;
	
	  ;% rtDW.frhwhsikv5
	  section.data(21).logicalSrcIdx = 221;
	  section.data(21).dtTransOffset = 49;
	
	  ;% rtDW.ojsecf1orb
	  section.data(22).logicalSrcIdx = 222;
	  section.data(22).dtTransOffset = 50;
	
	  ;% rtDW.ianxcwejev
	  section.data(23).logicalSrcIdx = 223;
	  section.data(23).dtTransOffset = 51;
	
	  ;% rtDW.nigubjutdn
	  section.data(24).logicalSrcIdx = 224;
	  section.data(24).dtTransOffset = 52;
	
	  ;% rtDW.cszj3qgv5l
	  section.data(25).logicalSrcIdx = 225;
	  section.data(25).dtTransOffset = 53;
	
	  ;% rtDW.mrgke35tge
	  section.data(26).logicalSrcIdx = 226;
	  section.data(26).dtTransOffset = 54;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.jvlqksr05b
	  section.data(1).logicalSrcIdx = 227;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.mtqczrwkkn
	  section.data(2).logicalSrcIdx = 228;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.jxqzqpx1f2
	  section.data(3).logicalSrcIdx = 229;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.k1zspym0ms
	  section.data(4).logicalSrcIdx = 230;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.bewafdk0ul
	  section.data(5).logicalSrcIdx = 231;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.my5qkp4udk
	  section.data(6).logicalSrcIdx = 232;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtDW.f2xradlusy
	  section.data(1).logicalSrcIdx = 233;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.gawo34ll5o
	  section.data(2).logicalSrcIdx = 234;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.mqz5cm5qxm
	  section.data(3).logicalSrcIdx = 235;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nxzrdql5d4
	  section.data(4).logicalSrcIdx = 236;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.fk5fuxns4p
	  section.data(5).logicalSrcIdx = 237;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.grvmqcekmn
	  section.data(6).logicalSrcIdx = 238;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.ocauagwkec
	  section.data(7).logicalSrcIdx = 239;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.dljf4h0sju
	  section.data(8).logicalSrcIdx = 240;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.fbnobjwcab
	  section.data(9).logicalSrcIdx = 241;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.jrbx2ydixp
	  section.data(10).logicalSrcIdx = 242;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.hsyrbgvv0a
	  section.data(11).logicalSrcIdx = 243;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.c1giqj4jql
	  section.data(12).logicalSrcIdx = 244;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.mdy50akwic
	  section.data(13).logicalSrcIdx = 245;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.gdbkrwx2mt
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


  targMap.checksum0 = 2957884597;
  targMap.checksum1 = 3543390542;
  targMap.checksum2 = 126132786;
  targMap.checksum3 = 3705451789;

