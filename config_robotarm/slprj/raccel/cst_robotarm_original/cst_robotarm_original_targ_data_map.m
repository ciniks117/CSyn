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
      section.nData     = 88;
      section.data(88)  = dumData; %prealloc
      
	  ;% rtP.dFilt
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.nFilt
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.Step1_Time
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtP.Step1_Y0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtP.Step1_YFinal
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtP.Step2_Time
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtP.Step2_Y0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtP.Step2_YFinal
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtP.Step4_Time
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtP.Step4_Y0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtP.Step4_YFinal
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtP.Step5_Time
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtP.Step5_Y0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% rtP.Step5_YFinal
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% rtP.Step6_Time
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% rtP.Step6_Y0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% rtP.Step6_YFinal
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% rtP.Integrator_IC
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% rtP.Gain_Gain
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% rtP.DiscreteTransferFcn_InitialStates
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% rtP.Gain1_Gain
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% rtP.Gain2_Gain
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% rtP.u5_UpperSat
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% rtP.u5_LowerSat
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% rtP.Gain_Gain_jnwrxmpd2y
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% rtP.Integrator_IC_ly0dldeo0z
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% rtP.Gain_Gain_jbpo1nzc5b
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% rtP.DiscreteTransferFcn1_InitialStates
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% rtP.Gain1_Gain_kzkifunu2y
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% rtP.Gain2_Gain_cehduakigf
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% rtP.u5_UpperSat_ayphnxvhak
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% rtP.u5_LowerSat_ikcgllyxwz
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% rtP.Gain_Gain_g2liatxyxw
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% rtP.Integrator_IC_ebg1cxvyio
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% rtP.Gain_Gain_bw45xj3upi
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% rtP.DiscreteTransferFcn2_InitialStates
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 37;
	
	  ;% rtP.Gain1_Gain_eje3bhamkx
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% rtP.Gain2_Gain_murtnwudat
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 39;
	
	  ;% rtP.u5_UpperSat_jmie0uoskq
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 40;
	
	  ;% rtP.u5_LowerSat_frye4kwxrv
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 41;
	
	  ;% rtP.Gain_Gain_i4wlhlbj0o
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 42;
	
	  ;% rtP.Integrator_IC_a0g2shfbse
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 43;
	
	  ;% rtP.Gain_Gain_oktz1catcm
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 44;
	
	  ;% rtP.DiscreteTransferFcn3_InitialStates
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 45;
	
	  ;% rtP.Gain1_Gain_mqf5zikroh
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 46;
	
	  ;% rtP.Gain2_Gain_c3ooikad3b
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 47;
	
	  ;% rtP.u5_UpperSat_hpv1lydza3
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 48;
	
	  ;% rtP.u5_LowerSat_aj1ncwmb4v
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 49;
	
	  ;% rtP.Gain_Gain_apzpwd2lcp
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 50;
	
	  ;% rtP.Integrator_IC_l0arfvqiva
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 51;
	
	  ;% rtP.Gain_Gain_jkhmhhcb4y
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 52;
	
	  ;% rtP.Step3_Time
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 53;
	
	  ;% rtP.Step3_Y0
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 54;
	
	  ;% rtP.Step3_YFinal
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 55;
	
	  ;% rtP.DiscreteTransferFcn4_InitialStates
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 56;
	
	  ;% rtP.Gain1_Gain_d1yaneumk3
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 57;
	
	  ;% rtP.Gain2_Gain_b1hf4hkty0
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 58;
	
	  ;% rtP.u5_UpperSat_cb5dw4uucg
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 59;
	
	  ;% rtP.u5_LowerSat_m5m10l40lw
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 60;
	
	  ;% rtP.Gain_Gain_flo45vukkm
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 61;
	
	  ;% rtP.Integrator_IC_llwx032bli
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 62;
	
	  ;% rtP.Gain_Gain_fvfj1aitcg
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 63;
	
	  ;% rtP.DiscreteTransferFcn5_InitialStates
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 64;
	
	  ;% rtP.Gain1_Gain_am5x3mjqzc
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 65;
	
	  ;% rtP.Gain2_Gain_it3d3zrzjv
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 66;
	
	  ;% rtP.u5_UpperSat_iylwacoy4o
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 67;
	
	  ;% rtP.u5_LowerSat_er1s3ovlcm
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 68;
	
	  ;% rtP.Gain_Gain_f23n0pwvi0
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 69;
	
	  ;% rtP.Break_Value
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 70;
	
	  ;% rtP.Break1_Value
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 71;
	
	  ;% rtP.Break2_Value
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 72;
	
	  ;% rtP.Break3_Value
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 73;
	
	  ;% rtP.Break4_Value
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 74;
	
	  ;% rtP.Break5_Value
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 75;
	
	  ;% rtP.Constant1_Value
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 76;
	
	  ;% rtP.IC_Value
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 77;
	
	  ;% rtP.u5_UpperSat_ddogfqhdjr
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 78;
	
	  ;% rtP.u5_LowerSat_gld50iakmn
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 79;
	
	  ;% rtP.u5_UpperSat_ilmzmabkef
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 80;
	
	  ;% rtP.u5_LowerSat_i23udsynjx
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 81;
	
	  ;% rtP.u5_UpperSat_jkdd0lirs0
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 82;
	
	  ;% rtP.u5_LowerSat_aqz04ismnb
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 83;
	
	  ;% rtP.u5_UpperSat_jbj1vhkzdu
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 84;
	
	  ;% rtP.u5_LowerSat_ogs21iohyx
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 85;
	
	  ;% rtP.u5_UpperSat_bbllqa54th
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 86;
	
	  ;% rtP.u5_LowerSat_kcwxpitudz
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 87;
	
	  ;% rtP.u5_UpperSat_bxht0cl33x
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 88;
	
	  ;% rtP.u5_LowerSat_lva0v3mt5c
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 89;
	
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
      section.nData     = 120;
      section.data(120)  = dumData; %prealloc
      
	  ;% rtB.m2jjwsrlbd
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.gpydjo5krx
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 29;
	
	  ;% rtB.dwxdtflowp
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 41;
	
	  ;% rtB.gyd45yhrb0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 42;
	
	  ;% rtB.lbmqmf13sh
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 43;
	
	  ;% rtB.lxngnkv35z
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 44;
	
	  ;% rtB.a0dbecbscz
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 45;
	
	  ;% rtB.p52igst3gi
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 46;
	
	  ;% rtB.mgpqcthgau
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 50;
	
	  ;% rtB.mexhqthd1u
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 51;
	
	  ;% rtB.cmq4ia5e5i
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 52;
	
	  ;% rtB.beactzcnhg
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 53;
	
	  ;% rtB.ew3qvg4htl
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 54;
	
	  ;% rtB.iwabd3jvmn
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 55;
	
	  ;% rtB.fvblcfumvs
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 56;
	
	  ;% rtB.gq10553zct
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 57;
	
	  ;% rtB.fnu1t3c25e
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 58;
	
	  ;% rtB.gsf1wnk0dh
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 59;
	
	  ;% rtB.cqfxofdy2x
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 63;
	
	  ;% rtB.hcaj111zjs
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 67;
	
	  ;% rtB.eho11whmzv
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 68;
	
	  ;% rtB.ghf5k2qwns
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 72;
	
	  ;% rtB.hcffmyavz3
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 81;
	
	  ;% rtB.aau4qscxqc
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 82;
	
	  ;% rtB.hb1gynnbug
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 86;
	
	  ;% rtB.jad123dllm
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 90;
	
	  ;% rtB.gssxmsm1u4
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 91;
	
	  ;% rtB.ahmlb2tpsn
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 92;
	
	  ;% rtB.pzzwd3lnfe
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 93;
	
	  ;% rtB.gvzfoeok20
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 94;
	
	  ;% rtB.miplivlyhr
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 95;
	
	  ;% rtB.d30jnvmibe
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 96;
	
	  ;% rtB.ed0x1weluj
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 97;
	
	  ;% rtB.lerd3i21nu
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 98;
	
	  ;% rtB.mwza4ency5
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 99;
	
	  ;% rtB.mqijg4lgem
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 100;
	
	  ;% rtB.gl00bo33dy
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 104;
	
	  ;% rtB.gh1rrww104
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 108;
	
	  ;% rtB.fevlcvnz5r
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 112;
	
	  ;% rtB.malqpcsu2s
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 113;
	
	  ;% rtB.kkeqotz05a
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 117;
	
	  ;% rtB.ehret13uk4
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 121;
	
	  ;% rtB.abgvchli2i
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 125;
	
	  ;% rtB.amiwtetlxb
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 143;
	
	  ;% rtB.ms1z3tsizg
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 144;
	
	  ;% rtB.gktoanyk4z
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 148;
	
	  ;% rtB.eua5qdpl0o
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 152;
	
	  ;% rtB.c5e4njud25
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 153;
	
	  ;% rtB.orrj54i1aj
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 154;
	
	  ;% rtB.ek20cny3ez
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 155;
	
	  ;% rtB.hjapierqks
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 156;
	
	  ;% rtB.n0qv0hb2ss
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 157;
	
	  ;% rtB.g2u01f0n1g
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 158;
	
	  ;% rtB.nusef2vdyd
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 159;
	
	  ;% rtB.bbxkrfmvko
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 160;
	
	  ;% rtB.oapizwvtjv
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 161;
	
	  ;% rtB.clmozh0gh4
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 165;
	
	  ;% rtB.mjo0qmrl1w
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 169;
	
	  ;% rtB.jen3dngjzc
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 170;
	
	  ;% rtB.awdmp3eigf
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 174;
	
	  ;% rtB.kurkqa5zwd
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 183;
	
	  ;% rtB.hilglkudbg
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 184;
	
	  ;% rtB.kfhppmeqms
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 188;
	
	  ;% rtB.igybt2peud
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 192;
	
	  ;% rtB.lnwu3wlfhg
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 193;
	
	  ;% rtB.pk4qwm0mut
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 194;
	
	  ;% rtB.crn43in4pr
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 195;
	
	  ;% rtB.kbicccj23s
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 196;
	
	  ;% rtB.lo0ojzlm13
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 197;
	
	  ;% rtB.c0jld3eln1
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 198;
	
	  ;% rtB.i2btnrrmvd
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 199;
	
	  ;% rtB.bj5rgp4q21
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 200;
	
	  ;% rtB.o04jj02qiz
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 201;
	
	  ;% rtB.nwuia1pahi
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 205;
	
	  ;% rtB.kiueaykv5e
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 209;
	
	  ;% rtB.dqmw4fhx14
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 210;
	
	  ;% rtB.ohur23ysum
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 214;
	
	  ;% rtB.aurpcbuhub
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 223;
	
	  ;% rtB.d4eu5sdm4t
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 224;
	
	  ;% rtB.b5fzixuwzk
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 228;
	
	  ;% rtB.gvve0qid0c
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 232;
	
	  ;% rtB.i5sq4akk1c
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 233;
	
	  ;% rtB.hlvvjykzts
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 234;
	
	  ;% rtB.dvaiasoovm
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 235;
	
	  ;% rtB.bvsjetcrto
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 236;
	
	  ;% rtB.grzgi3w44a
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 237;
	
	  ;% rtB.k5pqt2ul41
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 238;
	
	  ;% rtB.n41mws5fmv
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 239;
	
	  ;% rtB.nc0gz0afr0
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 240;
	
	  ;% rtB.kpvaut1f0z
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 241;
	
	  ;% rtB.ihc2fbedkz
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 242;
	
	  ;% rtB.eppca1vjoc
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 246;
	
	  ;% rtB.blkzncukfb
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 250;
	
	  ;% rtB.m5j42r4u0p
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 251;
	
	  ;% rtB.e3txp1wm1m
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 255;
	
	  ;% rtB.opaiauq1gv
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 264;
	
	  ;% rtB.pb0sw1pbnm
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 265;
	
	  ;% rtB.mvicam42is
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 269;
	
	  ;% rtB.bqsdzmrrnz
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 273;
	
	  ;% rtB.okp4jvlpid
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 274;
	
	  ;% rtB.m2b0x0ugtl
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 275;
	
	  ;% rtB.mlg3v2vp41
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 276;
	
	  ;% rtB.ksjphlyg4k
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 277;
	
	  ;% rtB.juquj3cpm2
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 278;
	
	  ;% rtB.apgokrv2pc
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 279;
	
	  ;% rtB.icwlygycrj
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 280;
	
	  ;% rtB.nhpl1zbtn1
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 281;
	
	  ;% rtB.mz3s2zjmce
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 282;
	
	  ;% rtB.e5jutfqvzq
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 286;
	
	  ;% rtB.gmoevf1lrx
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 290;
	
	  ;% rtB.d35bpuglcw
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 291;
	
	  ;% rtB.lbft5jvmo4
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 295;
	
	  ;% rtB.mv2033hecj
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 304;
	
	  ;% rtB.fgvvgvfqb2
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 305;
	
	  ;% rtB.kcogqti5lt
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 309;
	
	  ;% rtB.fuycbxh103
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 310;
	
	  ;% rtB.ksi1jj2j2i
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 311;
	
	  ;% rtB.oopmuhnlga
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 312;
	
	  ;% rtB.ndqjgxllq1
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 313;
	
	  ;% rtB.drceecbam2
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 314;
	
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
      
	  ;% rtDW.datwzvdkzf
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jsufpcm2h1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.oteri1his1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtDW.hm0fbffqcv
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% rtDW.onotso1e4o
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtDW.mdwdn4mq5y
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% rtDW.nay0nx50aq
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% rtDW.ijg51izxkl
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 12;
	
	  ;% rtDW.cqhilrskhq
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% rtDW.b51bwduuqj
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 15;
	
	  ;% rtDW.cmmyis0zms
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 17;
	
	  ;% rtDW.bjdhfc5lhz
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 19;
	
	  ;% rtDW.fqcn0fobut
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 21;
	
	  ;% rtDW.i4yre5y4ym
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 23;
	
	  ;% rtDW.l4kasjhfye
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 25;
	
	  ;% rtDW.l0y1034bd5
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 27;
	
	  ;% rtDW.kyvarcad3d
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 29;
	
	  ;% rtDW.o11cnuhibt
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 31;
	
	  ;% rtDW.jafswfarp2
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 32;
	
	  ;% rtDW.lzxapb1icv
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 34;
	
	  ;% rtDW.bvsxd0r1dp
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 36;
	
	  ;% rtDW.azqlqnux04
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 38;
	
	  ;% rtDW.ny5kxgxak5
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 40;
	
	  ;% rtDW.i5kbys15rw
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 42;
	
	  ;% rtDW.dp5ayouabh
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 43;
	
	  ;% rtDW.ojlmayfn5v
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 45;
	
	  ;% rtDW.av2yidzrx1
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 47;
	
	  ;% rtDW.bfsrb41ojm
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 49;
	
	  ;% rtDW.iziuo251lm
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 51;
	
	  ;% rtDW.hlednh44vj
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 53;
	
	  ;% rtDW.ji4mf0t5wt
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 54;
	
	  ;% rtDW.fdd414vrzu
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 56;
	
	  ;% rtDW.jftwl5tifw
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 58;
	
	  ;% rtDW.koirnrkaxf
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 60;
	
	  ;% rtDW.j1sr35bzb5
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 62;
	
	  ;% rtDW.gx3cfax52r
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 64;
	
	  ;% rtDW.o0po5lhjyj
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 65;
	
	  ;% rtDW.khqn4cuxu4
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 67;
	
	  ;% rtDW.iuiv3zyr1f
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 69;
	
	  ;% rtDW.ff51t1byru
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 71;
	
	  ;% rtDW.fl2m0qqpfg
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 73;
	
	  ;% rtDW.jzsxvhcibg
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 74;
	
	  ;% rtDW.heujebxouj
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 75;
	
	  ;% rtDW.dirkxjwsro
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 76;
	
	  ;% rtDW.pvucch4vyc
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 77;
	
	  ;% rtDW.lm0tw5kdhe
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 78;
	
	  ;% rtDW.bymgp30epy
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 79;
	
	  ;% rtDW.o4fzjza1u2
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 80;
	
	  ;% rtDW.jfxmq0tfqx
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 81;
	
	  ;% rtDW.mq4uv2mjqx
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 82;
	
	  ;% rtDW.pztqturi1b
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 83;
	
	  ;% rtDW.kbgbop14eq
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 84;
	
	  ;% rtDW.jcz3rplte2
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 85;
	
	  ;% rtDW.igqahwaopd
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 86;
	
	  ;% rtDW.fy1kz0sajb
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 87;
	
	  ;% rtDW.ndfouz54yl
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 88;
	
	  ;% rtDW.fb5swmqdt5
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 89;
	
	  ;% rtDW.bnfwdbxi2t
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 90;
	
	  ;% rtDW.llk4fj1ncu
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 91;
	
	  ;% rtDW.cr1izahinw
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 92;
	
	  ;% rtDW.dyznqu2x02
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 93;
	
	  ;% rtDW.peqv01wo33
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 94;
	
	  ;% rtDW.nshioqabso
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 95;
	
	  ;% rtDW.henb0ohgwy
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 96;
	
	  ;% rtDW.mix0lfmbff
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 97;
	
	  ;% rtDW.j3gsjqtsgp
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 98;
	
	  ;% rtDW.aszjr4q3fo
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 99;
	
	  ;% rtDW.av1vfdfdhf
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 100;
	
	  ;% rtDW.j5y42qfywc
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 101;
	
	  ;% rtDW.gw1h2vmwt3
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 102;
	
	  ;% rtDW.p3obvvkwm4
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 103;
	
	  ;% rtDW.hm0epu1iul
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 104;
	
	  ;% rtDW.ijbwqrc1eb
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 105;
	
	  ;% rtDW.nr3ar0p5mz
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 106;
	
	  ;% rtDW.blamix54h1
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 107;
	
	  ;% rtDW.ksns5guy05
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 108;
	
	  ;% rtDW.fzrdocqyjw
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 109;
	
	  ;% rtDW.gjwwzw0tqq
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 110;
	
	  ;% rtDW.c2umyviniw
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 111;
	
	  ;% rtDW.ipcmf1bcmr
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 112;
	
	  ;% rtDW.ihznmq1yfj
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 113;
	
	  ;% rtDW.kqoo2vremt
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 114;
	
	  ;% rtDW.oxhl02ezne
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 115;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 100;
      section.data(100)  = dumData; %prealloc
      
	  ;% rtDW.hymu3nho1w
	  section.data(1).logicalSrcIdx = 83;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.l4g30qb3cj
	  section.data(2).logicalSrcIdx = 84;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.npqncjuh4p
	  section.data(3).logicalSrcIdx = 85;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ga2nkpqzkl
	  section.data(4).logicalSrcIdx = 86;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.pkgsm2ff5v
	  section.data(5).logicalSrcIdx = 87;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.eth2ta0ixd
	  section.data(6).logicalSrcIdx = 88;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.lmer5zwzkb
	  section.data(7).logicalSrcIdx = 89;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.d5cfrz0sqv
	  section.data(8).logicalSrcIdx = 90;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.koovb0fnmu
	  section.data(9).logicalSrcIdx = 91;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.cys0autzjh
	  section.data(10).logicalSrcIdx = 92;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.gio0jbhtv1.LoggedData
	  section.data(11).logicalSrcIdx = 93;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.o4rzjlwnp0.AQHandles
	  section.data(12).logicalSrcIdx = 94;
	  section.data(12).dtTransOffset = 12;
	
	  ;% rtDW.ess5xfw1cg.AQHandles
	  section.data(13).logicalSrcIdx = 95;
	  section.data(13).dtTransOffset = 13;
	
	  ;% rtDW.juqvuixxqk.AQHandles
	  section.data(14).logicalSrcIdx = 96;
	  section.data(14).dtTransOffset = 14;
	
	  ;% rtDW.p5riohe4an.AQHandles
	  section.data(15).logicalSrcIdx = 97;
	  section.data(15).dtTransOffset = 15;
	
	  ;% rtDW.kumdlxv2pj.AQHandles
	  section.data(16).logicalSrcIdx = 98;
	  section.data(16).dtTransOffset = 16;
	
	  ;% rtDW.gxx4qdhgam.AQHandles
	  section.data(17).logicalSrcIdx = 99;
	  section.data(17).dtTransOffset = 17;
	
	  ;% rtDW.grbxtmi4gy.AQHandles
	  section.data(18).logicalSrcIdx = 100;
	  section.data(18).dtTransOffset = 18;
	
	  ;% rtDW.kf2l0bp4qf.AQHandles
	  section.data(19).logicalSrcIdx = 101;
	  section.data(19).dtTransOffset = 19;
	
	  ;% rtDW.cbaon5wpyd.AQHandles
	  section.data(20).logicalSrcIdx = 102;
	  section.data(20).dtTransOffset = 20;
	
	  ;% rtDW.myfwmwkhyi.AQHandles
	  section.data(21).logicalSrcIdx = 103;
	  section.data(21).dtTransOffset = 21;
	
	  ;% rtDW.mhxdgqlean.AQHandles
	  section.data(22).logicalSrcIdx = 104;
	  section.data(22).dtTransOffset = 22;
	
	  ;% rtDW.lq5wns3dvy
	  section.data(23).logicalSrcIdx = 105;
	  section.data(23).dtTransOffset = 23;
	
	  ;% rtDW.luqgty2sqr
	  section.data(24).logicalSrcIdx = 106;
	  section.data(24).dtTransOffset = 24;
	
	  ;% rtDW.g34wywbvoq
	  section.data(25).logicalSrcIdx = 107;
	  section.data(25).dtTransOffset = 25;
	
	  ;% rtDW.lsfasqabq3
	  section.data(26).logicalSrcIdx = 108;
	  section.data(26).dtTransOffset = 26;
	
	  ;% rtDW.hbmi1lc3z3
	  section.data(27).logicalSrcIdx = 109;
	  section.data(27).dtTransOffset = 27;
	
	  ;% rtDW.pqcmol2drt
	  section.data(28).logicalSrcIdx = 110;
	  section.data(28).dtTransOffset = 28;
	
	  ;% rtDW.oodgx5kilx
	  section.data(29).logicalSrcIdx = 111;
	  section.data(29).dtTransOffset = 29;
	
	  ;% rtDW.eav1ttze4f
	  section.data(30).logicalSrcIdx = 112;
	  section.data(30).dtTransOffset = 30;
	
	  ;% rtDW.ivpcyqn3ul
	  section.data(31).logicalSrcIdx = 113;
	  section.data(31).dtTransOffset = 31;
	
	  ;% rtDW.dmyokvey25
	  section.data(32).logicalSrcIdx = 114;
	  section.data(32).dtTransOffset = 32;
	
	  ;% rtDW.ipgckui03o
	  section.data(33).logicalSrcIdx = 115;
	  section.data(33).dtTransOffset = 33;
	
	  ;% rtDW.gtngycvr1v
	  section.data(34).logicalSrcIdx = 116;
	  section.data(34).dtTransOffset = 34;
	
	  ;% rtDW.dau5zpxltv
	  section.data(35).logicalSrcIdx = 117;
	  section.data(35).dtTransOffset = 35;
	
	  ;% rtDW.edbcntajjf
	  section.data(36).logicalSrcIdx = 118;
	  section.data(36).dtTransOffset = 36;
	
	  ;% rtDW.jqjgsrcmx4
	  section.data(37).logicalSrcIdx = 119;
	  section.data(37).dtTransOffset = 37;
	
	  ;% rtDW.pifdwitl4p
	  section.data(38).logicalSrcIdx = 120;
	  section.data(38).dtTransOffset = 38;
	
	  ;% rtDW.a2ojuitiri
	  section.data(39).logicalSrcIdx = 121;
	  section.data(39).dtTransOffset = 39;
	
	  ;% rtDW.c42r12fxzd
	  section.data(40).logicalSrcIdx = 122;
	  section.data(40).dtTransOffset = 40;
	
	  ;% rtDW.f4lbxhmbfn
	  section.data(41).logicalSrcIdx = 123;
	  section.data(41).dtTransOffset = 41;
	
	  ;% rtDW.ggcgxltge3
	  section.data(42).logicalSrcIdx = 124;
	  section.data(42).dtTransOffset = 42;
	
	  ;% rtDW.hfd2kdvhft
	  section.data(43).logicalSrcIdx = 125;
	  section.data(43).dtTransOffset = 43;
	
	  ;% rtDW.dc0ikbgay5
	  section.data(44).logicalSrcIdx = 126;
	  section.data(44).dtTransOffset = 44;
	
	  ;% rtDW.bfzy1zqdrk
	  section.data(45).logicalSrcIdx = 127;
	  section.data(45).dtTransOffset = 45;
	
	  ;% rtDW.nq2flvb3sw
	  section.data(46).logicalSrcIdx = 128;
	  section.data(46).dtTransOffset = 46;
	
	  ;% rtDW.mp4imkc1ci
	  section.data(47).logicalSrcIdx = 129;
	  section.data(47).dtTransOffset = 47;
	
	  ;% rtDW.p1olpso2qf
	  section.data(48).logicalSrcIdx = 130;
	  section.data(48).dtTransOffset = 48;
	
	  ;% rtDW.arv32tkm5f
	  section.data(49).logicalSrcIdx = 131;
	  section.data(49).dtTransOffset = 49;
	
	  ;% rtDW.odxr5jqq3h
	  section.data(50).logicalSrcIdx = 132;
	  section.data(50).dtTransOffset = 50;
	
	  ;% rtDW.a3l0bzdtov
	  section.data(51).logicalSrcIdx = 133;
	  section.data(51).dtTransOffset = 51;
	
	  ;% rtDW.nvdxrfwwjf
	  section.data(52).logicalSrcIdx = 134;
	  section.data(52).dtTransOffset = 52;
	
	  ;% rtDW.ckf13aqezk
	  section.data(53).logicalSrcIdx = 135;
	  section.data(53).dtTransOffset = 53;
	
	  ;% rtDW.kl0ddpmtll
	  section.data(54).logicalSrcIdx = 136;
	  section.data(54).dtTransOffset = 54;
	
	  ;% rtDW.lx2smnavwa
	  section.data(55).logicalSrcIdx = 137;
	  section.data(55).dtTransOffset = 55;
	
	  ;% rtDW.btcsxpr1e4
	  section.data(56).logicalSrcIdx = 138;
	  section.data(56).dtTransOffset = 56;
	
	  ;% rtDW.pukzy5r4yz
	  section.data(57).logicalSrcIdx = 139;
	  section.data(57).dtTransOffset = 57;
	
	  ;% rtDW.htibunu1u0
	  section.data(58).logicalSrcIdx = 140;
	  section.data(58).dtTransOffset = 58;
	
	  ;% rtDW.er43jccux2
	  section.data(59).logicalSrcIdx = 141;
	  section.data(59).dtTransOffset = 59;
	
	  ;% rtDW.ox542gociu
	  section.data(60).logicalSrcIdx = 142;
	  section.data(60).dtTransOffset = 60;
	
	  ;% rtDW.etigdemkn4
	  section.data(61).logicalSrcIdx = 143;
	  section.data(61).dtTransOffset = 61;
	
	  ;% rtDW.lmvverya33
	  section.data(62).logicalSrcIdx = 144;
	  section.data(62).dtTransOffset = 62;
	
	  ;% rtDW.b350mxxcd5
	  section.data(63).logicalSrcIdx = 145;
	  section.data(63).dtTransOffset = 63;
	
	  ;% rtDW.gew2edtgzk
	  section.data(64).logicalSrcIdx = 146;
	  section.data(64).dtTransOffset = 64;
	
	  ;% rtDW.j5jrcxb4qp
	  section.data(65).logicalSrcIdx = 147;
	  section.data(65).dtTransOffset = 65;
	
	  ;% rtDW.hzbocz5msq
	  section.data(66).logicalSrcIdx = 148;
	  section.data(66).dtTransOffset = 66;
	
	  ;% rtDW.oplcq4gapx
	  section.data(67).logicalSrcIdx = 149;
	  section.data(67).dtTransOffset = 67;
	
	  ;% rtDW.k3rk53cctg
	  section.data(68).logicalSrcIdx = 150;
	  section.data(68).dtTransOffset = 68;
	
	  ;% rtDW.gabyx120co
	  section.data(69).logicalSrcIdx = 151;
	  section.data(69).dtTransOffset = 69;
	
	  ;% rtDW.klyw22x3a5
	  section.data(70).logicalSrcIdx = 152;
	  section.data(70).dtTransOffset = 70;
	
	  ;% rtDW.ems1vov11x
	  section.data(71).logicalSrcIdx = 153;
	  section.data(71).dtTransOffset = 71;
	
	  ;% rtDW.an2c1edyuy
	  section.data(72).logicalSrcIdx = 154;
	  section.data(72).dtTransOffset = 72;
	
	  ;% rtDW.nl1dyr0lbo
	  section.data(73).logicalSrcIdx = 155;
	  section.data(73).dtTransOffset = 73;
	
	  ;% rtDW.pjclqm00ip
	  section.data(74).logicalSrcIdx = 156;
	  section.data(74).dtTransOffset = 74;
	
	  ;% rtDW.ps0145mupz
	  section.data(75).logicalSrcIdx = 157;
	  section.data(75).dtTransOffset = 75;
	
	  ;% rtDW.huffmdf0bh
	  section.data(76).logicalSrcIdx = 158;
	  section.data(76).dtTransOffset = 76;
	
	  ;% rtDW.ehqwjnwps1
	  section.data(77).logicalSrcIdx = 159;
	  section.data(77).dtTransOffset = 77;
	
	  ;% rtDW.k31d01gzwi
	  section.data(78).logicalSrcIdx = 160;
	  section.data(78).dtTransOffset = 78;
	
	  ;% rtDW.c14icyaj2t
	  section.data(79).logicalSrcIdx = 161;
	  section.data(79).dtTransOffset = 79;
	
	  ;% rtDW.kds0ednfxw
	  section.data(80).logicalSrcIdx = 162;
	  section.data(80).dtTransOffset = 80;
	
	  ;% rtDW.oegvahtq2n
	  section.data(81).logicalSrcIdx = 163;
	  section.data(81).dtTransOffset = 81;
	
	  ;% rtDW.prq00gknau
	  section.data(82).logicalSrcIdx = 164;
	  section.data(82).dtTransOffset = 82;
	
	  ;% rtDW.iasjyosrf4.AQHandles
	  section.data(83).logicalSrcIdx = 165;
	  section.data(83).dtTransOffset = 83;
	
	  ;% rtDW.krymky00fw.AQHandles
	  section.data(84).logicalSrcIdx = 166;
	  section.data(84).dtTransOffset = 84;
	
	  ;% rtDW.aty3pq5a3r.AQHandles
	  section.data(85).logicalSrcIdx = 167;
	  section.data(85).dtTransOffset = 85;
	
	  ;% rtDW.iasjyosrf4l.AQHandles
	  section.data(86).logicalSrcIdx = 168;
	  section.data(86).dtTransOffset = 86;
	
	  ;% rtDW.krymky00fwv.AQHandles
	  section.data(87).logicalSrcIdx = 169;
	  section.data(87).dtTransOffset = 87;
	
	  ;% rtDW.aty3pq5a3rd.AQHandles
	  section.data(88).logicalSrcIdx = 170;
	  section.data(88).dtTransOffset = 88;
	
	  ;% rtDW.iasjyosrf4lj.AQHandles
	  section.data(89).logicalSrcIdx = 171;
	  section.data(89).dtTransOffset = 89;
	
	  ;% rtDW.krymky00fwve.AQHandles
	  section.data(90).logicalSrcIdx = 172;
	  section.data(90).dtTransOffset = 90;
	
	  ;% rtDW.aty3pq5a3rdc.AQHandles
	  section.data(91).logicalSrcIdx = 173;
	  section.data(91).dtTransOffset = 91;
	
	  ;% rtDW.iasjyosrf4ljd.AQHandles
	  section.data(92).logicalSrcIdx = 174;
	  section.data(92).dtTransOffset = 92;
	
	  ;% rtDW.krymky00fwveg.AQHandles
	  section.data(93).logicalSrcIdx = 175;
	  section.data(93).dtTransOffset = 93;
	
	  ;% rtDW.aty3pq5a3rdcg.AQHandles
	  section.data(94).logicalSrcIdx = 176;
	  section.data(94).dtTransOffset = 94;
	
	  ;% rtDW.iasjyosrf4ljd4.AQHandles
	  section.data(95).logicalSrcIdx = 177;
	  section.data(95).dtTransOffset = 95;
	
	  ;% rtDW.krymky00fwvegl.AQHandles
	  section.data(96).logicalSrcIdx = 178;
	  section.data(96).dtTransOffset = 96;
	
	  ;% rtDW.aty3pq5a3rdcgn.AQHandles
	  section.data(97).logicalSrcIdx = 179;
	  section.data(97).dtTransOffset = 97;
	
	  ;% rtDW.iasjyosrf4ljd4p.AQHandles
	  section.data(98).logicalSrcIdx = 180;
	  section.data(98).dtTransOffset = 98;
	
	  ;% rtDW.krymky00fwvegln.AQHandles
	  section.data(99).logicalSrcIdx = 181;
	  section.data(99).dtTransOffset = 99;
	
	  ;% rtDW.aty3pq5a3rdcgno.AQHandles
	  section.data(100).logicalSrcIdx = 182;
	  section.data(100).dtTransOffset = 100;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% rtDW.m04ffi3voe
	  section.data(1).logicalSrcIdx = 183;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hi321ofhgd
	  section.data(2).logicalSrcIdx = 184;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.g5q2xfjrgx
	  section.data(3).logicalSrcIdx = 185;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.fsbuyljt50
	  section.data(4).logicalSrcIdx = 186;
	  section.data(4).dtTransOffset = 7;
	
	  ;% rtDW.lexhviy3rv
	  section.data(5).logicalSrcIdx = 187;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtDW.cjsxeosjk2
	  section.data(6).logicalSrcIdx = 188;
	  section.data(6).dtTransOffset = 18;
	
	  ;% rtDW.nol4hxpj0x
	  section.data(7).logicalSrcIdx = 189;
	  section.data(7).dtTransOffset = 19;
	
	  ;% rtDW.ejh5vaqytw
	  section.data(8).logicalSrcIdx = 190;
	  section.data(8).dtTransOffset = 24;
	
	  ;% rtDW.luhysk1n03
	  section.data(9).logicalSrcIdx = 191;
	  section.data(9).dtTransOffset = 25;
	
	  ;% rtDW.k2fawuwm0d
	  section.data(10).logicalSrcIdx = 192;
	  section.data(10).dtTransOffset = 30;
	
	  ;% rtDW.icml34wspz
	  section.data(11).logicalSrcIdx = 193;
	  section.data(11).dtTransOffset = 31;
	
	  ;% rtDW.ku5ahlmc4f
	  section.data(12).logicalSrcIdx = 194;
	  section.data(12).dtTransOffset = 36;
	
	  ;% rtDW.jud4hp33kc
	  section.data(13).logicalSrcIdx = 195;
	  section.data(13).dtTransOffset = 37;
	
	  ;% rtDW.ghzu5o14kj
	  section.data(14).logicalSrcIdx = 196;
	  section.data(14).dtTransOffset = 42;
	
	  ;% rtDW.pyqarul1xn
	  section.data(15).logicalSrcIdx = 197;
	  section.data(15).dtTransOffset = 43;
	
	  ;% rtDW.fkc3rip3zs
	  section.data(16).logicalSrcIdx = 198;
	  section.data(16).dtTransOffset = 44;
	
	  ;% rtDW.cogjmacv4u
	  section.data(17).logicalSrcIdx = 199;
	  section.data(17).dtTransOffset = 45;
	
	  ;% rtDW.jydlut0pwv
	  section.data(18).logicalSrcIdx = 200;
	  section.data(18).dtTransOffset = 46;
	
	  ;% rtDW.ehzmofotam
	  section.data(19).logicalSrcIdx = 201;
	  section.data(19).dtTransOffset = 47;
	
	  ;% rtDW.hql2bzxowu
	  section.data(20).logicalSrcIdx = 202;
	  section.data(20).dtTransOffset = 48;
	
	  ;% rtDW.juy3suewuj
	  section.data(21).logicalSrcIdx = 203;
	  section.data(21).dtTransOffset = 49;
	
	  ;% rtDW.mq0a0ndtrk
	  section.data(22).logicalSrcIdx = 204;
	  section.data(22).dtTransOffset = 50;
	
	  ;% rtDW.ou532tpast
	  section.data(23).logicalSrcIdx = 205;
	  section.data(23).dtTransOffset = 51;
	
	  ;% rtDW.mzm23e00xt
	  section.data(24).logicalSrcIdx = 206;
	  section.data(24).dtTransOffset = 52;
	
	  ;% rtDW.iyoi2f4v52
	  section.data(25).logicalSrcIdx = 207;
	  section.data(25).dtTransOffset = 53;
	
	  ;% rtDW.cdiv2a04j3
	  section.data(26).logicalSrcIdx = 208;
	  section.data(26).dtTransOffset = 54;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.gdocvflmcr
	  section.data(1).logicalSrcIdx = 209;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bwyrw3acho
	  section.data(2).logicalSrcIdx = 210;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cyfqrvqkg4
	  section.data(3).logicalSrcIdx = 211;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.p1xxvhgf3v
	  section.data(4).logicalSrcIdx = 212;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.iu2s2vbg4w
	  section.data(5).logicalSrcIdx = 213;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.juiuitfey0
	  section.data(6).logicalSrcIdx = 214;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtDW.mwqbybpzbm
	  section.data(1).logicalSrcIdx = 215;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jd0hmob0i2
	  section.data(2).logicalSrcIdx = 216;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.nlzyi5ptlo
	  section.data(3).logicalSrcIdx = 217;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.d0kezpx15z
	  section.data(4).logicalSrcIdx = 218;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.bivnmvek33
	  section.data(5).logicalSrcIdx = 219;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.e0l4bcv3bo
	  section.data(6).logicalSrcIdx = 220;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.p4a2zeoo4u
	  section.data(7).logicalSrcIdx = 221;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.id5ps042a5
	  section.data(8).logicalSrcIdx = 222;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.izq0ljwvwg
	  section.data(9).logicalSrcIdx = 223;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.onmzrckjm1
	  section.data(10).logicalSrcIdx = 224;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.dolp5gqqnu
	  section.data(11).logicalSrcIdx = 225;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.l5d4wzhi0y
	  section.data(12).logicalSrcIdx = 226;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.ogtrao1rto
	  section.data(13).logicalSrcIdx = 227;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.irp4xih23c
	  section.data(14).logicalSrcIdx = 228;
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


  targMap.checksum0 = 2698101852;
  targMap.checksum1 = 2922316287;
  targMap.checksum2 = 2587534183;
  targMap.checksum3 = 710481660;

