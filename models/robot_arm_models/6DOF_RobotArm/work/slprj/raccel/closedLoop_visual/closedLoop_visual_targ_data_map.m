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
      section.nData     = 218;
      section.data(218)  = dumData; %prealloc
      
	  ;% rtP.PIDController_InitialConditionForFilter
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.PIDController_InitialConditionForFilter_bijcxd3biq
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.PIDController_InitialConditionForFilter_l1xa4emaot
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.PIDController_InitialConditionForFilter_mhpnjmh103
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.PIDController_InitialConditionForFilter_bdfusxafxj
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.PIDController_InitialConditionForFilter_gqvtejr1kb
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_ber5p0pasi
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_iybb1ixf51
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_ityg02255r
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_bvowefbi1b
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_fu11ifn3yb
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_hthxsrdqok
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_eumty3ptkf
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_lucwcnhkok
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_ijjwn33l3l
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_hhj2q0e3gi
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_al35d1opha
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_dblmcrutuw
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_cgk1ez4ty3
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_kyey52ep50
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_paeb1p5zo1
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_fbdarspjyq
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_gk1e3ckbus
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_azyftkzlmk
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_i2ua0qelre
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_jcls4yejjf
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_i0guetzbzf
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_kbnahp4pbf
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtP.FADiscretePositioncontrol_Kd
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtP.GADiscretePositioncontrol_Kd
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtP.LFADiscretePositioncontrol_Kd
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtP.RFADiscretePositioncontrol_Kd
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtP.UADiscretePositioncontrol_Kd
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtP.WADiscretePositioncontrol_Kd
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtP.FADiscretePositioncontrol_Ki
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtP.GADiscretePositioncontrol_Ki
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtP.LFADiscretePositioncontrol_Ki
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtP.RFADiscretePositioncontrol_Ki
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtP.UADiscretePositioncontrol_Ki
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtP.WADiscretePositioncontrol_Ki
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtP.FADiscreteSpeedcontrol_Ki
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtP.GADiscreteSpeedcontrol_Ki
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtP.LFADiscreteSpeedcontrol_Ki
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtP.RFADiscreteSpeedcontrol_Ki
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtP.UADiscreteSpeedcontrol_Ki
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtP.WADiscreteSpeedcontrol_Ki
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtP.FADiscretePositioncontrol_Kp
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtP.GADiscretePositioncontrol_Kp
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtP.LFADiscretePositioncontrol_Kp
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtP.RFADiscretePositioncontrol_Kp
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtP.UADiscretePositioncontrol_Kp
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtP.WADiscretePositioncontrol_Kp
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtP.FADiscreteSpeedcontrol_Kp
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtP.GADiscreteSpeedcontrol_Kp
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtP.LFADiscreteSpeedcontrol_Kp
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtP.RFADiscreteSpeedcontrol_Kp
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtP.UADiscreteSpeedcontrol_Kp
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtP.WADiscreteSpeedcontrol_Kp
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtP.FADiscretePositioncontrol_N
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtP.GADiscretePositioncontrol_N
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtP.LFADiscretePositioncontrol_N
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtP.RFADiscretePositioncontrol_N
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtP.UADiscretePositioncontrol_N
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtP.WADiscretePositioncontrol_N
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtP.FADiscretePositioncontrol_sat
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtP.GADiscretePositioncontrol_sat
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtP.LFADiscretePositioncontrol_sat
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtP.RFADiscretePositioncontrol_sat
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtP.UADiscretePositioncontrol_sat
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtP.WADiscretePositioncontrol_sat
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 71;
	
	  ;% rtP.FADiscretePositioncontrol_tc
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 72;
	
	  ;% rtP.GADiscretePositioncontrol_tc
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 73;
	
	  ;% rtP.LFADiscretePositioncontrol_tc
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 74;
	
	  ;% rtP.RFADiscretePositioncontrol_tc
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 75;
	
	  ;% rtP.UADiscretePositioncontrol_tc
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 76;
	
	  ;% rtP.WADiscretePositioncontrol_tc
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 77;
	
	  ;% rtP.FADiscreteSpeedcontrol_tc
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 78;
	
	  ;% rtP.GADiscreteSpeedcontrol_tc
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 79;
	
	  ;% rtP.LFADiscreteSpeedcontrol_tc
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 80;
	
	  ;% rtP.RFADiscreteSpeedcontrol_tc
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 81;
	
	  ;% rtP.UADiscreteSpeedcontrol_tc
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 82;
	
	  ;% rtP.WADiscreteSpeedcontrol_tc
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 83;
	
	  ;% rtP.GAIN_Gain
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 84;
	
	  ;% rtP.Gain_Gain
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 85;
	
	  ;% rtP.GAIN_Gain_ghcgkbkv3x
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 86;
	
	  ;% rtP.Gain1_Gain
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 87;
	
	  ;% rtP.GAIN_Gain_bkr1j0bd3l
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 88;
	
	  ;% rtP.Gain2_Gain
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 89;
	
	  ;% rtP.GAIN_Gain_lksnrktixr
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 90;
	
	  ;% rtP.Gain3_Gain
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 91;
	
	  ;% rtP.GAIN_Gain_iurldfivlm
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 92;
	
	  ;% rtP.Gain4_Gain
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 93;
	
	  ;% rtP.GAIN_Gain_cegszobnvd
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 94;
	
	  ;% rtP.Gain5_Gain
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 95;
	
	  ;% rtP.Constant_Value
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 96;
	
	  ;% rtP.FromWs_Time0
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 97;
	
	  ;% rtP.FromWs_Data0
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 117;
	
	  ;% rtP.Integrator_gainval
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 237;
	
	  ;% rtP.Integrator_UpperSat
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 238;
	
	  ;% rtP.Integrator_LowerSat
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 239;
	
	  ;% rtP.Saturation_UpperSat
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 240;
	
	  ;% rtP.Saturation_LowerSat
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 241;
	
	  ;% rtP.Filter_gainval
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 242;
	
	  ;% rtP.Integrator_gainval_evxnoheart
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 243;
	
	  ;% rtP.Constant_Value_lrixhn0dkj
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 244;
	
	  ;% rtP.Integrator_gainval_ixv0i24q4y
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 245;
	
	  ;% rtP.Integrator_UpperSat_czguogaom1
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 246;
	
	  ;% rtP.Integrator_LowerSat_fhhrbnlssc
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 247;
	
	  ;% rtP.Saturation_UpperSat_b1wm32nmrw
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 248;
	
	  ;% rtP.Saturation_LowerSat_kngpvfh4ls
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 249;
	
	  ;% rtP.Filter_gainval_m3bozatxx4
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 250;
	
	  ;% rtP.Integrator_gainval_phjczhiptn
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 251;
	
	  ;% rtP.Constant_Value_angmd05wja
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 252;
	
	  ;% rtP.Integrator_gainval_lgbng1p1od
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 253;
	
	  ;% rtP.Integrator_UpperSat_jilgocqigo
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 254;
	
	  ;% rtP.Integrator_LowerSat_meej1knsfc
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 255;
	
	  ;% rtP.Saturation_UpperSat_pkgoxl0lrf
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 256;
	
	  ;% rtP.Saturation_LowerSat_ndevo5xjvz
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 257;
	
	  ;% rtP.Filter_gainval_dcpihimpte
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 258;
	
	  ;% rtP.Integrator_gainval_fxz21rvcq2
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 259;
	
	  ;% rtP.Constant_Value_fdkwrdxtu1
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 260;
	
	  ;% rtP.Integrator_gainval_e4yvg5h4je
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 261;
	
	  ;% rtP.Integrator_UpperSat_k3htidczg5
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 262;
	
	  ;% rtP.Integrator_LowerSat_ieq4zg3egn
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 263;
	
	  ;% rtP.Saturation_UpperSat_h1n4bbj4rg
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 264;
	
	  ;% rtP.Saturation_LowerSat_pnxjdliiid
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 265;
	
	  ;% rtP.Filter_gainval_czxjn1rlbf
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 266;
	
	  ;% rtP.Integrator_gainval_bfghpclnjy
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 267;
	
	  ;% rtP.Constant_Value_gt3vzcqmtv
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 268;
	
	  ;% rtP.Integrator_gainval_hw1oy5wzvu
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 269;
	
	  ;% rtP.Integrator_UpperSat_pm2laakorw
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 270;
	
	  ;% rtP.Integrator_LowerSat_dap2gqqil4
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 271;
	
	  ;% rtP.Saturation_UpperSat_j0pkmjhttf
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 272;
	
	  ;% rtP.Saturation_LowerSat_nciqxysdzy
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 273;
	
	  ;% rtP.Filter_gainval_hd00yas04n
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 274;
	
	  ;% rtP.Integrator_gainval_lyxhkmrez3
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 275;
	
	  ;% rtP.Constant_Value_lseib3tlc0
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 276;
	
	  ;% rtP.Integrator_gainval_fgcdlddvaj
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 277;
	
	  ;% rtP.Integrator_UpperSat_kos2lis5jd
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 278;
	
	  ;% rtP.Integrator_LowerSat_gvexo5zn1g
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 279;
	
	  ;% rtP.Saturation_UpperSat_bfekxvwt24
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 280;
	
	  ;% rtP.Saturation_LowerSat_ixkztlf2ug
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 281;
	
	  ;% rtP.Filter_gainval_jvx230nbth
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 282;
	
	  ;% rtP.Integrator_gainval_dfjgw4u3hp
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 283;
	
	  ;% rtP.Constant_Value_gpr0azxf2n
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 284;
	
	  ;% rtP.Gain3_Gain_ddianwy5uo
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 285;
	
	  ;% rtP.Integrator_gainval_ax1qbi1zsf
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 286;
	
	  ;% rtP.Integrator_UpperSat_pxoupp3bpy
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 287;
	
	  ;% rtP.Integrator_LowerSat_dxi0sl14if
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 288;
	
	  ;% rtP.Saturation_UpperSat_ljcmvdtzmp
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 289;
	
	  ;% rtP.Saturation_LowerSat_bpwoq1jyyj
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 290;
	
	  ;% rtP.GAIN_Gain_gipujhulkf
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 291;
	
	  ;% rtP.Gain5_Gain_bdpfd5cloc
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 292;
	
	  ;% rtP.Integrator_gainval_jh4ek35yra
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 293;
	
	  ;% rtP.Constant_Value_j0d24bmf2w
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 294;
	
	  ;% rtP.Gain9_Gain
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 295;
	
	  ;% rtP.Integrator_gainval_ilq14saqfb
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 296;
	
	  ;% rtP.Integrator_UpperSat_dyf31exjbb
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 297;
	
	  ;% rtP.Integrator_LowerSat_kf5ksuxrmw
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 298;
	
	  ;% rtP.Saturation_UpperSat_ku4zfj1mgj
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 299;
	
	  ;% rtP.Saturation_LowerSat_piqabk5uwl
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 300;
	
	  ;% rtP.GAIN_Gain_d2bdwaaa5x
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 301;
	
	  ;% rtP.Gain10_Gain
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 302;
	
	  ;% rtP.Integrator_gainval_ozrhkkjmsl
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 303;
	
	  ;% rtP.Gain12_Gain
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 304;
	
	  ;% rtP.GAIN_Gain_fa3mxd0pxv
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 305;
	
	  ;% rtP.Gain13_Gain
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 306;
	
	  ;% rtP.Gain15_Gain
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 307;
	
	  ;% rtP.GAIN_Gain_cbggud5v1h
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 308;
	
	  ;% rtP.Gain16_Gain
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 309;
	
	  ;% rtP.Gain2_Gain_lgcuhly1ij
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 310;
	
	  ;% rtP.GAIN_Gain_ih3mthbt50
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 311;
	
	  ;% rtP.Gain4_Gain_debj45fomz
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 312;
	
	  ;% rtP.Gain6_Gain
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 313;
	
	  ;% rtP.GAIN_Gain_a3e3501pqa
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 314;
	
	  ;% rtP.Gain7_Gain
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 315;
	
	  ;% rtP.Constant_Value_pqdzo2a0cn
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 316;
	
	  ;% rtP.Integrator_gainval_o1pkdugrbd
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 317;
	
	  ;% rtP.Integrator_UpperSat_ft3uzmj1ph
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 318;
	
	  ;% rtP.Integrator_LowerSat_cfjq315toj
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 319;
	
	  ;% rtP.Saturation_UpperSat_k12phj5ehi
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 320;
	
	  ;% rtP.Saturation_LowerSat_ffce0ibflx
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 321;
	
	  ;% rtP.Integrator_gainval_ivhv4zygdd
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 322;
	
	  ;% rtP.Constant_Value_btw4atao4i
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 323;
	
	  ;% rtP.Integrator_gainval_majrlzonqu
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 324;
	
	  ;% rtP.Integrator_UpperSat_icgexzc3ek
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 325;
	
	  ;% rtP.Integrator_LowerSat_enhsd21rzi
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 326;
	
	  ;% rtP.Saturation_UpperSat_ptlwne5dr3
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 327;
	
	  ;% rtP.Saturation_LowerSat_bhgwypt52q
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 328;
	
	  ;% rtP.Integrator_gainval_ly3ytcugg3
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 329;
	
	  ;% rtP.Constant_Value_abhuanbusd
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 330;
	
	  ;% rtP.Integrator_gainval_ie3iqjywto
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 331;
	
	  ;% rtP.Integrator_UpperSat_dh4d4fmkz3
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 332;
	
	  ;% rtP.Integrator_LowerSat_fyi041pxta
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 333;
	
	  ;% rtP.Saturation_UpperSat_ormg3rfkdo
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 334;
	
	  ;% rtP.Saturation_LowerSat_muwyyeshhe
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 335;
	
	  ;% rtP.Integrator_gainval_ai021icgbp
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 336;
	
	  ;% rtP.Constant_Value_exlhnub3yd
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 337;
	
	  ;% rtP.Integrator_gainval_faaohscdc3
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 338;
	
	  ;% rtP.Integrator_UpperSat_kidwxza1it
	  section.data(202).logicalSrcIdx = 201;
	  section.data(202).dtTransOffset = 339;
	
	  ;% rtP.Integrator_LowerSat_g5j2kqgd1m
	  section.data(203).logicalSrcIdx = 202;
	  section.data(203).dtTransOffset = 340;
	
	  ;% rtP.Saturation_UpperSat_bj2nuqdj2t
	  section.data(204).logicalSrcIdx = 203;
	  section.data(204).dtTransOffset = 341;
	
	  ;% rtP.Saturation_LowerSat_frbmey0f5g
	  section.data(205).logicalSrcIdx = 204;
	  section.data(205).dtTransOffset = 342;
	
	  ;% rtP.Integrator_gainval_agnx1rsywz
	  section.data(206).logicalSrcIdx = 205;
	  section.data(206).dtTransOffset = 343;
	
	  ;% rtP.GAIN_Gain_lu5wfgtmm3
	  section.data(207).logicalSrcIdx = 206;
	  section.data(207).dtTransOffset = 344;
	
	  ;% rtP.GAIN_Gain_lycms1qu4d
	  section.data(208).logicalSrcIdx = 207;
	  section.data(208).dtTransOffset = 345;
	
	  ;% rtP.Gain_Gain_a3lqnjnaie
	  section.data(209).logicalSrcIdx = 208;
	  section.data(209).dtTransOffset = 346;
	
	  ;% rtP.Gain1_Gain_kv2drkc1jq
	  section.data(210).logicalSrcIdx = 209;
	  section.data(210).dtTransOffset = 347;
	
	  ;% rtP.GAIN_Gain_esl4ijmu4b
	  section.data(211).logicalSrcIdx = 210;
	  section.data(211).dtTransOffset = 348;
	
	  ;% rtP.Gain11_Gain
	  section.data(212).logicalSrcIdx = 211;
	  section.data(212).dtTransOffset = 349;
	
	  ;% rtP.GAIN_Gain_ngbovfpstx
	  section.data(213).logicalSrcIdx = 212;
	  section.data(213).dtTransOffset = 350;
	
	  ;% rtP.Gain14_Gain
	  section.data(214).logicalSrcIdx = 213;
	  section.data(214).dtTransOffset = 351;
	
	  ;% rtP.GAIN_Gain_n5wmkwmtp0
	  section.data(215).logicalSrcIdx = 214;
	  section.data(215).dtTransOffset = 352;
	
	  ;% rtP.Gain17_Gain
	  section.data(216).logicalSrcIdx = 215;
	  section.data(216).dtTransOffset = 353;
	
	  ;% rtP.GAIN_Gain_ocgf55rpfm
	  section.data(217).logicalSrcIdx = 216;
	  section.data(217).dtTransOffset = 354;
	
	  ;% rtP.Gain8_Gain
	  section.data(218).logicalSrcIdx = 217;
	  section.data(218).dtTransOffset = 355;
	
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
    nTotSects     = 3;
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
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ieawijwcsm
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 287;
      section.data(287)  = dumData; %prealloc
      
	  ;% rtB.pk3fe41ded
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.j3nnkf33ca
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 24;
	
	  ;% rtB.klh5xjdddk
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 36;
	
	  ;% rtB.gq3rvdqlb4
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 37;
	
	  ;% rtB.nove0333w1
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 38;
	
	  ;% rtB.otwgtai0e3
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 39;
	
	  ;% rtB.jst1wdleti
	  section.data(7).logicalSrcIdx = 7;
	  section.data(7).dtTransOffset = 40;
	
	  ;% rtB.jittjyrdyi
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 41;
	
	  ;% rtB.l4cp2r2na2
	  section.data(9).logicalSrcIdx = 9;
	  section.data(9).dtTransOffset = 42;
	
	  ;% rtB.ohmgnj5xqj
	  section.data(10).logicalSrcIdx = 10;
	  section.data(10).dtTransOffset = 43;
	
	  ;% rtB.cf4a24iltw
	  section.data(11).logicalSrcIdx = 11;
	  section.data(11).dtTransOffset = 44;
	
	  ;% rtB.ovijgdd4i5
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 45;
	
	  ;% rtB.mfkdageusw
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 46;
	
	  ;% rtB.h1qge1ihq1
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 47;
	
	  ;% rtB.gmdx0gmqhr
	  section.data(15).logicalSrcIdx = 15;
	  section.data(15).dtTransOffset = 48;
	
	  ;% rtB.ifmseoanq0
	  section.data(16).logicalSrcIdx = 16;
	  section.data(16).dtTransOffset = 50;
	
	  ;% rtB.oetqfd0pi1
	  section.data(17).logicalSrcIdx = 17;
	  section.data(17).dtTransOffset = 51;
	
	  ;% rtB.g4zpnhujpe
	  section.data(18).logicalSrcIdx = 18;
	  section.data(18).dtTransOffset = 52;
	
	  ;% rtB.gtcchxvpps
	  section.data(19).logicalSrcIdx = 19;
	  section.data(19).dtTransOffset = 53;
	
	  ;% rtB.mobqz3bh01
	  section.data(20).logicalSrcIdx = 20;
	  section.data(20).dtTransOffset = 59;
	
	  ;% rtB.f3xrqr2bqr
	  section.data(21).logicalSrcIdx = 21;
	  section.data(21).dtTransOffset = 60;
	
	  ;% rtB.j1dprpcdq2
	  section.data(22).logicalSrcIdx = 22;
	  section.data(22).dtTransOffset = 61;
	
	  ;% rtB.gbzealeak2
	  section.data(23).logicalSrcIdx = 23;
	  section.data(23).dtTransOffset = 62;
	
	  ;% rtB.isgcnkp2g3
	  section.data(24).logicalSrcIdx = 24;
	  section.data(24).dtTransOffset = 63;
	
	  ;% rtB.blfe1jeuhj
	  section.data(25).logicalSrcIdx = 25;
	  section.data(25).dtTransOffset = 64;
	
	  ;% rtB.hyv235hdhv
	  section.data(26).logicalSrcIdx = 26;
	  section.data(26).dtTransOffset = 65;
	
	  ;% rtB.guwewsy53e
	  section.data(27).logicalSrcIdx = 27;
	  section.data(27).dtTransOffset = 66;
	
	  ;% rtB.hangcs5e4q
	  section.data(28).logicalSrcIdx = 28;
	  section.data(28).dtTransOffset = 67;
	
	  ;% rtB.hcxw2v1h5q
	  section.data(29).logicalSrcIdx = 29;
	  section.data(29).dtTransOffset = 68;
	
	  ;% rtB.hxcesrcaxs
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 69;
	
	  ;% rtB.jn3qzzjeuq
	  section.data(31).logicalSrcIdx = 31;
	  section.data(31).dtTransOffset = 70;
	
	  ;% rtB.a2nda0rlib
	  section.data(32).logicalSrcIdx = 32;
	  section.data(32).dtTransOffset = 71;
	
	  ;% rtB.lqhzivpz11
	  section.data(33).logicalSrcIdx = 33;
	  section.data(33).dtTransOffset = 72;
	
	  ;% rtB.j5dyuksjnm
	  section.data(34).logicalSrcIdx = 34;
	  section.data(34).dtTransOffset = 73;
	
	  ;% rtB.bplef3dxnq
	  section.data(35).logicalSrcIdx = 35;
	  section.data(35).dtTransOffset = 74;
	
	  ;% rtB.erkqnit1wv
	  section.data(36).logicalSrcIdx = 36;
	  section.data(36).dtTransOffset = 75;
	
	  ;% rtB.appycrz0rp
	  section.data(37).logicalSrcIdx = 37;
	  section.data(37).dtTransOffset = 76;
	
	  ;% rtB.jn5rmd4dvo
	  section.data(38).logicalSrcIdx = 38;
	  section.data(38).dtTransOffset = 78;
	
	  ;% rtB.cauosez44j
	  section.data(39).logicalSrcIdx = 39;
	  section.data(39).dtTransOffset = 79;
	
	  ;% rtB.gkqcyjdn00
	  section.data(40).logicalSrcIdx = 40;
	  section.data(40).dtTransOffset = 80;
	
	  ;% rtB.ibjatfeerz
	  section.data(41).logicalSrcIdx = 41;
	  section.data(41).dtTransOffset = 81;
	
	  ;% rtB.cpbkgwmthj
	  section.data(42).logicalSrcIdx = 42;
	  section.data(42).dtTransOffset = 82;
	
	  ;% rtB.jnbqjzgywz
	  section.data(43).logicalSrcIdx = 43;
	  section.data(43).dtTransOffset = 83;
	
	  ;% rtB.alj4dpbhob
	  section.data(44).logicalSrcIdx = 44;
	  section.data(44).dtTransOffset = 84;
	
	  ;% rtB.kqypmuwfo0
	  section.data(45).logicalSrcIdx = 45;
	  section.data(45).dtTransOffset = 85;
	
	  ;% rtB.kqtmnjsgam
	  section.data(46).logicalSrcIdx = 46;
	  section.data(46).dtTransOffset = 86;
	
	  ;% rtB.j31fpylddv
	  section.data(47).logicalSrcIdx = 47;
	  section.data(47).dtTransOffset = 87;
	
	  ;% rtB.gl1ivij0yb
	  section.data(48).logicalSrcIdx = 48;
	  section.data(48).dtTransOffset = 88;
	
	  ;% rtB.m3jycwj4xz
	  section.data(49).logicalSrcIdx = 49;
	  section.data(49).dtTransOffset = 89;
	
	  ;% rtB.hsggggwtm5
	  section.data(50).logicalSrcIdx = 50;
	  section.data(50).dtTransOffset = 90;
	
	  ;% rtB.c202fqhyxc
	  section.data(51).logicalSrcIdx = 51;
	  section.data(51).dtTransOffset = 91;
	
	  ;% rtB.c4dmfd3ngi
	  section.data(52).logicalSrcIdx = 52;
	  section.data(52).dtTransOffset = 92;
	
	  ;% rtB.hbedvtrsnp
	  section.data(53).logicalSrcIdx = 53;
	  section.data(53).dtTransOffset = 93;
	
	  ;% rtB.fvzicuhi4u
	  section.data(54).logicalSrcIdx = 54;
	  section.data(54).dtTransOffset = 94;
	
	  ;% rtB.m1ps3yqjbz
	  section.data(55).logicalSrcIdx = 55;
	  section.data(55).dtTransOffset = 95;
	
	  ;% rtB.h4sewwbs22
	  section.data(56).logicalSrcIdx = 56;
	  section.data(56).dtTransOffset = 96;
	
	  ;% rtB.kl45z53n04
	  section.data(57).logicalSrcIdx = 57;
	  section.data(57).dtTransOffset = 97;
	
	  ;% rtB.fve542by3u
	  section.data(58).logicalSrcIdx = 58;
	  section.data(58).dtTransOffset = 98;
	
	  ;% rtB.hongxggq3i
	  section.data(59).logicalSrcIdx = 59;
	  section.data(59).dtTransOffset = 100;
	
	  ;% rtB.bbphhn30rs
	  section.data(60).logicalSrcIdx = 60;
	  section.data(60).dtTransOffset = 101;
	
	  ;% rtB.lbccudm3ny
	  section.data(61).logicalSrcIdx = 61;
	  section.data(61).dtTransOffset = 102;
	
	  ;% rtB.e0qjdcsht3
	  section.data(62).logicalSrcIdx = 62;
	  section.data(62).dtTransOffset = 103;
	
	  ;% rtB.owvvmkpxl0
	  section.data(63).logicalSrcIdx = 63;
	  section.data(63).dtTransOffset = 104;
	
	  ;% rtB.biteowggfb
	  section.data(64).logicalSrcIdx = 64;
	  section.data(64).dtTransOffset = 105;
	
	  ;% rtB.kgov5zqwtr
	  section.data(65).logicalSrcIdx = 65;
	  section.data(65).dtTransOffset = 106;
	
	  ;% rtB.pjofez22sm
	  section.data(66).logicalSrcIdx = 66;
	  section.data(66).dtTransOffset = 107;
	
	  ;% rtB.i2u0a1gwhd
	  section.data(67).logicalSrcIdx = 67;
	  section.data(67).dtTransOffset = 108;
	
	  ;% rtB.lsz5cnktz4
	  section.data(68).logicalSrcIdx = 68;
	  section.data(68).dtTransOffset = 109;
	
	  ;% rtB.g0juyqsq32
	  section.data(69).logicalSrcIdx = 69;
	  section.data(69).dtTransOffset = 110;
	
	  ;% rtB.cirtybmflb
	  section.data(70).logicalSrcIdx = 70;
	  section.data(70).dtTransOffset = 111;
	
	  ;% rtB.mop4zig5wo
	  section.data(71).logicalSrcIdx = 71;
	  section.data(71).dtTransOffset = 112;
	
	  ;% rtB.e3utpjlh4a
	  section.data(72).logicalSrcIdx = 72;
	  section.data(72).dtTransOffset = 113;
	
	  ;% rtB.f2pnpawcdm
	  section.data(73).logicalSrcIdx = 73;
	  section.data(73).dtTransOffset = 114;
	
	  ;% rtB.oijqqlxvyg
	  section.data(74).logicalSrcIdx = 74;
	  section.data(74).dtTransOffset = 115;
	
	  ;% rtB.psg2d3ulvi
	  section.data(75).logicalSrcIdx = 75;
	  section.data(75).dtTransOffset = 116;
	
	  ;% rtB.o4k3u44nl4
	  section.data(76).logicalSrcIdx = 76;
	  section.data(76).dtTransOffset = 117;
	
	  ;% rtB.j21fe4hamr
	  section.data(77).logicalSrcIdx = 77;
	  section.data(77).dtTransOffset = 118;
	
	  ;% rtB.cta4ely3va
	  section.data(78).logicalSrcIdx = 78;
	  section.data(78).dtTransOffset = 119;
	
	  ;% rtB.nnvhvklxhr
	  section.data(79).logicalSrcIdx = 79;
	  section.data(79).dtTransOffset = 120;
	
	  ;% rtB.oxnawm14z4
	  section.data(80).logicalSrcIdx = 80;
	  section.data(80).dtTransOffset = 122;
	
	  ;% rtB.hp3kdyuspp
	  section.data(81).logicalSrcIdx = 81;
	  section.data(81).dtTransOffset = 123;
	
	  ;% rtB.gubbkenzxe
	  section.data(82).logicalSrcIdx = 82;
	  section.data(82).dtTransOffset = 124;
	
	  ;% rtB.etk2wovvbv
	  section.data(83).logicalSrcIdx = 83;
	  section.data(83).dtTransOffset = 125;
	
	  ;% rtB.f1ob31k1pi
	  section.data(84).logicalSrcIdx = 84;
	  section.data(84).dtTransOffset = 126;
	
	  ;% rtB.lszg3ivcf1
	  section.data(85).logicalSrcIdx = 85;
	  section.data(85).dtTransOffset = 127;
	
	  ;% rtB.ot5fmesjqg
	  section.data(86).logicalSrcIdx = 86;
	  section.data(86).dtTransOffset = 128;
	
	  ;% rtB.naknctmcqx
	  section.data(87).logicalSrcIdx = 87;
	  section.data(87).dtTransOffset = 129;
	
	  ;% rtB.p0evwnfym1
	  section.data(88).logicalSrcIdx = 88;
	  section.data(88).dtTransOffset = 130;
	
	  ;% rtB.gorad2wziy
	  section.data(89).logicalSrcIdx = 89;
	  section.data(89).dtTransOffset = 131;
	
	  ;% rtB.p5uqm4tulo
	  section.data(90).logicalSrcIdx = 90;
	  section.data(90).dtTransOffset = 132;
	
	  ;% rtB.agyiw10lae
	  section.data(91).logicalSrcIdx = 91;
	  section.data(91).dtTransOffset = 133;
	
	  ;% rtB.lusldgarmx
	  section.data(92).logicalSrcIdx = 92;
	  section.data(92).dtTransOffset = 134;
	
	  ;% rtB.fh55jet01v
	  section.data(93).logicalSrcIdx = 93;
	  section.data(93).dtTransOffset = 135;
	
	  ;% rtB.ddcumew3cn
	  section.data(94).logicalSrcIdx = 94;
	  section.data(94).dtTransOffset = 136;
	
	  ;% rtB.fau1h3urp2
	  section.data(95).logicalSrcIdx = 95;
	  section.data(95).dtTransOffset = 137;
	
	  ;% rtB.miypggsa3e
	  section.data(96).logicalSrcIdx = 96;
	  section.data(96).dtTransOffset = 138;
	
	  ;% rtB.hbhijaspkp
	  section.data(97).logicalSrcIdx = 97;
	  section.data(97).dtTransOffset = 139;
	
	  ;% rtB.fsrrzmku3j
	  section.data(98).logicalSrcIdx = 98;
	  section.data(98).dtTransOffset = 140;
	
	  ;% rtB.m1hwo11cjm
	  section.data(99).logicalSrcIdx = 99;
	  section.data(99).dtTransOffset = 141;
	
	  ;% rtB.gqeml2pouw
	  section.data(100).logicalSrcIdx = 100;
	  section.data(100).dtTransOffset = 142;
	
	  ;% rtB.k5jw43vz3d
	  section.data(101).logicalSrcIdx = 101;
	  section.data(101).dtTransOffset = 144;
	
	  ;% rtB.cxtkjg3ys4
	  section.data(102).logicalSrcIdx = 102;
	  section.data(102).dtTransOffset = 145;
	
	  ;% rtB.hj0hmqrh4a
	  section.data(103).logicalSrcIdx = 103;
	  section.data(103).dtTransOffset = 146;
	
	  ;% rtB.ntghirwfvx
	  section.data(104).logicalSrcIdx = 104;
	  section.data(104).dtTransOffset = 147;
	
	  ;% rtB.exgkqo5cql
	  section.data(105).logicalSrcIdx = 105;
	  section.data(105).dtTransOffset = 148;
	
	  ;% rtB.es4yz3gayy
	  section.data(106).logicalSrcIdx = 106;
	  section.data(106).dtTransOffset = 149;
	
	  ;% rtB.bgbmzzakwx
	  section.data(107).logicalSrcIdx = 107;
	  section.data(107).dtTransOffset = 150;
	
	  ;% rtB.hnqricx3sj
	  section.data(108).logicalSrcIdx = 108;
	  section.data(108).dtTransOffset = 151;
	
	  ;% rtB.l5v4lpwsc3
	  section.data(109).logicalSrcIdx = 109;
	  section.data(109).dtTransOffset = 152;
	
	  ;% rtB.czblalftv1
	  section.data(110).logicalSrcIdx = 110;
	  section.data(110).dtTransOffset = 153;
	
	  ;% rtB.fvd32u41b3
	  section.data(111).logicalSrcIdx = 111;
	  section.data(111).dtTransOffset = 154;
	
	  ;% rtB.o1uizp3fbz
	  section.data(112).logicalSrcIdx = 112;
	  section.data(112).dtTransOffset = 155;
	
	  ;% rtB.j2pimpbea4
	  section.data(113).logicalSrcIdx = 113;
	  section.data(113).dtTransOffset = 156;
	
	  ;% rtB.d0ncuxtedw
	  section.data(114).logicalSrcIdx = 114;
	  section.data(114).dtTransOffset = 157;
	
	  ;% rtB.fcted5fdfb
	  section.data(115).logicalSrcIdx = 115;
	  section.data(115).dtTransOffset = 158;
	
	  ;% rtB.n3k1jwldyd
	  section.data(116).logicalSrcIdx = 116;
	  section.data(116).dtTransOffset = 159;
	
	  ;% rtB.hu2rgr3hfe
	  section.data(117).logicalSrcIdx = 117;
	  section.data(117).dtTransOffset = 160;
	
	  ;% rtB.gglnc0muns
	  section.data(118).logicalSrcIdx = 118;
	  section.data(118).dtTransOffset = 161;
	
	  ;% rtB.lb0m24ncij
	  section.data(119).logicalSrcIdx = 119;
	  section.data(119).dtTransOffset = 162;
	
	  ;% rtB.krtkmxdgt1
	  section.data(120).logicalSrcIdx = 120;
	  section.data(120).dtTransOffset = 163;
	
	  ;% rtB.cck1e03vkh
	  section.data(121).logicalSrcIdx = 121;
	  section.data(121).dtTransOffset = 164;
	
	  ;% rtB.o2nuwl00sr
	  section.data(122).logicalSrcIdx = 122;
	  section.data(122).dtTransOffset = 166;
	
	  ;% rtB.ifhcacyg4u
	  section.data(123).logicalSrcIdx = 123;
	  section.data(123).dtTransOffset = 167;
	
	  ;% rtB.h4e0tjjx5q
	  section.data(124).logicalSrcIdx = 124;
	  section.data(124).dtTransOffset = 168;
	
	  ;% rtB.odv3pfsoo3
	  section.data(125).logicalSrcIdx = 125;
	  section.data(125).dtTransOffset = 169;
	
	  ;% rtB.g2qbpw1u2y
	  section.data(126).logicalSrcIdx = 126;
	  section.data(126).dtTransOffset = 170;
	
	  ;% rtB.k5wlkglx5b
	  section.data(127).logicalSrcIdx = 127;
	  section.data(127).dtTransOffset = 171;
	
	  ;% rtB.ct3vjnkgwf
	  section.data(128).logicalSrcIdx = 128;
	  section.data(128).dtTransOffset = 172;
	
	  ;% rtB.kw3ti0ac3i
	  section.data(129).logicalSrcIdx = 129;
	  section.data(129).dtTransOffset = 173;
	
	  ;% rtB.p4m03lz4zh
	  section.data(130).logicalSrcIdx = 130;
	  section.data(130).dtTransOffset = 174;
	
	  ;% rtB.bjzkus33nv
	  section.data(131).logicalSrcIdx = 131;
	  section.data(131).dtTransOffset = 175;
	
	  ;% rtB.izk2jsqvak
	  section.data(132).logicalSrcIdx = 132;
	  section.data(132).dtTransOffset = 176;
	
	  ;% rtB.hccdqvuxr4
	  section.data(133).logicalSrcIdx = 133;
	  section.data(133).dtTransOffset = 177;
	
	  ;% rtB.o4oomwxpja
	  section.data(134).logicalSrcIdx = 134;
	  section.data(134).dtTransOffset = 178;
	
	  ;% rtB.hhfq3iwysd
	  section.data(135).logicalSrcIdx = 135;
	  section.data(135).dtTransOffset = 179;
	
	  ;% rtB.iuontvn31z
	  section.data(136).logicalSrcIdx = 136;
	  section.data(136).dtTransOffset = 180;
	
	  ;% rtB.cugbbnxpbn
	  section.data(137).logicalSrcIdx = 137;
	  section.data(137).dtTransOffset = 181;
	
	  ;% rtB.oued3wu2st
	  section.data(138).logicalSrcIdx = 138;
	  section.data(138).dtTransOffset = 182;
	
	  ;% rtB.bydx0yzmcq
	  section.data(139).logicalSrcIdx = 139;
	  section.data(139).dtTransOffset = 183;
	
	  ;% rtB.jstshn3squ
	  section.data(140).logicalSrcIdx = 140;
	  section.data(140).dtTransOffset = 184;
	
	  ;% rtB.ft1d2ngzg4
	  section.data(141).logicalSrcIdx = 141;
	  section.data(141).dtTransOffset = 185;
	
	  ;% rtB.prvuto05ws
	  section.data(142).logicalSrcIdx = 142;
	  section.data(142).dtTransOffset = 186;
	
	  ;% rtB.kc4hjl50id
	  section.data(143).logicalSrcIdx = 143;
	  section.data(143).dtTransOffset = 188;
	
	  ;% rtB.pzhditorrc
	  section.data(144).logicalSrcIdx = 144;
	  section.data(144).dtTransOffset = 189;
	
	  ;% rtB.gmfp3wn4he
	  section.data(145).logicalSrcIdx = 145;
	  section.data(145).dtTransOffset = 190;
	
	  ;% rtB.j0ofeidlq4
	  section.data(146).logicalSrcIdx = 146;
	  section.data(146).dtTransOffset = 191;
	
	  ;% rtB.ffs2yfpdwl
	  section.data(147).logicalSrcIdx = 147;
	  section.data(147).dtTransOffset = 192;
	
	  ;% rtB.mfi0a5ivzy
	  section.data(148).logicalSrcIdx = 148;
	  section.data(148).dtTransOffset = 193;
	
	  ;% rtB.ejomoi4p0y
	  section.data(149).logicalSrcIdx = 149;
	  section.data(149).dtTransOffset = 194;
	
	  ;% rtB.d0vaq03wni
	  section.data(150).logicalSrcIdx = 150;
	  section.data(150).dtTransOffset = 195;
	
	  ;% rtB.n1srrzcvqf
	  section.data(151).logicalSrcIdx = 151;
	  section.data(151).dtTransOffset = 196;
	
	  ;% rtB.dfpgvlkj2f
	  section.data(152).logicalSrcIdx = 152;
	  section.data(152).dtTransOffset = 197;
	
	  ;% rtB.beojsagteu
	  section.data(153).logicalSrcIdx = 153;
	  section.data(153).dtTransOffset = 198;
	
	  ;% rtB.flgkpytalf
	  section.data(154).logicalSrcIdx = 154;
	  section.data(154).dtTransOffset = 199;
	
	  ;% rtB.cqcbggfyin
	  section.data(155).logicalSrcIdx = 155;
	  section.data(155).dtTransOffset = 200;
	
	  ;% rtB.a02mtaqnbs
	  section.data(156).logicalSrcIdx = 156;
	  section.data(156).dtTransOffset = 201;
	
	  ;% rtB.n4fa3h5blc
	  section.data(157).logicalSrcIdx = 157;
	  section.data(157).dtTransOffset = 202;
	
	  ;% rtB.kqgaourgku
	  section.data(158).logicalSrcIdx = 158;
	  section.data(158).dtTransOffset = 203;
	
	  ;% rtB.bjlw0updzr
	  section.data(159).logicalSrcIdx = 159;
	  section.data(159).dtTransOffset = 204;
	
	  ;% rtB.kpt0des132
	  section.data(160).logicalSrcIdx = 160;
	  section.data(160).dtTransOffset = 205;
	
	  ;% rtB.j2gvd10ake
	  section.data(161).logicalSrcIdx = 161;
	  section.data(161).dtTransOffset = 207;
	
	  ;% rtB.bncp344e40
	  section.data(162).logicalSrcIdx = 162;
	  section.data(162).dtTransOffset = 208;
	
	  ;% rtB.amzvbarht0
	  section.data(163).logicalSrcIdx = 163;
	  section.data(163).dtTransOffset = 209;
	
	  ;% rtB.lmb4eckheu
	  section.data(164).logicalSrcIdx = 164;
	  section.data(164).dtTransOffset = 210;
	
	  ;% rtB.dsfn4nqkol
	  section.data(165).logicalSrcIdx = 165;
	  section.data(165).dtTransOffset = 211;
	
	  ;% rtB.bxem2yp0nx
	  section.data(166).logicalSrcIdx = 166;
	  section.data(166).dtTransOffset = 212;
	
	  ;% rtB.bca4tdsxvy
	  section.data(167).logicalSrcIdx = 167;
	  section.data(167).dtTransOffset = 213;
	
	  ;% rtB.ptmdq2mkgh
	  section.data(168).logicalSrcIdx = 168;
	  section.data(168).dtTransOffset = 214;
	
	  ;% rtB.csjc4ym4ir
	  section.data(169).logicalSrcIdx = 169;
	  section.data(169).dtTransOffset = 215;
	
	  ;% rtB.nj2pffpsiu
	  section.data(170).logicalSrcIdx = 170;
	  section.data(170).dtTransOffset = 216;
	
	  ;% rtB.hgyzugskjl
	  section.data(171).logicalSrcIdx = 171;
	  section.data(171).dtTransOffset = 217;
	
	  ;% rtB.krr2znhfx3
	  section.data(172).logicalSrcIdx = 172;
	  section.data(172).dtTransOffset = 218;
	
	  ;% rtB.idgel3ts4j
	  section.data(173).logicalSrcIdx = 173;
	  section.data(173).dtTransOffset = 219;
	
	  ;% rtB.ivzbvvwgbn
	  section.data(174).logicalSrcIdx = 174;
	  section.data(174).dtTransOffset = 220;
	
	  ;% rtB.eahexcxwyu
	  section.data(175).logicalSrcIdx = 175;
	  section.data(175).dtTransOffset = 221;
	
	  ;% rtB.hj4ejv1dkh
	  section.data(176).logicalSrcIdx = 176;
	  section.data(176).dtTransOffset = 222;
	
	  ;% rtB.b10kyicgqg
	  section.data(177).logicalSrcIdx = 177;
	  section.data(177).dtTransOffset = 223;
	
	  ;% rtB.jhdz2gcqsm
	  section.data(178).logicalSrcIdx = 178;
	  section.data(178).dtTransOffset = 224;
	
	  ;% rtB.ajv0ck2p0k
	  section.data(179).logicalSrcIdx = 179;
	  section.data(179).dtTransOffset = 225;
	
	  ;% rtB.j1zo0zth2q
	  section.data(180).logicalSrcIdx = 180;
	  section.data(180).dtTransOffset = 226;
	
	  ;% rtB.msgq0a2jq0
	  section.data(181).logicalSrcIdx = 181;
	  section.data(181).dtTransOffset = 227;
	
	  ;% rtB.m4vz0qylqm
	  section.data(182).logicalSrcIdx = 182;
	  section.data(182).dtTransOffset = 228;
	
	  ;% rtB.iue0dcvznk
	  section.data(183).logicalSrcIdx = 183;
	  section.data(183).dtTransOffset = 229;
	
	  ;% rtB.hssorlwf4h
	  section.data(184).logicalSrcIdx = 184;
	  section.data(184).dtTransOffset = 230;
	
	  ;% rtB.nv1qketu4s
	  section.data(185).logicalSrcIdx = 185;
	  section.data(185).dtTransOffset = 231;
	
	  ;% rtB.dvianjcb3b
	  section.data(186).logicalSrcIdx = 186;
	  section.data(186).dtTransOffset = 232;
	
	  ;% rtB.iu2q3ztt2v
	  section.data(187).logicalSrcIdx = 187;
	  section.data(187).dtTransOffset = 233;
	
	  ;% rtB.edkl4fqdos
	  section.data(188).logicalSrcIdx = 188;
	  section.data(188).dtTransOffset = 234;
	
	  ;% rtB.m34tv4o2q4
	  section.data(189).logicalSrcIdx = 189;
	  section.data(189).dtTransOffset = 235;
	
	  ;% rtB.k3jckrrgpv
	  section.data(190).logicalSrcIdx = 190;
	  section.data(190).dtTransOffset = 236;
	
	  ;% rtB.amp02sxfjh
	  section.data(191).logicalSrcIdx = 191;
	  section.data(191).dtTransOffset = 237;
	
	  ;% rtB.ie35z2hdow
	  section.data(192).logicalSrcIdx = 192;
	  section.data(192).dtTransOffset = 238;
	
	  ;% rtB.ipiz0wbr2t
	  section.data(193).logicalSrcIdx = 193;
	  section.data(193).dtTransOffset = 239;
	
	  ;% rtB.i2nhy303vy
	  section.data(194).logicalSrcIdx = 194;
	  section.data(194).dtTransOffset = 240;
	
	  ;% rtB.dzlk0ptzql
	  section.data(195).logicalSrcIdx = 195;
	  section.data(195).dtTransOffset = 242;
	
	  ;% rtB.kginuwp13t
	  section.data(196).logicalSrcIdx = 196;
	  section.data(196).dtTransOffset = 243;
	
	  ;% rtB.knf0jcww13
	  section.data(197).logicalSrcIdx = 197;
	  section.data(197).dtTransOffset = 244;
	
	  ;% rtB.ethxpaa4c3
	  section.data(198).logicalSrcIdx = 198;
	  section.data(198).dtTransOffset = 245;
	
	  ;% rtB.df1ow2uit1
	  section.data(199).logicalSrcIdx = 199;
	  section.data(199).dtTransOffset = 246;
	
	  ;% rtB.p2eczjfkkm
	  section.data(200).logicalSrcIdx = 200;
	  section.data(200).dtTransOffset = 247;
	
	  ;% rtB.kecojrxdhq
	  section.data(201).logicalSrcIdx = 201;
	  section.data(201).dtTransOffset = 248;
	
	  ;% rtB.b24hv4z2vs
	  section.data(202).logicalSrcIdx = 202;
	  section.data(202).dtTransOffset = 249;
	
	  ;% rtB.hskakeq1mj
	  section.data(203).logicalSrcIdx = 203;
	  section.data(203).dtTransOffset = 250;
	
	  ;% rtB.dd5ie0ajbq
	  section.data(204).logicalSrcIdx = 204;
	  section.data(204).dtTransOffset = 251;
	
	  ;% rtB.f2pglahcji
	  section.data(205).logicalSrcIdx = 205;
	  section.data(205).dtTransOffset = 252;
	
	  ;% rtB.c22z5c25yo
	  section.data(206).logicalSrcIdx = 206;
	  section.data(206).dtTransOffset = 253;
	
	  ;% rtB.efupo3v3dn
	  section.data(207).logicalSrcIdx = 207;
	  section.data(207).dtTransOffset = 254;
	
	  ;% rtB.fv50yqfc3m
	  section.data(208).logicalSrcIdx = 208;
	  section.data(208).dtTransOffset = 255;
	
	  ;% rtB.lxtwqrxqs3
	  section.data(209).logicalSrcIdx = 209;
	  section.data(209).dtTransOffset = 257;
	
	  ;% rtB.fsrf3gmnjy
	  section.data(210).logicalSrcIdx = 210;
	  section.data(210).dtTransOffset = 258;
	
	  ;% rtB.g4q0iyarn1
	  section.data(211).logicalSrcIdx = 211;
	  section.data(211).dtTransOffset = 259;
	
	  ;% rtB.iqrs4lvoq4
	  section.data(212).logicalSrcIdx = 212;
	  section.data(212).dtTransOffset = 260;
	
	  ;% rtB.kdn0iimvo0
	  section.data(213).logicalSrcIdx = 213;
	  section.data(213).dtTransOffset = 261;
	
	  ;% rtB.htdxbjpvte
	  section.data(214).logicalSrcIdx = 214;
	  section.data(214).dtTransOffset = 262;
	
	  ;% rtB.jl3dzj4kme
	  section.data(215).logicalSrcIdx = 215;
	  section.data(215).dtTransOffset = 263;
	
	  ;% rtB.ejhwcpty3j
	  section.data(216).logicalSrcIdx = 216;
	  section.data(216).dtTransOffset = 264;
	
	  ;% rtB.fre4yqpfef
	  section.data(217).logicalSrcIdx = 217;
	  section.data(217).dtTransOffset = 265;
	
	  ;% rtB.oo510d4zw4
	  section.data(218).logicalSrcIdx = 218;
	  section.data(218).dtTransOffset = 266;
	
	  ;% rtB.nngijcbhxp
	  section.data(219).logicalSrcIdx = 219;
	  section.data(219).dtTransOffset = 267;
	
	  ;% rtB.psbnb2qkaq
	  section.data(220).logicalSrcIdx = 220;
	  section.data(220).dtTransOffset = 268;
	
	  ;% rtB.oho1nr4zyb
	  section.data(221).logicalSrcIdx = 221;
	  section.data(221).dtTransOffset = 269;
	
	  ;% rtB.cel0300ljr
	  section.data(222).logicalSrcIdx = 222;
	  section.data(222).dtTransOffset = 270;
	
	  ;% rtB.mn5trbnavt
	  section.data(223).logicalSrcIdx = 223;
	  section.data(223).dtTransOffset = 272;
	
	  ;% rtB.oldoahijz0
	  section.data(224).logicalSrcIdx = 224;
	  section.data(224).dtTransOffset = 273;
	
	  ;% rtB.hag3nww5j4
	  section.data(225).logicalSrcIdx = 225;
	  section.data(225).dtTransOffset = 274;
	
	  ;% rtB.psrgd4ccsi
	  section.data(226).logicalSrcIdx = 226;
	  section.data(226).dtTransOffset = 275;
	
	  ;% rtB.ljydzqytvi
	  section.data(227).logicalSrcIdx = 227;
	  section.data(227).dtTransOffset = 276;
	
	  ;% rtB.boniifyd0i
	  section.data(228).logicalSrcIdx = 228;
	  section.data(228).dtTransOffset = 277;
	
	  ;% rtB.fzxyftd4i0
	  section.data(229).logicalSrcIdx = 229;
	  section.data(229).dtTransOffset = 278;
	
	  ;% rtB.frpc4jznjz
	  section.data(230).logicalSrcIdx = 230;
	  section.data(230).dtTransOffset = 279;
	
	  ;% rtB.ezl0agc1ub
	  section.data(231).logicalSrcIdx = 231;
	  section.data(231).dtTransOffset = 280;
	
	  ;% rtB.iuvcixaj1u
	  section.data(232).logicalSrcIdx = 232;
	  section.data(232).dtTransOffset = 281;
	
	  ;% rtB.acifvashpf
	  section.data(233).logicalSrcIdx = 233;
	  section.data(233).dtTransOffset = 282;
	
	  ;% rtB.g5jcddbtus
	  section.data(234).logicalSrcIdx = 234;
	  section.data(234).dtTransOffset = 283;
	
	  ;% rtB.a12fn3eish
	  section.data(235).logicalSrcIdx = 235;
	  section.data(235).dtTransOffset = 284;
	
	  ;% rtB.nqspu5lpuf
	  section.data(236).logicalSrcIdx = 236;
	  section.data(236).dtTransOffset = 285;
	
	  ;% rtB.a5kxdqcvdg
	  section.data(237).logicalSrcIdx = 237;
	  section.data(237).dtTransOffset = 287;
	
	  ;% rtB.be0sk5wt1c
	  section.data(238).logicalSrcIdx = 238;
	  section.data(238).dtTransOffset = 288;
	
	  ;% rtB.hqu3j44etp
	  section.data(239).logicalSrcIdx = 239;
	  section.data(239).dtTransOffset = 289;
	
	  ;% rtB.mczuwr2djk
	  section.data(240).logicalSrcIdx = 240;
	  section.data(240).dtTransOffset = 290;
	
	  ;% rtB.hjfvmptswk
	  section.data(241).logicalSrcIdx = 241;
	  section.data(241).dtTransOffset = 291;
	
	  ;% rtB.dkr2klyqik
	  section.data(242).logicalSrcIdx = 242;
	  section.data(242).dtTransOffset = 292;
	
	  ;% rtB.dp4vbgasuh
	  section.data(243).logicalSrcIdx = 243;
	  section.data(243).dtTransOffset = 293;
	
	  ;% rtB.lh4ky3tqcp
	  section.data(244).logicalSrcIdx = 244;
	  section.data(244).dtTransOffset = 294;
	
	  ;% rtB.nflabcywl5
	  section.data(245).logicalSrcIdx = 245;
	  section.data(245).dtTransOffset = 295;
	
	  ;% rtB.bx0hsvyjif
	  section.data(246).logicalSrcIdx = 246;
	  section.data(246).dtTransOffset = 296;
	
	  ;% rtB.aag31ygyq2
	  section.data(247).logicalSrcIdx = 247;
	  section.data(247).dtTransOffset = 297;
	
	  ;% rtB.hg0p25ayja
	  section.data(248).logicalSrcIdx = 248;
	  section.data(248).dtTransOffset = 298;
	
	  ;% rtB.obj4q050ww
	  section.data(249).logicalSrcIdx = 249;
	  section.data(249).dtTransOffset = 299;
	
	  ;% rtB.lv3dk0vxjj
	  section.data(250).logicalSrcIdx = 250;
	  section.data(250).dtTransOffset = 300;
	
	  ;% rtB.fixkmettoc
	  section.data(251).logicalSrcIdx = 251;
	  section.data(251).dtTransOffset = 304;
	
	  ;% rtB.asixhrrsif
	  section.data(252).logicalSrcIdx = 252;
	  section.data(252).dtTransOffset = 308;
	
	  ;% rtB.poqyqx1ybu
	  section.data(253).logicalSrcIdx = 253;
	  section.data(253).dtTransOffset = 312;
	
	  ;% rtB.e3jijk5hzs
	  section.data(254).logicalSrcIdx = 254;
	  section.data(254).dtTransOffset = 316;
	
	  ;% rtB.kbokax0jy0
	  section.data(255).logicalSrcIdx = 255;
	  section.data(255).dtTransOffset = 320;
	
	  ;% rtB.hdabgtjkhh
	  section.data(256).logicalSrcIdx = 256;
	  section.data(256).dtTransOffset = 324;
	
	  ;% rtB.adplijeiu3
	  section.data(257).logicalSrcIdx = 257;
	  section.data(257).dtTransOffset = 325;
	
	  ;% rtB.k2vziqgdpi
	  section.data(258).logicalSrcIdx = 258;
	  section.data(258).dtTransOffset = 329;
	
	  ;% rtB.fkmyqachua
	  section.data(259).logicalSrcIdx = 259;
	  section.data(259).dtTransOffset = 330;
	
	  ;% rtB.pr04rv033g
	  section.data(260).logicalSrcIdx = 260;
	  section.data(260).dtTransOffset = 334;
	
	  ;% rtB.jhnfskyafx
	  section.data(261).logicalSrcIdx = 261;
	  section.data(261).dtTransOffset = 335;
	
	  ;% rtB.a2py0rn10b
	  section.data(262).logicalSrcIdx = 262;
	  section.data(262).dtTransOffset = 339;
	
	  ;% rtB.j132ytumpt
	  section.data(263).logicalSrcIdx = 263;
	  section.data(263).dtTransOffset = 340;
	
	  ;% rtB.ine3qiqxwe
	  section.data(264).logicalSrcIdx = 264;
	  section.data(264).dtTransOffset = 344;
	
	  ;% rtB.aya0m3v3i0
	  section.data(265).logicalSrcIdx = 265;
	  section.data(265).dtTransOffset = 345;
	
	  ;% rtB.eww2mhxkm5
	  section.data(266).logicalSrcIdx = 266;
	  section.data(266).dtTransOffset = 349;
	
	  ;% rtB.jkh24e405z
	  section.data(267).logicalSrcIdx = 267;
	  section.data(267).dtTransOffset = 350;
	
	  ;% rtB.lhnhzraedi
	  section.data(268).logicalSrcIdx = 268;
	  section.data(268).dtTransOffset = 354;
	
	  ;% rtB.ngr0xxfpft
	  section.data(269).logicalSrcIdx = 269;
	  section.data(269).dtTransOffset = 390;
	
	  ;% rtB.acli4c4thv
	  section.data(270).logicalSrcIdx = 270;
	  section.data(270).dtTransOffset = 408;
	
	  ;% rtB.knzgt5pcsx
	  section.data(271).logicalSrcIdx = 271;
	  section.data(271).dtTransOffset = 412;
	
	  ;% rtB.orzbfuvelk
	  section.data(272).logicalSrcIdx = 272;
	  section.data(272).dtTransOffset = 416;
	
	  ;% rtB.cvgkgbsato
	  section.data(273).logicalSrcIdx = 273;
	  section.data(273).dtTransOffset = 420;
	
	  ;% rtB.nfrqasfoje
	  section.data(274).logicalSrcIdx = 274;
	  section.data(274).dtTransOffset = 424;
	
	  ;% rtB.dvzsxsm21d
	  section.data(275).logicalSrcIdx = 275;
	  section.data(275).dtTransOffset = 428;
	
	  ;% rtB.ng11s4vjyc
	  section.data(276).logicalSrcIdx = 276;
	  section.data(276).dtTransOffset = 432;
	
	  ;% rtB.k3y4oqcihk
	  section.data(277).logicalSrcIdx = 277;
	  section.data(277).dtTransOffset = 433;
	
	  ;% rtB.pigztqhtgk
	  section.data(278).logicalSrcIdx = 278;
	  section.data(278).dtTransOffset = 434;
	
	  ;% rtB.exs0n10ysv
	  section.data(279).logicalSrcIdx = 279;
	  section.data(279).dtTransOffset = 435;
	
	  ;% rtB.k04c00gsa1
	  section.data(280).logicalSrcIdx = 280;
	  section.data(280).dtTransOffset = 436;
	
	  ;% rtB.pbzaxgmwaq
	  section.data(281).logicalSrcIdx = 281;
	  section.data(281).dtTransOffset = 437;
	
	  ;% rtB.nqru1gad04
	  section.data(282).logicalSrcIdx = 282;
	  section.data(282).dtTransOffset = 438;
	
	  ;% rtB.f2os4pvb41
	  section.data(283).logicalSrcIdx = 283;
	  section.data(283).dtTransOffset = 439;
	
	  ;% rtB.n55lwtabvy
	  section.data(284).logicalSrcIdx = 284;
	  section.data(284).dtTransOffset = 440;
	
	  ;% rtB.o4ftyptaai
	  section.data(285).logicalSrcIdx = 285;
	  section.data(285).dtTransOffset = 441;
	
	  ;% rtB.lspzt2bsxt
	  section.data(286).logicalSrcIdx = 286;
	  section.data(286).dtTransOffset = 442;
	
	  ;% rtB.nlxpxyr5sf
	  section.data(287).logicalSrcIdx = 287;
	  section.data(287).dtTransOffset = 443;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtB.jdslzqjqun
	  section.data(1).logicalSrcIdx = 288;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.phkrya1ay3
	  section.data(2).logicalSrcIdx = 289;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.oom55hkhas
	  section.data(3).logicalSrcIdx = 290;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.ffarlqqvec
	  section.data(4).logicalSrcIdx = 291;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.jzdyk043zo
	  section.data(5).logicalSrcIdx = 292;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.jj1lgxwadp
	  section.data(6).logicalSrcIdx = 293;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.f3gocd01pz
	  section.data(7).logicalSrcIdx = 294;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.gog2qbskx2
	  section.data(8).logicalSrcIdx = 295;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.l3pf5coce3
	  section.data(9).logicalSrcIdx = 296;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.kqpqdscv03
	  section.data(10).logicalSrcIdx = 297;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.lbqadsyant
	  section.data(11).logicalSrcIdx = 298;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.jqeseokzby
	  section.data(12).logicalSrcIdx = 299;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
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
    nTotSects     = 7;
    sectIdxOffset = 3;
    
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
      section.nData     = 64;
      section.data(64)  = dumData; %prealloc
      
	  ;% rtDW.a5b2pf1ca1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pmanv5vib4
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.a0jorff1ss
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.bxa45rw5vc
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.b3tylb2ldo
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.fufi0up1jf
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.nqxlzyezrj
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.msly0lvz1t
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.mc5mpe4xnm
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.giau5bnyxy
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.lmbrjj1yo3
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.fr123draxv
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.bxdnouemfh
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.celnn5zc2p
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.isrvloycz1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.hnsejpj33e
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.jiah2uksw0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.naiwehmog1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.ooo2af04bi
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.ocn5n2oria
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.hxjqpdvr2h
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.nlstabwqbk
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.eja5dvqkvx
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.aryinoifit
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.jww4ubou4q
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.ih51fkzbrp
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.cprte2otvn
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.ozwizziqkv
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.f34n5dy3xh
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.i1v5qjzuaj
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.hfbuq22el5
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.d3lfdhwsjw
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.jd4u0spqsv
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.f1v3bebsxz
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.ahajwvzqnu
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.haj010meq5
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.axhmkl11mv
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.hjd4dlpjpx
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.fdqcpdb3br
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.ianiojkna1
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.nwgyu0nfcm
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.l4urcs2vqx
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.cx3lhcr5hy
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.jvuzjfeloy
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.ed3jdhmuic
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.fhlkawvcxc
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.iyutm2c4la
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.k5yzqucy20
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtDW.eufofduh2l
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtDW.idbi3jnfkp
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtDW.g3umqfw1p4
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtDW.hfofwehec0
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtDW.mlkhe43blf
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtDW.kgy31g3lpf
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtDW.cgjfcelwsi
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtDW.jpbs3jsulr
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 56;
	
	  ;% rtDW.oye5t2ga5w
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 58;
	
	  ;% rtDW.pwfr10qjji
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% rtDW.jfoy3lslhi
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 62;
	
	  ;% rtDW.hu4bgelwvg
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 64;
	
	  ;% rtDW.mq0xsn5npj
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 66;
	
	  ;% rtDW.ndyjoniux5
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 67;
	
	  ;% rtDW.cawjwjevhp
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 68;
	
	  ;% rtDW.jcbre1riq4
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 69;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% rtDW.oiaqjmfdle
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.fh2yevo3ke
	  section.data(2).logicalSrcIdx = 65;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.orvixz3xj4
	  section.data(3).logicalSrcIdx = 66;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.d3jorcrerr
	  section.data(4).logicalSrcIdx = 67;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ddnvu45s54
	  section.data(5).logicalSrcIdx = 68;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.nplecvujsr
	  section.data(6).logicalSrcIdx = 69;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.mnmdamtgkb
	  section.data(7).logicalSrcIdx = 70;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.cwe4k4yovf
	  section.data(8).logicalSrcIdx = 71;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.cdodfvy2hp
	  section.data(9).logicalSrcIdx = 72;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.ebhraao2pr
	  section.data(10).logicalSrcIdx = 73;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.nmmvz2iapr.TimePtr
	  section.data(11).logicalSrcIdx = 74;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.hoinjnpu05
	  section.data(12).logicalSrcIdx = 75;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.fdriqx01pi
	  section.data(13).logicalSrcIdx = 76;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.fkez4vs1k0
	  section.data(14).logicalSrcIdx = 77;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.k2145vc3fw
	  section.data(15).logicalSrcIdx = 78;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.hdrpsidvfs
	  section.data(16).logicalSrcIdx = 79;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.pfsbl0alkz
	  section.data(17).logicalSrcIdx = 80;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.cacbslwxfv
	  section.data(18).logicalSrcIdx = 81;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.mkukpfbnwo
	  section.data(19).logicalSrcIdx = 82;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.cp5t5e324y
	  section.data(20).logicalSrcIdx = 83;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.i03x4qxfxb
	  section.data(21).logicalSrcIdx = 84;
	  section.data(21).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtDW.gntbh4nenu
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.gsycnb1f2n
	  section.data(2).logicalSrcIdx = 86;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.gwwo3yqkan.PrevIndex
	  section.data(3).logicalSrcIdx = 87;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.e2yhe4nhkm.AcquireOK
	  section.data(4).logicalSrcIdx = 88;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.fvlncx4bnx.AcquireOK
	  section.data(5).logicalSrcIdx = 89;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.p5p3d1ybah.AcquireOK
	  section.data(6).logicalSrcIdx = 90;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.byciun1ksb.AcquireOK
	  section.data(7).logicalSrcIdx = 91;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.kbak3eiue3.AcquireOK
	  section.data(8).logicalSrcIdx = 92;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ef1saldt45.AcquireOK
	  section.data(9).logicalSrcIdx = 93;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.jlxuucsfm3
	  section.data(10).logicalSrcIdx = 94;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.lujs0ibj0y
	  section.data(11).logicalSrcIdx = 95;
	  section.data(11).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.fgqemyl0yo
	  section.data(1).logicalSrcIdx = 96;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.em0fyfhvo3
	  section.data(1).logicalSrcIdx = 97;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.klsm2newc5
	  section.data(2).logicalSrcIdx = 98;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ambny1b3cd
	  section.data(3).logicalSrcIdx = 99;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.axpxfydig1
	  section.data(4).logicalSrcIdx = 100;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.eu1vn25ayr
	  section.data(5).logicalSrcIdx = 101;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ie2533k5zy
	  section.data(6).logicalSrcIdx = 102;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.i03sqzsz3t
	  section.data(7).logicalSrcIdx = 103;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.a4uh1p4rvk
	  section.data(8).logicalSrcIdx = 104;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.bijsz2zuxo
	  section.data(9).logicalSrcIdx = 105;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.pwf2bkifeq
	  section.data(10).logicalSrcIdx = 106;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.px4tkgbjaa
	  section.data(11).logicalSrcIdx = 107;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.ehsgo0dd2g
	  section.data(12).logicalSrcIdx = 108;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.drj4xadjzp
	  section.data(1).logicalSrcIdx = 109;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ilqh1aaypb
	  section.data(2).logicalSrcIdx = 110;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.i0arhlwpkr
	  section.data(3).logicalSrcIdx = 111;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.fd1b2b35qg
	  section.data(4).logicalSrcIdx = 112;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.lbazymzajn
	  section.data(5).logicalSrcIdx = 113;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.h1vxeb0scs
	  section.data(6).logicalSrcIdx = 114;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.lhb2tg0f4z
	  section.data(7).logicalSrcIdx = 115;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.cv3ju4xxmy
	  section.data(8).logicalSrcIdx = 116;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.anoo3rym4l
	  section.data(9).logicalSrcIdx = 117;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.azsb3bde3k
	  section.data(10).logicalSrcIdx = 118;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.akfkxrbuhe
	  section.data(11).logicalSrcIdx = 119;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.maqw1lhppg
	  section.data(12).logicalSrcIdx = 120;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.ne4ixyvuq5
	  section.data(1).logicalSrcIdx = 121;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nd5ghoegof
	  section.data(2).logicalSrcIdx = 122;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.l2ucevrhxd
	  section.data(3).logicalSrcIdx = 123;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.cfc5djgsvc
	  section.data(4).logicalSrcIdx = 124;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
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


  targMap.checksum0 = 2932799438;
  targMap.checksum1 = 4130175437;
  targMap.checksum2 = 1242794333;
  targMap.checksum3 = 3298442912;

