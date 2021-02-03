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
      section.nData     = 212;
      section.data(212)  = dumData; %prealloc
      
	  ;% rtP.PIDController_D
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.PIDController1_D
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.PIDController2_D
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.PIDController3_D
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.PIDController4_D
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.PIDController5_D
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.PIDController_I
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.PIDController1_I
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.PIDController2_I
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.PIDController3_I
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.PIDController4_I
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.PIDController5_I
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.PIDController_I_a0r5e54zkz
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.PIDController1_I_jo4mb24iod
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.PIDController2_I_gwszoiqkdx
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.PIDController3_I_bob1q1d43e
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.PIDController4_I_lqglmmjoiy
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.PIDController5_I_mpy1uti4u1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.PIDController_InitialConditionForFilter
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.PIDController1_InitialConditionForFilter
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.PIDController2_InitialConditionForFilter
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.PIDController3_InitialConditionForFilter
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.PIDController4_InitialConditionForFilter
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.PIDController5_InitialConditionForFilter
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.PIDController1_InitialConditionForIntegrator
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.PIDController2_InitialConditionForIntegrator
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.PIDController3_InitialConditionForIntegrator
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.PIDController4_InitialConditionForIntegrator
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtP.PIDController5_InitialConditionForIntegrator
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator_k0rtcmcmwi
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtP.PIDController1_InitialConditionForIntegrator_dtdxu53dzy
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtP.PIDController2_InitialConditionForIntegrator_oybt1x1ywj
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtP.PIDController3_InitialConditionForIntegrator_grlnuwimvj
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtP.PIDController4_InitialConditionForIntegrator_aq511wqjoh
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtP.PIDController5_InitialConditionForIntegrator_pvky5nx2t5
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_iadlz4dfqb
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_dj2wq5ptg4
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_ix20lvg4ww
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_dqv5icbpo4
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_jebkrx2q00
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_bvtursactz
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_ldbi3kk5oi
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_ijtsxy1si3
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_nfdjuhre1x
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_kznnc2puht
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous_K_elbapaqm2w
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtP.PIDController_N
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtP.PIDController1_N
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtP.PIDController2_N
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtP.PIDController3_N
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtP.PIDController4_N
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtP.PIDController5_N
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtP.PIDController_P
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtP.PIDController1_P
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtP.PIDController2_P
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtP.PIDController3_P
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtP.PIDController4_P
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtP.PIDController5_P
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtP.PIDController_P_mq1jsyv5uw
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtP.PIDController1_P_dbvxmh3exo
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtP.PIDController2_P_b4eyl414uz
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtP.PIDController3_P_igsxoi0cjh
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtP.PIDController4_P_a1czxzuwsb
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtP.PIDController5_P_dzwlsrlmqy
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtP.filter_tc
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtP.filter1_tc
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtP.filter2_tc
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtP.filter3_tc
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtP.filter4_tc
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 70;
	
	  ;% rtP.filter5_tc
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 71;
	
	  ;% rtP.filter_tc_kcv10akjdr
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 72;
	
	  ;% rtP.filter1_tc_exm4toz5mi
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 73;
	
	  ;% rtP.filter2_tc_mwhxojqmwa
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 74;
	
	  ;% rtP.filter3_tc_b0rftn00ld
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 75;
	
	  ;% rtP.filter4_tc_m5dsazuczp
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 76;
	
	  ;% rtP.filter5_tc_cs0psgs55d
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 77;
	
	  ;% rtP.Constant_Value
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 78;
	
	  ;% rtP.FromWs_Time0
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 79;
	
	  ;% rtP.FromWs_Data0
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 99;
	
	  ;% rtP.Integrator_gainval
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 219;
	
	  ;% rtP.Integrator_UpperSat
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 220;
	
	  ;% rtP.Integrator_LowerSat
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 221;
	
	  ;% rtP.Saturation_UpperSat
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 222;
	
	  ;% rtP.Saturation_LowerSat
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 223;
	
	  ;% rtP.GAIN_Gain
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 224;
	
	  ;% rtP.Gain_Gain
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 225;
	
	  ;% rtP.Filter_gainval
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 226;
	
	  ;% rtP.Integrator_gainval_npglpy4vwg
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 227;
	
	  ;% rtP.Constant_Value_elzocfzv3z
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 228;
	
	  ;% rtP.Integrator_gainval_o3lqevhiv0
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 229;
	
	  ;% rtP.Integrator_UpperSat_lfmj5hqb2j
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 230;
	
	  ;% rtP.Integrator_LowerSat_k5sgxqrrjs
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 231;
	
	  ;% rtP.Saturation_UpperSat_o5sqceaxad
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 232;
	
	  ;% rtP.Saturation_LowerSat_aqldnegvun
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 233;
	
	  ;% rtP.GAIN_Gain_bwl2tn4amr
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 234;
	
	  ;% rtP.Gain1_Gain
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 235;
	
	  ;% rtP.Filter_gainval_ep02h3uqne
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 236;
	
	  ;% rtP.Integrator_gainval_fkgi2urzne
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 237;
	
	  ;% rtP.Constant_Value_ccyvr50cmy
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 238;
	
	  ;% rtP.Integrator_gainval_m2kwfrohvf
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 239;
	
	  ;% rtP.Integrator_UpperSat_mkchvcaeor
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 240;
	
	  ;% rtP.Integrator_LowerSat_al00fjl4v2
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 241;
	
	  ;% rtP.Saturation_UpperSat_drbu1b01ue
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 242;
	
	  ;% rtP.Saturation_LowerSat_e0wofzrvyc
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 243;
	
	  ;% rtP.GAIN_Gain_nohv0ojvel
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 244;
	
	  ;% rtP.Gain2_Gain
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 245;
	
	  ;% rtP.Filter_gainval_jzpusmtczf
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 246;
	
	  ;% rtP.Integrator_gainval_ni1bbseuao
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 247;
	
	  ;% rtP.Constant_Value_ltfu2n3aso
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 248;
	
	  ;% rtP.Integrator_gainval_axbx4gdp5p
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 249;
	
	  ;% rtP.Integrator_UpperSat_bysv0peofj
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 250;
	
	  ;% rtP.Integrator_LowerSat_cxf0fnk0y4
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 251;
	
	  ;% rtP.Saturation_UpperSat_e0c2zptto2
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 252;
	
	  ;% rtP.Saturation_LowerSat_cangmrc0kb
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 253;
	
	  ;% rtP.GAIN_Gain_ecfhfkgqbl
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 254;
	
	  ;% rtP.Gain3_Gain
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 255;
	
	  ;% rtP.Filter_gainval_o0axdf1zsd
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 256;
	
	  ;% rtP.Integrator_gainval_aawupoadui
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 257;
	
	  ;% rtP.Constant_Value_ioexv0z50z
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 258;
	
	  ;% rtP.Integrator_gainval_lxv2frdbtv
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 259;
	
	  ;% rtP.Integrator_UpperSat_cwwfgeyo4e
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 260;
	
	  ;% rtP.Integrator_LowerSat_gjgwydu10i
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 261;
	
	  ;% rtP.Saturation_UpperSat_eznfskdcrl
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 262;
	
	  ;% rtP.Saturation_LowerSat_esw3yahypq
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 263;
	
	  ;% rtP.GAIN_Gain_piwslcsoon
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 264;
	
	  ;% rtP.Gain4_Gain
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 265;
	
	  ;% rtP.Filter_gainval_djvq3m5rlx
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 266;
	
	  ;% rtP.Integrator_gainval_mmczkrctnd
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 267;
	
	  ;% rtP.Constant_Value_hhcejr3ea0
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 268;
	
	  ;% rtP.Integrator_gainval_eohgzrg3vd
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 269;
	
	  ;% rtP.Integrator_UpperSat_ebd22dx1d1
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 270;
	
	  ;% rtP.Integrator_LowerSat_h5qrw1zwan
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 271;
	
	  ;% rtP.Saturation_UpperSat_fp4onlvepw
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 272;
	
	  ;% rtP.Saturation_LowerSat_aku5h2443e
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 273;
	
	  ;% rtP.GAIN_Gain_jkkozojh3f
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 274;
	
	  ;% rtP.Gain5_Gain
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 275;
	
	  ;% rtP.Filter_gainval_azvm5wbpik
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 276;
	
	  ;% rtP.Integrator_gainval_jrxbs0ybil
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 277;
	
	  ;% rtP.GAIN_Gain_mulmeca5gq
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 278;
	
	  ;% rtP.Gain10_Gain
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 279;
	
	  ;% rtP.Gain12_Gain
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 280;
	
	  ;% rtP.GAIN_Gain_l2gp1dcapi
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 281;
	
	  ;% rtP.Gain13_Gain
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 282;
	
	  ;% rtP.Gain15_Gain
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 283;
	
	  ;% rtP.GAIN_Gain_eewbit12qx
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 284;
	
	  ;% rtP.Gain16_Gain
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 285;
	
	  ;% rtP.Gain2_Gain_iktjgimoln
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 286;
	
	  ;% rtP.Gain3_Gain_hzczzgk3bt
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 287;
	
	  ;% rtP.GAIN_Gain_gj1zc25hs4
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 288;
	
	  ;% rtP.Gain4_Gain_gkiyqinsa1
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 289;
	
	  ;% rtP.GAIN_Gain_e3s5mnjjuy
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 290;
	
	  ;% rtP.Gain5_Gain_avuh005k0g
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 291;
	
	  ;% rtP.Gain6_Gain
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 292;
	
	  ;% rtP.GAIN_Gain_bka4fo5kzw
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 293;
	
	  ;% rtP.Gain7_Gain
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 294;
	
	  ;% rtP.Gain9_Gain
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 295;
	
	  ;% rtP.Constant_Value_lm1lurr4hy
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 296;
	
	  ;% rtP.Integrator_gainval_h3xna5sfll
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 297;
	
	  ;% rtP.Integrator_UpperSat_hxosttrbn1
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 298;
	
	  ;% rtP.Integrator_LowerSat_njt0zyqb4b
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 299;
	
	  ;% rtP.Saturation_UpperSat_irbb5ee3qe
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 300;
	
	  ;% rtP.Saturation_LowerSat_avgaf5ds21
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 301;
	
	  ;% rtP.Integrator_gainval_otmviw4jih
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 302;
	
	  ;% rtP.Constant_Value_kzhoi3f11e
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 303;
	
	  ;% rtP.Integrator_gainval_g1pivvolan
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 304;
	
	  ;% rtP.Integrator_UpperSat_pfwih5q0ig
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 305;
	
	  ;% rtP.Integrator_LowerSat_pbd52ykhos
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 306;
	
	  ;% rtP.Saturation_UpperSat_jfp3gm1jww
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 307;
	
	  ;% rtP.Saturation_LowerSat_nkqwrbgzd1
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 308;
	
	  ;% rtP.Integrator_gainval_mgqsdlg1p3
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 309;
	
	  ;% rtP.Constant_Value_dstjrw10qx
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 310;
	
	  ;% rtP.Integrator_gainval_m0oovljwbz
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 311;
	
	  ;% rtP.Integrator_UpperSat_edcqyime1g
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 312;
	
	  ;% rtP.Integrator_LowerSat_kapqoyjcmn
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 313;
	
	  ;% rtP.Saturation_UpperSat_cu3m2bizko
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 314;
	
	  ;% rtP.Saturation_LowerSat_acc4hmqzqd
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 315;
	
	  ;% rtP.Integrator_gainval_ml0fjnpxz3
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 316;
	
	  ;% rtP.Constant_Value_p51hfq4twj
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 317;
	
	  ;% rtP.Integrator_gainval_enyfdvqy5k
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 318;
	
	  ;% rtP.Integrator_UpperSat_lkw0yc02po
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 319;
	
	  ;% rtP.Integrator_LowerSat_indtf15swa
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 320;
	
	  ;% rtP.Saturation_UpperSat_aejz2ybmfq
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 321;
	
	  ;% rtP.Saturation_LowerSat_fbnlwwz3ni
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 322;
	
	  ;% rtP.Integrator_gainval_kekw1rm401
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 323;
	
	  ;% rtP.Constant_Value_bg1z0fnmqv
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 324;
	
	  ;% rtP.Integrator_gainval_o2js2uvnfz
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 325;
	
	  ;% rtP.Integrator_UpperSat_lfd3uwwmqw
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 326;
	
	  ;% rtP.Integrator_LowerSat_ix4wayzgyy
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 327;
	
	  ;% rtP.Saturation_UpperSat_izwihy1hdf
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 328;
	
	  ;% rtP.Saturation_LowerSat_gakz0d2xnn
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 329;
	
	  ;% rtP.Integrator_gainval_lbry4slowr
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 330;
	
	  ;% rtP.Constant_Value_odca2fbdaq
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 331;
	
	  ;% rtP.Integrator_gainval_i4ujstbkuh
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 332;
	
	  ;% rtP.Integrator_UpperSat_gjz1pvjay2
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 333;
	
	  ;% rtP.Integrator_LowerSat_hwnksdfkmv
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 334;
	
	  ;% rtP.Saturation_UpperSat_i55r4kuqpb
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 335;
	
	  ;% rtP.Saturation_LowerSat_nssiijzpqc
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 336;
	
	  ;% rtP.Integrator_gainval_m1aaboyqi5
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 337;
	
	  ;% rtP.GAIN_Gain_lnpq3d2zgo
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 338;
	
	  ;% rtP.GAIN_Gain_ajv2eupdqg
	  section.data(202).logicalSrcIdx = 201;
	  section.data(202).dtTransOffset = 339;
	
	  ;% rtP.Gain_Gain_lqodkkl00f
	  section.data(203).logicalSrcIdx = 202;
	  section.data(203).dtTransOffset = 340;
	
	  ;% rtP.Gain1_Gain_mcme34rskr
	  section.data(204).logicalSrcIdx = 203;
	  section.data(204).dtTransOffset = 341;
	
	  ;% rtP.GAIN_Gain_bjo5gzmoax
	  section.data(205).logicalSrcIdx = 204;
	  section.data(205).dtTransOffset = 342;
	
	  ;% rtP.Gain11_Gain
	  section.data(206).logicalSrcIdx = 205;
	  section.data(206).dtTransOffset = 343;
	
	  ;% rtP.GAIN_Gain_hhtmm14nxk
	  section.data(207).logicalSrcIdx = 206;
	  section.data(207).dtTransOffset = 344;
	
	  ;% rtP.Gain14_Gain
	  section.data(208).logicalSrcIdx = 207;
	  section.data(208).dtTransOffset = 345;
	
	  ;% rtP.GAIN_Gain_kxzwwrg2ad
	  section.data(209).logicalSrcIdx = 208;
	  section.data(209).dtTransOffset = 346;
	
	  ;% rtP.Gain17_Gain
	  section.data(210).logicalSrcIdx = 209;
	  section.data(210).dtTransOffset = 347;
	
	  ;% rtP.GAIN_Gain_pb2zwigstd
	  section.data(211).logicalSrcIdx = 210;
	  section.data(211).dtTransOffset = 348;
	
	  ;% rtP.Gain8_Gain
	  section.data(212).logicalSrcIdx = 211;
	  section.data(212).dtTransOffset = 349;
	
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
    nTotSects     = 2;
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
      section.nData     = 281;
      section.data(281)  = dumData; %prealloc
      
	  ;% rtB.jhflzht2mj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ox013agrey
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtB.g2zj4z3fcf
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtB.kiyhgelsu1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 9;
	
	  ;% rtB.pn0xtm1qfs
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 10;
	
	  ;% rtB.ezhopqv52b
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 11;
	
	  ;% rtB.fqolhzt2ru
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% rtB.lrmydxoplg
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% rtB.md32vri2gx
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 37;
	
	  ;% rtB.cz2gtbbcky
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 49;
	
	  ;% rtB.jvuvjolqwh
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 50;
	
	  ;% rtB.geukecwg0u
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 51;
	
	  ;% rtB.fbeayl3q3y
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 52;
	
	  ;% rtB.dqoim5n1jb
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 53;
	
	  ;% rtB.kx5pait0in
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 54;
	
	  ;% rtB.nknphymk3l
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 55;
	
	  ;% rtB.dqauotsnvc
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 56;
	
	  ;% rtB.cg4ctkqhve
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 57;
	
	  ;% rtB.fmehcowgyi
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 58;
	
	  ;% rtB.gq1s2wme44
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 59;
	
	  ;% rtB.mrr4rjxmd5
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 60;
	
	  ;% rtB.kscxrogtua
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 61;
	
	  ;% rtB.dxeawvlvpe
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 63;
	
	  ;% rtB.giazxg11vu
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 64;
	
	  ;% rtB.gw0rerd52a
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 65;
	
	  ;% rtB.ll25dgbfe2
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 66;
	
	  ;% rtB.loqom214rl
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 67;
	
	  ;% rtB.gohknt3zhv
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 68;
	
	  ;% rtB.l1bih2veee
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 69;
	
	  ;% rtB.i1v54eahu0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 70;
	
	  ;% rtB.ah33na0mde
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 71;
	
	  ;% rtB.mja1ugwxdu
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 72;
	
	  ;% rtB.bodksgvhlf
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 73;
	
	  ;% rtB.pgkgp0bijj
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 74;
	
	  ;% rtB.ilet4fenmw
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 75;
	
	  ;% rtB.fhm3nn5d1b
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 76;
	
	  ;% rtB.h0nm5jgafs
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 77;
	
	  ;% rtB.gvs21fqhuk
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 78;
	
	  ;% rtB.mo23g4pnrk
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 79;
	
	  ;% rtB.o3qvvpwmd3
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 80;
	
	  ;% rtB.m10kbud4ob
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 82;
	
	  ;% rtB.mtgk0ff4be
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 83;
	
	  ;% rtB.h5wr1gji1b
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 84;
	
	  ;% rtB.cqwvwhr1jq
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 85;
	
	  ;% rtB.dclv2c3egj
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 86;
	
	  ;% rtB.ii4qwz2ynt
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 87;
	
	  ;% rtB.cqmb4ean0h
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 88;
	
	  ;% rtB.kn52niorhw
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 89;
	
	  ;% rtB.l4uwl1uy0r
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 90;
	
	  ;% rtB.o0k0kwosqj
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 91;
	
	  ;% rtB.fpggvpdrmb
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 92;
	
	  ;% rtB.lcc15x1i4j
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 93;
	
	  ;% rtB.frxbxzmcnw
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 94;
	
	  ;% rtB.oagwqvtorn
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 95;
	
	  ;% rtB.iqpo2uomij
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 96;
	
	  ;% rtB.i1jllhl2ro
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 97;
	
	  ;% rtB.h3pb04vqfl
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 98;
	
	  ;% rtB.mi3hyl32jv
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 99;
	
	  ;% rtB.hwwdionvx0
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 101;
	
	  ;% rtB.lkil0izc4t
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 102;
	
	  ;% rtB.d2mrurkchw
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 103;
	
	  ;% rtB.lokezzkpnq
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 104;
	
	  ;% rtB.etvjy1bchk
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 105;
	
	  ;% rtB.dra2krvba4
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 106;
	
	  ;% rtB.ibqzqe3oou
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 107;
	
	  ;% rtB.cviauid1d3
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 108;
	
	  ;% rtB.bfdxinhtnw
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 109;
	
	  ;% rtB.nlg5uajt21
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 110;
	
	  ;% rtB.mbum4xbd0e
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 111;
	
	  ;% rtB.pv3si0fkfr
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 112;
	
	  ;% rtB.l4bvwu01j3
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 113;
	
	  ;% rtB.brueov51ao
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 114;
	
	  ;% rtB.idhpkfnk0a
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 115;
	
	  ;% rtB.gpphxbqvy3
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 116;
	
	  ;% rtB.aamnmjm1yc
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 117;
	
	  ;% rtB.p5x1uibsfi
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 118;
	
	  ;% rtB.j50fv2yw23
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 120;
	
	  ;% rtB.mfwdsafnjz
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 121;
	
	  ;% rtB.ebwtivil4o
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 122;
	
	  ;% rtB.pv3ytmgy52
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 123;
	
	  ;% rtB.dnefh5theb
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 124;
	
	  ;% rtB.cdt2p1s14w
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 125;
	
	  ;% rtB.c0qaqk5b53
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 126;
	
	  ;% rtB.dw2bf5brbz
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 127;
	
	  ;% rtB.jkz1k1ztnc
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 128;
	
	  ;% rtB.egzy5dbwp0
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 129;
	
	  ;% rtB.jspilqipin
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 130;
	
	  ;% rtB.npsucfyiyj
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 131;
	
	  ;% rtB.h0svs1rpby
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 132;
	
	  ;% rtB.nsormta4tz
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 133;
	
	  ;% rtB.bb2tvjwhg5
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 134;
	
	  ;% rtB.devyvktlbb
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 135;
	
	  ;% rtB.euoedwiyxz
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 136;
	
	  ;% rtB.he3amknkw3
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 137;
	
	  ;% rtB.gfql04q11h
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 139;
	
	  ;% rtB.lrrgqvyxev
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 140;
	
	  ;% rtB.mpdwhul4c3
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 141;
	
	  ;% rtB.kib51taq3o
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 142;
	
	  ;% rtB.lzciuaakro
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 143;
	
	  ;% rtB.hjxmaadmti
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 144;
	
	  ;% rtB.jm5mspklpa
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 145;
	
	  ;% rtB.bsd0rneemv
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 146;
	
	  ;% rtB.egqt5e4qc0
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 147;
	
	  ;% rtB.oqgrnwgpxv
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 148;
	
	  ;% rtB.der1hzp1xn
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 149;
	
	  ;% rtB.ge4nyhm1r3
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 150;
	
	  ;% rtB.e5v2koad5v
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 151;
	
	  ;% rtB.p2qcrjqxdh
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 152;
	
	  ;% rtB.fftrdajetv
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 153;
	
	  ;% rtB.a0dbybcqci
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 154;
	
	  ;% rtB.jbsevw1lu1
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 155;
	
	  ;% rtB.d5tlsdo253
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 156;
	
	  ;% rtB.gqkd1ueiwi
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 157;
	
	  ;% rtB.fsmvwznsct
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 158;
	
	  ;% rtB.hwxfmqt0gr
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 159;
	
	  ;% rtB.deythrkt14
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 160;
	
	  ;% rtB.fe1hwnkjzh
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 161;
	
	  ;% rtB.n4qnpxnbuu
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 162;
	
	  ;% rtB.gwv4jfdhm1
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 163;
	
	  ;% rtB.lebmhzg0mt
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 164;
	
	  ;% rtB.mgs2im4zap
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 165;
	
	  ;% rtB.bsvezlusnl
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 166;
	
	  ;% rtB.gw1dmadrpe
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 167;
	
	  ;% rtB.cpjkmvluab
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 168;
	
	  ;% rtB.b2lkww2jyt
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 169;
	
	  ;% rtB.mq21afeej4
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 170;
	
	  ;% rtB.mvgpkg11eh
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 171;
	
	  ;% rtB.o4cw4y3nry
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 172;
	
	  ;% rtB.ltma5vi0g1
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 173;
	
	  ;% rtB.bueu3wy0fh
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 174;
	
	  ;% rtB.mv3uo5px30
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 175;
	
	  ;% rtB.meb4zbqjxi
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 176;
	
	  ;% rtB.csxd24zgug
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 177;
	
	  ;% rtB.jk5kvepviq
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 178;
	
	  ;% rtB.pq0iqevv0y
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 179;
	
	  ;% rtB.jtp3uxrzli
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 180;
	
	  ;% rtB.ps1sa4yqwt
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 181;
	
	  ;% rtB.gj0ycrtj5t
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 182;
	
	  ;% rtB.cje00jsebg
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 183;
	
	  ;% rtB.ehyt3ybvhy
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 184;
	
	  ;% rtB.c1crd40ka1
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 185;
	
	  ;% rtB.bkvd0q0xbh
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 186;
	
	  ;% rtB.ov22k0lvp4
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 187;
	
	  ;% rtB.mddp40g3ij
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 188;
	
	  ;% rtB.atxuog4za1
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 189;
	
	  ;% rtB.nn4ue0o2n1
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 190;
	
	  ;% rtB.l0ovgbpw0v
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 191;
	
	  ;% rtB.a1acouxm22
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 192;
	
	  ;% rtB.htz5ycylyf
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 193;
	
	  ;% rtB.ows41rmx5g
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 194;
	
	  ;% rtB.mvs4yx5z0y
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 195;
	
	  ;% rtB.hlsy5izhcz
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 196;
	
	  ;% rtB.m3owjuhgvc
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 197;
	
	  ;% rtB.ablwxnz4t2
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 198;
	
	  ;% rtB.m13gwn2ern
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 199;
	
	  ;% rtB.gwx425b5rd
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 200;
	
	  ;% rtB.lfxlotm5a0
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 201;
	
	  ;% rtB.lojqadga1m
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 202;
	
	  ;% rtB.plzvecy2ci
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 203;
	
	  ;% rtB.j1nlxlazhf
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 204;
	
	  ;% rtB.nxxbgul0jm
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 206;
	
	  ;% rtB.j2yatlqg4t
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 207;
	
	  ;% rtB.ashhku0ld2
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 208;
	
	  ;% rtB.eu1wtgr3lr
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 209;
	
	  ;% rtB.ir55binbpc
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 210;
	
	  ;% rtB.aaezvyca1i
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 211;
	
	  ;% rtB.fqdakf20fg
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 212;
	
	  ;% rtB.chrxx4xqzd
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 213;
	
	  ;% rtB.hut5ed5ncb
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 214;
	
	  ;% rtB.njkehyxd2c
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 215;
	
	  ;% rtB.nwddfz0u4c
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 217;
	
	  ;% rtB.oyu3bdsl5p
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 218;
	
	  ;% rtB.bwztrzbo3q
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 219;
	
	  ;% rtB.ivgngk3er1
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 220;
	
	  ;% rtB.ffcbgxjkk2
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 221;
	
	  ;% rtB.mekozqjtbe
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 222;
	
	  ;% rtB.kuafjwwjj0
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 223;
	
	  ;% rtB.fuw4y5ptc3
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 224;
	
	  ;% rtB.fyv5sb3uga
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 225;
	
	  ;% rtB.hslnzetru2
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 226;
	
	  ;% rtB.oynr1ardse
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 228;
	
	  ;% rtB.mb4emfy1e1
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 229;
	
	  ;% rtB.ifesd4uvi5
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 230;
	
	  ;% rtB.nqdhd25la3
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 231;
	
	  ;% rtB.fugz5sg2sv
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 232;
	
	  ;% rtB.omdgfacbza
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 233;
	
	  ;% rtB.cshiufn5c5
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 234;
	
	  ;% rtB.lbwnjiuxsr
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 235;
	
	  ;% rtB.kz2wf5heu5
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 236;
	
	  ;% rtB.p4rleumfzg
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 237;
	
	  ;% rtB.kqhgk1l5tm
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 239;
	
	  ;% rtB.beudjok0zo
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 240;
	
	  ;% rtB.hnkuut20k4
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 241;
	
	  ;% rtB.cnnfzpjomf
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 242;
	
	  ;% rtB.l4ihoo3otx
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 243;
	
	  ;% rtB.o4wxrlodfy
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 244;
	
	  ;% rtB.egnyznlrun
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 245;
	
	  ;% rtB.blode0dhl5
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 246;
	
	  ;% rtB.khcwqmpttq
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 247;
	
	  ;% rtB.p01y5fcekv
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 248;
	
	  ;% rtB.azlkk5ukj5
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 250;
	
	  ;% rtB.mjipizwcde
	  section.data(202).logicalSrcIdx = 201;
	  section.data(202).dtTransOffset = 251;
	
	  ;% rtB.bcs4zro1sc
	  section.data(203).logicalSrcIdx = 202;
	  section.data(203).dtTransOffset = 252;
	
	  ;% rtB.fza5dbobgj
	  section.data(204).logicalSrcIdx = 203;
	  section.data(204).dtTransOffset = 253;
	
	  ;% rtB.bbxfb2lt5i
	  section.data(205).logicalSrcIdx = 204;
	  section.data(205).dtTransOffset = 254;
	
	  ;% rtB.ou1hxpsbtc
	  section.data(206).logicalSrcIdx = 205;
	  section.data(206).dtTransOffset = 255;
	
	  ;% rtB.d3y2k2c1cl
	  section.data(207).logicalSrcIdx = 206;
	  section.data(207).dtTransOffset = 256;
	
	  ;% rtB.pdkvwktmkv
	  section.data(208).logicalSrcIdx = 207;
	  section.data(208).dtTransOffset = 257;
	
	  ;% rtB.fbm3deed12
	  section.data(209).logicalSrcIdx = 208;
	  section.data(209).dtTransOffset = 258;
	
	  ;% rtB.kirrpnesgo
	  section.data(210).logicalSrcIdx = 209;
	  section.data(210).dtTransOffset = 259;
	
	  ;% rtB.bjj2r2kqch
	  section.data(211).logicalSrcIdx = 210;
	  section.data(211).dtTransOffset = 261;
	
	  ;% rtB.gimkhjafkq
	  section.data(212).logicalSrcIdx = 211;
	  section.data(212).dtTransOffset = 262;
	
	  ;% rtB.jdkd14gwno
	  section.data(213).logicalSrcIdx = 212;
	  section.data(213).dtTransOffset = 263;
	
	  ;% rtB.om4ycpup2d
	  section.data(214).logicalSrcIdx = 213;
	  section.data(214).dtTransOffset = 264;
	
	  ;% rtB.hiredmbfaq
	  section.data(215).logicalSrcIdx = 214;
	  section.data(215).dtTransOffset = 265;
	
	  ;% rtB.bipz2gs2vb
	  section.data(216).logicalSrcIdx = 215;
	  section.data(216).dtTransOffset = 266;
	
	  ;% rtB.matyiq12y5
	  section.data(217).logicalSrcIdx = 216;
	  section.data(217).dtTransOffset = 267;
	
	  ;% rtB.grtyslbuut
	  section.data(218).logicalSrcIdx = 217;
	  section.data(218).dtTransOffset = 268;
	
	  ;% rtB.g3uwu00l2j
	  section.data(219).logicalSrcIdx = 218;
	  section.data(219).dtTransOffset = 269;
	
	  ;% rtB.mvrwthfshy
	  section.data(220).logicalSrcIdx = 219;
	  section.data(220).dtTransOffset = 270;
	
	  ;% rtB.mdbjo22jfb
	  section.data(221).logicalSrcIdx = 220;
	  section.data(221).dtTransOffset = 271;
	
	  ;% rtB.aoq52irvwi
	  section.data(222).logicalSrcIdx = 221;
	  section.data(222).dtTransOffset = 272;
	
	  ;% rtB.d4il4jbr1v
	  section.data(223).logicalSrcIdx = 222;
	  section.data(223).dtTransOffset = 273;
	
	  ;% rtB.hhllbndska
	  section.data(224).logicalSrcIdx = 223;
	  section.data(224).dtTransOffset = 274;
	
	  ;% rtB.htjuj5klu4
	  section.data(225).logicalSrcIdx = 224;
	  section.data(225).dtTransOffset = 275;
	
	  ;% rtB.nodycz41hd
	  section.data(226).logicalSrcIdx = 225;
	  section.data(226).dtTransOffset = 276;
	
	  ;% rtB.obw1lciifs
	  section.data(227).logicalSrcIdx = 226;
	  section.data(227).dtTransOffset = 277;
	
	  ;% rtB.cktb0tkc0f
	  section.data(228).logicalSrcIdx = 227;
	  section.data(228).dtTransOffset = 278;
	
	  ;% rtB.hprtfj5lqp
	  section.data(229).logicalSrcIdx = 228;
	  section.data(229).dtTransOffset = 279;
	
	  ;% rtB.pji40g4vfw
	  section.data(230).logicalSrcIdx = 229;
	  section.data(230).dtTransOffset = 280;
	
	  ;% rtB.ew1rj0v0ip
	  section.data(231).logicalSrcIdx = 230;
	  section.data(231).dtTransOffset = 281;
	
	  ;% rtB.ozjpi5gmzi
	  section.data(232).logicalSrcIdx = 231;
	  section.data(232).dtTransOffset = 282;
	
	  ;% rtB.l4jkzxpz40
	  section.data(233).logicalSrcIdx = 232;
	  section.data(233).dtTransOffset = 283;
	
	  ;% rtB.mrbmdp3mvq
	  section.data(234).logicalSrcIdx = 233;
	  section.data(234).dtTransOffset = 284;
	
	  ;% rtB.grxgbhmppu
	  section.data(235).logicalSrcIdx = 234;
	  section.data(235).dtTransOffset = 285;
	
	  ;% rtB.iogfygqx3c
	  section.data(236).logicalSrcIdx = 235;
	  section.data(236).dtTransOffset = 286;
	
	  ;% rtB.kwjnhm1rik
	  section.data(237).logicalSrcIdx = 236;
	  section.data(237).dtTransOffset = 287;
	
	  ;% rtB.hyoixeg4fl
	  section.data(238).logicalSrcIdx = 237;
	  section.data(238).dtTransOffset = 288;
	
	  ;% rtB.lc3qdiuf3t
	  section.data(239).logicalSrcIdx = 238;
	  section.data(239).dtTransOffset = 289;
	
	  ;% rtB.fxjrycxns1
	  section.data(240).logicalSrcIdx = 239;
	  section.data(240).dtTransOffset = 290;
	
	  ;% rtB.fueydjqllo
	  section.data(241).logicalSrcIdx = 240;
	  section.data(241).dtTransOffset = 291;
	
	  ;% rtB.lud1nitdqz
	  section.data(242).logicalSrcIdx = 241;
	  section.data(242).dtTransOffset = 292;
	
	  ;% rtB.fwqrljkgl5
	  section.data(243).logicalSrcIdx = 242;
	  section.data(243).dtTransOffset = 293;
	
	  ;% rtB.ih22bf4bis
	  section.data(244).logicalSrcIdx = 243;
	  section.data(244).dtTransOffset = 294;
	
	  ;% rtB.ey2x1plpfc
	  section.data(245).logicalSrcIdx = 244;
	  section.data(245).dtTransOffset = 298;
	
	  ;% rtB.hiwi0ircf1
	  section.data(246).logicalSrcIdx = 245;
	  section.data(246).dtTransOffset = 302;
	
	  ;% rtB.cyn5mhsbrs
	  section.data(247).logicalSrcIdx = 246;
	  section.data(247).dtTransOffset = 306;
	
	  ;% rtB.lkiqnu3azd
	  section.data(248).logicalSrcIdx = 247;
	  section.data(248).dtTransOffset = 310;
	
	  ;% rtB.nvmxvdiax2
	  section.data(249).logicalSrcIdx = 248;
	  section.data(249).dtTransOffset = 314;
	
	  ;% rtB.odaelk0hd5
	  section.data(250).logicalSrcIdx = 249;
	  section.data(250).dtTransOffset = 318;
	
	  ;% rtB.ar5quhe3n1
	  section.data(251).logicalSrcIdx = 250;
	  section.data(251).dtTransOffset = 319;
	
	  ;% rtB.jwsksleeja
	  section.data(252).logicalSrcIdx = 251;
	  section.data(252).dtTransOffset = 323;
	
	  ;% rtB.au2eumcmnw
	  section.data(253).logicalSrcIdx = 252;
	  section.data(253).dtTransOffset = 324;
	
	  ;% rtB.mh22xyaypy
	  section.data(254).logicalSrcIdx = 253;
	  section.data(254).dtTransOffset = 328;
	
	  ;% rtB.hwnqfegtgf
	  section.data(255).logicalSrcIdx = 254;
	  section.data(255).dtTransOffset = 329;
	
	  ;% rtB.c11nptjhkq
	  section.data(256).logicalSrcIdx = 255;
	  section.data(256).dtTransOffset = 333;
	
	  ;% rtB.pzpf3nd3va
	  section.data(257).logicalSrcIdx = 256;
	  section.data(257).dtTransOffset = 334;
	
	  ;% rtB.f14l2fld1f
	  section.data(258).logicalSrcIdx = 257;
	  section.data(258).dtTransOffset = 338;
	
	  ;% rtB.lcncbuna0k
	  section.data(259).logicalSrcIdx = 258;
	  section.data(259).dtTransOffset = 339;
	
	  ;% rtB.pdalytysiw
	  section.data(260).logicalSrcIdx = 259;
	  section.data(260).dtTransOffset = 343;
	
	  ;% rtB.hstmkliglr
	  section.data(261).logicalSrcIdx = 260;
	  section.data(261).dtTransOffset = 344;
	
	  ;% rtB.hhho25daxq
	  section.data(262).logicalSrcIdx = 261;
	  section.data(262).dtTransOffset = 348;
	
	  ;% rtB.b2caeksf4i
	  section.data(263).logicalSrcIdx = 262;
	  section.data(263).dtTransOffset = 384;
	
	  ;% rtB.jrljlnvocq
	  section.data(264).logicalSrcIdx = 263;
	  section.data(264).dtTransOffset = 402;
	
	  ;% rtB.b2bp1tloeo
	  section.data(265).logicalSrcIdx = 264;
	  section.data(265).dtTransOffset = 406;
	
	  ;% rtB.lmsabjovac
	  section.data(266).logicalSrcIdx = 265;
	  section.data(266).dtTransOffset = 410;
	
	  ;% rtB.n3klnoiklk
	  section.data(267).logicalSrcIdx = 266;
	  section.data(267).dtTransOffset = 414;
	
	  ;% rtB.o01lkeuvd1
	  section.data(268).logicalSrcIdx = 267;
	  section.data(268).dtTransOffset = 418;
	
	  ;% rtB.ebfmf2wsfd
	  section.data(269).logicalSrcIdx = 268;
	  section.data(269).dtTransOffset = 422;
	
	  ;% rtB.lvoipeofzz
	  section.data(270).logicalSrcIdx = 269;
	  section.data(270).dtTransOffset = 426;
	
	  ;% rtB.nmoen0whma
	  section.data(271).logicalSrcIdx = 270;
	  section.data(271).dtTransOffset = 427;
	
	  ;% rtB.dbgszugdvs
	  section.data(272).logicalSrcIdx = 271;
	  section.data(272).dtTransOffset = 428;
	
	  ;% rtB.b0cqzuq31k
	  section.data(273).logicalSrcIdx = 272;
	  section.data(273).dtTransOffset = 429;
	
	  ;% rtB.krc4jb2phm
	  section.data(274).logicalSrcIdx = 273;
	  section.data(274).dtTransOffset = 430;
	
	  ;% rtB.htvttv05oy
	  section.data(275).logicalSrcIdx = 274;
	  section.data(275).dtTransOffset = 431;
	
	  ;% rtB.oj2z4dszqk
	  section.data(276).logicalSrcIdx = 275;
	  section.data(276).dtTransOffset = 432;
	
	  ;% rtB.kpiwt1usty
	  section.data(277).logicalSrcIdx = 276;
	  section.data(277).dtTransOffset = 433;
	
	  ;% rtB.onxt4mtv0n
	  section.data(278).logicalSrcIdx = 277;
	  section.data(278).dtTransOffset = 434;
	
	  ;% rtB.pgmjibidt5
	  section.data(279).logicalSrcIdx = 278;
	  section.data(279).dtTransOffset = 435;
	
	  ;% rtB.ofr3o5n2gr
	  section.data(280).logicalSrcIdx = 279;
	  section.data(280).dtTransOffset = 436;
	
	  ;% rtB.i1yn4cbqfm
	  section.data(281).logicalSrcIdx = 280;
	  section.data(281).dtTransOffset = 437;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtB.mvayvdtnfm
	  section.data(1).logicalSrcIdx = 281;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.dfulmqk4uv
	  section.data(2).logicalSrcIdx = 282;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.kbuzw5x2iq
	  section.data(3).logicalSrcIdx = 283;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.b2kt2bq2rg
	  section.data(4).logicalSrcIdx = 284;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.jrzojgf3va
	  section.data(5).logicalSrcIdx = 285;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.pcez2gw042
	  section.data(6).logicalSrcIdx = 286;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.ffpw4qlmce
	  section.data(7).logicalSrcIdx = 287;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.dpejr15fy5
	  section.data(8).logicalSrcIdx = 288;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.ezdth4z4el
	  section.data(9).logicalSrcIdx = 289;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.pj2cosrmgv
	  section.data(10).logicalSrcIdx = 290;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.psxp5i3lg4
	  section.data(11).logicalSrcIdx = 291;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.aw5fczldrp
	  section.data(12).logicalSrcIdx = 292;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
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
    sectIdxOffset = 2;
    
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
      
	  ;% rtDW.liczzslnug
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hbalfb24dh
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.mcqxnh5qer
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.hri0uk1gw2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.bwjx1snxyl
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.mfo0ooprpe
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.c1jwwx42fx
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.mhha3stacp
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.lx1kthg2ak
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.bsqva4pohk
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.lpwasbckyz
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.d4ohqbhzps
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.bfnpjdpcts
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.bjypbkgsog
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.d0kf2aazrh
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.al0mzj21sg
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.ou3top1ox4
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.mmsgagixgx
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.c33j3xhn2h
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.nhkrizpina
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.bgfsqdlzb2
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.prb2fus1cf
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.oc01bukxc2
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.d1olc5hqid
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.ituhf3b0wr
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.k3i3dxp2ad
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.bpulvyc40u
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.e4gpd3p5q1
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.iwb0eino0x
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.o253susvy3
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.ioeljr4qvu
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.dduqiujiyo
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.loi2p44l5g
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.o15jwcclhk
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.m2gd3x52qg
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.nkabqhmeiu
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.jjatyukdau
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.kdanylioto
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.krdgtk44dk
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.k4esgf3pin
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.cyacblwmwu
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.jxguvtxodm
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.ml2zc01qz1
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.j01x0sjof1
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.fnn2jlfmi3
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.iimmcuvdjs
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.fox2nnpevw
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.lngpao5zhs
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtDW.kswjrqpbnd
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtDW.p1zvslcvk0
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtDW.gwlc5gste3
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtDW.d03mkwdo2x
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtDW.oem5mgthn3
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtDW.cektosfijb
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtDW.og0ns0accm
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtDW.ezn104xtfk
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 56;
	
	  ;% rtDW.ezkcmaawd3
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 58;
	
	  ;% rtDW.cg4btfqksn
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% rtDW.awm41kpugb
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 62;
	
	  ;% rtDW.bqhavurmfx
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 64;
	
	  ;% rtDW.ocr2gtrnaz
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 66;
	
	  ;% rtDW.e5l3gibvg4
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 67;
	
	  ;% rtDW.i1v2wl3m4b
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 68;
	
	  ;% rtDW.bdwqisxww0
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 69;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% rtDW.f2qimf1l0g.TimePtr
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pcl5k34iwh
	  section.data(2).logicalSrcIdx = 65;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.eezcqf5nt4
	  section.data(3).logicalSrcIdx = 66;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.b2efndbc2b
	  section.data(4).logicalSrcIdx = 67;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.adad1xdxlk
	  section.data(5).logicalSrcIdx = 68;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ibyrkkkvdk
	  section.data(6).logicalSrcIdx = 69;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.os1chhphe1
	  section.data(7).logicalSrcIdx = 70;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.lh0gnnaa5c
	  section.data(8).logicalSrcIdx = 71;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ey4yt3c2wg
	  section.data(9).logicalSrcIdx = 72;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.lpofxorz55
	  section.data(10).logicalSrcIdx = 73;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.drlwsxzbqr
	  section.data(11).logicalSrcIdx = 74;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.hnxbpl1wx5
	  section.data(12).logicalSrcIdx = 75;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.izfvfuof1b
	  section.data(13).logicalSrcIdx = 76;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.k0z433ri5i
	  section.data(14).logicalSrcIdx = 77;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.j2y3s4ejwx
	  section.data(15).logicalSrcIdx = 78;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.j3avufo4mj
	  section.data(16).logicalSrcIdx = 79;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.k22u2dj12d
	  section.data(17).logicalSrcIdx = 80;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.df4vdmnuwt
	  section.data(18).logicalSrcIdx = 81;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.modeusfujc
	  section.data(19).logicalSrcIdx = 82;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.i1vjbzgyjh
	  section.data(20).logicalSrcIdx = 83;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.nz34jgwcsj
	  section.data(21).logicalSrcIdx = 84;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.e4gobedwot.LoggedData
	  section.data(22).logicalSrcIdx = 85;
	  section.data(22).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtDW.o535gad0gw.PrevIndex
	  section.data(1).logicalSrcIdx = 86;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.iezvtdo4zq
	  section.data(2).logicalSrcIdx = 87;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.iojrm1ldih
	  section.data(3).logicalSrcIdx = 88;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nvp3tswtih.AcquireOK
	  section.data(4).logicalSrcIdx = 89;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.j4znmhb1up.AcquireOK
	  section.data(5).logicalSrcIdx = 90;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.njqnvhin1i.AcquireOK
	  section.data(6).logicalSrcIdx = 91;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.a4yiq2c5qz.AcquireOK
	  section.data(7).logicalSrcIdx = 92;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.delwqzjfmb.AcquireOK
	  section.data(8).logicalSrcIdx = 93;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.kxwqlyfzql.AcquireOK
	  section.data(9).logicalSrcIdx = 94;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.puciepvfhp
	  section.data(10).logicalSrcIdx = 95;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.anqxhpocun
	  section.data(11).logicalSrcIdx = 96;
	  section.data(11).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.cy021mvipw
	  section.data(1).logicalSrcIdx = 97;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.ff1ypsbsry
	  section.data(1).logicalSrcIdx = 98;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.amkot2yy4d
	  section.data(2).logicalSrcIdx = 99;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cwebk52hxz
	  section.data(3).logicalSrcIdx = 100;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.awuv0zqvac
	  section.data(4).logicalSrcIdx = 101;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.jrc3tboejv
	  section.data(5).logicalSrcIdx = 102;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.kqwhwvmbo5
	  section.data(6).logicalSrcIdx = 103;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.gcr0no5gxx
	  section.data(7).logicalSrcIdx = 104;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.dnpgzoukr4
	  section.data(8).logicalSrcIdx = 105;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.dcszolnjqw
	  section.data(9).logicalSrcIdx = 106;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.asudwslg1u
	  section.data(10).logicalSrcIdx = 107;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.ks2knrfwk4
	  section.data(11).logicalSrcIdx = 108;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.lv2aww432q
	  section.data(12).logicalSrcIdx = 109;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.luet2gj5du
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.dypi3mxxdf
	  section.data(2).logicalSrcIdx = 111;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.n4syeszzv5
	  section.data(3).logicalSrcIdx = 112;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.n21ig4q2la
	  section.data(4).logicalSrcIdx = 113;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.f1fl5shvqt
	  section.data(5).logicalSrcIdx = 114;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ptqdowofkz
	  section.data(6).logicalSrcIdx = 115;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.lfyvvh0sv5
	  section.data(7).logicalSrcIdx = 116;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.iyvntabvlz
	  section.data(8).logicalSrcIdx = 117;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.azfc3wig1a
	  section.data(9).logicalSrcIdx = 118;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.pnmnijewrm
	  section.data(10).logicalSrcIdx = 119;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.eumkre2nza
	  section.data(11).logicalSrcIdx = 120;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.fce4agh0zo
	  section.data(12).logicalSrcIdx = 121;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.n2vle3a5kh
	  section.data(1).logicalSrcIdx = 122;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.k4233ewp0g
	  section.data(2).logicalSrcIdx = 123;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.dx1uzz32df
	  section.data(3).logicalSrcIdx = 124;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.p2eqs0rgt4
	  section.data(4).logicalSrcIdx = 125;
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


  targMap.checksum0 = 76288948;
  targMap.checksum1 = 4116318086;
  targMap.checksum2 = 373972974;
  targMap.checksum3 = 3063206634;

