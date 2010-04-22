;; ##################################################################
;; # Copyright (c) $Date$ Qualcomm Innovation Center, Inc..
;; # All Rights Reserved.
;; # Modified by Qualcomm Innovation Center, Inc. on $Date$
;; ##################################################################
(define_constants [
  (UNSPEC_QDSP6_Q6C2_cmpeq 1000)
  (UNSPEC_QDSP6_Q6C2_cmpgt 1001)
  (UNSPEC_QDSP6_Q6C2_cmpgtu 1002)
  (UNSPEC_QDSP6_Q6C2_cmpeqp 1003)
  (UNSPEC_QDSP6_Q6C2_cmpgtp 1004)
  (UNSPEC_QDSP6_Q6C2_cmpgtup 1005)
  (UNSPEC_QDSP6_Q6C2_bitsset 1006)
  (UNSPEC_QDSP6_Q6C2_bitsclr 1007)
  (UNSPEC_QDSP6_Q6C2_cmpeqi 1008)
  (UNSPEC_QDSP6_Q6C2_cmpgti 1009)
  (UNSPEC_QDSP6_Q6C2_cmpgtui 1010)
  (UNSPEC_QDSP6_Q6C2_cmpgei 1011)
  (UNSPEC_QDSP6_Q6C2_cmpgeui 1012)
  (UNSPEC_QDSP6_Q6C2_cmplt 1013)
  (UNSPEC_QDSP6_Q6C2_cmpltu 1014)
  (UNSPEC_QDSP6_Q6C2_bitsclri 1015)
  (UNSPEC_QDSP6_Q6C2_and 1016)
  (UNSPEC_QDSP6_Q6C2_or 1017)
  (UNSPEC_QDSP6_Q6C2_xor 1018)
  (UNSPEC_QDSP6_Q6C2_andn 1019)
  (UNSPEC_QDSP6_Q6C2_not 1020)
  (UNSPEC_QDSP6_Q6C2_orn 1021)
  (UNSPEC_QDSP6_Q6C2_pxfer_map 1022)
  (UNSPEC_QDSP6_Q6C2_any8 1023)
  (UNSPEC_QDSP6_Q6C2_all8 1024)
  (UNSPEC_QDSP6_Q6C2_vitpack 1025)
  (UNSPEC_QDSP6_Q6C2_mux 1026)
  (UNSPEC_QDSP6_Q6C2_muxii 1027)
  (UNSPEC_QDSP6_Q6C2_muxir 1028)
  (UNSPEC_QDSP6_Q6C2_muxri 1029)
  (UNSPEC_QDSP6_Q6C2_vmux 1030)
  (UNSPEC_QDSP6_Q6C2_mask 1031)
  (UNSPEC_QDSP6_Q6A2_vcmpbeq 1032)
  (UNSPEC_QDSP6_Q6A2_vcmpbgtu 1033)
  (UNSPEC_QDSP6_Q6A2_vcmpheq 1034)
  (UNSPEC_QDSP6_Q6A2_vcmphgt 1035)
  (UNSPEC_QDSP6_Q6A2_vcmphgtu 1036)
  (UNSPEC_QDSP6_Q6A2_vcmpweq 1037)
  (UNSPEC_QDSP6_Q6A2_vcmpwgt 1038)
  (UNSPEC_QDSP6_Q6A2_vcmpwgtu 1039)
  (UNSPEC_QDSP6_Q6C2_tfrpr 1040)
  (UNSPEC_QDSP6_Q6C2_tfrrp 1041)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_hh_s0 1042)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_hh_s1 1043)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_hl_s0 1044)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_hl_s1 1045)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_lh_s0 1046)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_lh_s1 1047)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_ll_s0 1048)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_ll_s1 1049)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_hh_s0 1050)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_hh_s1 1051)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_hl_s0 1052)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_hl_s1 1053)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_lh_s0 1054)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_lh_s1 1055)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_ll_s0 1056)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_ll_s1 1057)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hh_s0 1058)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hh_s1 1059)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hl_s0 1060)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hl_s1 1061)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_lh_s0 1062)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_lh_s1 1063)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_ll_s0 1064)
  (UNSPEC_QDSP6_Q6M2_mpy_acc_sat_ll_s1 1065)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hh_s0 1066)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hh_s1 1067)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hl_s0 1068)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hl_s1 1069)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_lh_s0 1070)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_lh_s1 1071)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_ll_s0 1072)
  (UNSPEC_QDSP6_Q6M2_mpy_nac_sat_ll_s1 1073)
  (UNSPEC_QDSP6_Q6M2_mpy_hh_s0 1074)
  (UNSPEC_QDSP6_Q6M2_mpy_hh_s1 1075)
  (UNSPEC_QDSP6_Q6M2_mpy_hl_s0 1076)
  (UNSPEC_QDSP6_Q6M2_mpy_hl_s1 1077)
  (UNSPEC_QDSP6_Q6M2_mpy_lh_s0 1078)
  (UNSPEC_QDSP6_Q6M2_mpy_lh_s1 1079)
  (UNSPEC_QDSP6_Q6M2_mpy_ll_s0 1080)
  (UNSPEC_QDSP6_Q6M2_mpy_ll_s1 1081)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_hh_s0 1082)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_hh_s1 1083)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_hl_s0 1084)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_hl_s1 1085)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_lh_s0 1086)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_lh_s1 1087)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_ll_s0 1088)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_ll_s1 1089)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_hh_s0 1090)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_hh_s1 1091)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_hl_s0 1092)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_hl_s1 1093)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_lh_s0 1094)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_lh_s1 1095)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_ll_s0 1096)
  (UNSPEC_QDSP6_Q6M2_mpy_rnd_ll_s1 1097)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hh_s0 1098)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hh_s1 1099)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hl_s0 1100)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hl_s1 1101)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_lh_s0 1102)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_lh_s1 1103)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_ll_s0 1104)
  (UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_ll_s1 1105)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_hh_s0 1106)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_hh_s1 1107)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_hl_s0 1108)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_hl_s1 1109)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_lh_s0 1110)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_lh_s1 1111)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_ll_s0 1112)
  (UNSPEC_QDSP6_Q6M2_mpyd_acc_ll_s1 1113)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_hh_s0 1114)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_hh_s1 1115)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_hl_s0 1116)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_hl_s1 1117)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_lh_s0 1118)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_lh_s1 1119)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_ll_s0 1120)
  (UNSPEC_QDSP6_Q6M2_mpyd_nac_ll_s1 1121)
  (UNSPEC_QDSP6_Q6M2_mpyd_hh_s0 1122)
  (UNSPEC_QDSP6_Q6M2_mpyd_hh_s1 1123)
  (UNSPEC_QDSP6_Q6M2_mpyd_hl_s0 1124)
  (UNSPEC_QDSP6_Q6M2_mpyd_hl_s1 1125)
  (UNSPEC_QDSP6_Q6M2_mpyd_lh_s0 1126)
  (UNSPEC_QDSP6_Q6M2_mpyd_lh_s1 1127)
  (UNSPEC_QDSP6_Q6M2_mpyd_ll_s0 1128)
  (UNSPEC_QDSP6_Q6M2_mpyd_ll_s1 1129)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_hh_s0 1130)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_hh_s1 1131)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_hl_s0 1132)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_hl_s1 1133)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_lh_s0 1134)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_lh_s1 1135)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_ll_s0 1136)
  (UNSPEC_QDSP6_Q6M2_mpyd_rnd_ll_s1 1137)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_hh_s0 1138)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_hh_s1 1139)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_hl_s0 1140)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_hl_s1 1141)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_lh_s0 1142)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_lh_s1 1143)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_ll_s0 1144)
  (UNSPEC_QDSP6_Q6M2_mpyu_acc_ll_s1 1145)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_hh_s0 1146)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_hh_s1 1147)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_hl_s0 1148)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_hl_s1 1149)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_lh_s0 1150)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_lh_s1 1151)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_ll_s0 1152)
  (UNSPEC_QDSP6_Q6M2_mpyu_nac_ll_s1 1153)
  (UNSPEC_QDSP6_Q6M2_mpyu_hh_s0 1154)
  (UNSPEC_QDSP6_Q6M2_mpyu_hh_s1 1155)
  (UNSPEC_QDSP6_Q6M2_mpyu_hl_s0 1156)
  (UNSPEC_QDSP6_Q6M2_mpyu_hl_s1 1157)
  (UNSPEC_QDSP6_Q6M2_mpyu_lh_s0 1158)
  (UNSPEC_QDSP6_Q6M2_mpyu_lh_s1 1159)
  (UNSPEC_QDSP6_Q6M2_mpyu_ll_s0 1160)
  (UNSPEC_QDSP6_Q6M2_mpyu_ll_s1 1161)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_hh_s0 1162)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_hh_s1 1163)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_hl_s0 1164)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_hl_s1 1165)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_lh_s0 1166)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_lh_s1 1167)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_ll_s0 1168)
  (UNSPEC_QDSP6_Q6M2_mpyud_acc_ll_s1 1169)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_hh_s0 1170)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_hh_s1 1171)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_hl_s0 1172)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_hl_s1 1173)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_lh_s0 1174)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_lh_s1 1175)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_ll_s0 1176)
  (UNSPEC_QDSP6_Q6M2_mpyud_nac_ll_s1 1177)
  (UNSPEC_QDSP6_Q6M2_mpyud_hh_s0 1178)
  (UNSPEC_QDSP6_Q6M2_mpyud_hh_s1 1179)
  (UNSPEC_QDSP6_Q6M2_mpyud_hl_s0 1180)
  (UNSPEC_QDSP6_Q6M2_mpyud_hl_s1 1181)
  (UNSPEC_QDSP6_Q6M2_mpyud_lh_s0 1182)
  (UNSPEC_QDSP6_Q6M2_mpyud_lh_s1 1183)
  (UNSPEC_QDSP6_Q6M2_mpyud_ll_s0 1184)
  (UNSPEC_QDSP6_Q6M2_mpyud_ll_s1 1185)
  (UNSPEC_QDSP6_Q6M2_mpysmi 1186)
  (UNSPEC_QDSP6_Q6M2_macsip 1187)
  (UNSPEC_QDSP6_Q6M2_macsin 1188)
  (UNSPEC_QDSP6_Q6M2_dpmpyss_s0 1189)
  (UNSPEC_QDSP6_Q6M2_dpmpyss_acc_s0 1190)
  (UNSPEC_QDSP6_Q6M2_dpmpyss_nac_s0 1191)
  (UNSPEC_QDSP6_Q6M2_dpmpyuu_s0 1192)
  (UNSPEC_QDSP6_Q6M2_dpmpyuu_acc_s0 1193)
  (UNSPEC_QDSP6_Q6M2_dpmpyuu_nac_s0 1194)
  (UNSPEC_QDSP6_Q6M2_mpy_up 1195)
  (UNSPEC_QDSP6_Q6M2_mpyu_up 1196)
  (UNSPEC_QDSP6_Q6M2_dpmpyss_rnd_s0 1197)
  (UNSPEC_QDSP6_Q6M2_mpyi 1198)
  (UNSPEC_QDSP6_Q6M2_mpyui 1199)
  (UNSPEC_QDSP6_Q6M2_maci 1200)
  (UNSPEC_QDSP6_Q6M2_acci 1201)
  (UNSPEC_QDSP6_Q6M2_accii 1202)
  (UNSPEC_QDSP6_Q6M2_nacci 1203)
  (UNSPEC_QDSP6_Q6M2_naccii 1204)
  (UNSPEC_QDSP6_Q6M2_subacc 1205)
  (UNSPEC_QDSP6_Q6M2_vmpy2s_s0 1206)
  (UNSPEC_QDSP6_Q6M2_vmpy2s_s1 1207)
  (UNSPEC_QDSP6_Q6M2_vmac2s_s0 1208)
  (UNSPEC_QDSP6_Q6M2_vmac2s_s1 1209)
  (UNSPEC_QDSP6_Q6M2_vmpy2s_s0pack 1210)
  (UNSPEC_QDSP6_Q6M2_vmpy2s_s1pack 1211)
  (UNSPEC_QDSP6_Q6M2_vmac2 1212)
  (UNSPEC_QDSP6_Q6M2_vmpy2es_s0 1213)
  (UNSPEC_QDSP6_Q6M2_vmpy2es_s1 1214)
  (UNSPEC_QDSP6_Q6M2_vmac2es_s0 1215)
  (UNSPEC_QDSP6_Q6M2_vmac2es_s1 1216)
  (UNSPEC_QDSP6_Q6M2_vmac2es 1217)
  (UNSPEC_QDSP6_Q6M2_vrmac_s0 1218)
  (UNSPEC_QDSP6_Q6M2_vrmpy_s0 1219)
  (UNSPEC_QDSP6_Q6M2_vdmpyrs_s0 1220)
  (UNSPEC_QDSP6_Q6M2_vdmpyrs_s1 1221)
  (UNSPEC_QDSP6_Q6M2_vdmacs_s0 1222)
  (UNSPEC_QDSP6_Q6M2_vdmacs_s1 1223)
  (UNSPEC_QDSP6_Q6M2_vdmpys_s0 1224)
  (UNSPEC_QDSP6_Q6M2_vdmpys_s1 1225)
  (UNSPEC_QDSP6_Q6M2_cmpyrs_s0 1226)
  (UNSPEC_QDSP6_Q6M2_cmpyrs_s1 1227)
  (UNSPEC_QDSP6_Q6M2_cmpyrsc_s0 1228)
  (UNSPEC_QDSP6_Q6M2_cmpyrsc_s1 1229)
  (UNSPEC_QDSP6_Q6M2_cmacs_s0 1230)
  (UNSPEC_QDSP6_Q6M2_cmacs_s1 1231)
  (UNSPEC_QDSP6_Q6M2_cmacsc_s0 1232)
  (UNSPEC_QDSP6_Q6M2_cmacsc_s1 1233)
  (UNSPEC_QDSP6_Q6M2_cmpys_s0 1234)
  (UNSPEC_QDSP6_Q6M2_cmpys_s1 1235)
  (UNSPEC_QDSP6_Q6M2_cmpysc_s0 1236)
  (UNSPEC_QDSP6_Q6M2_cmpysc_s1 1237)
  (UNSPEC_QDSP6_Q6M2_cnacs_s0 1238)
  (UNSPEC_QDSP6_Q6M2_cnacs_s1 1239)
  (UNSPEC_QDSP6_Q6M2_cnacsc_s0 1240)
  (UNSPEC_QDSP6_Q6M2_cnacsc_s1 1241)
  (UNSPEC_QDSP6_Q6M2_vrcmpys_s1 1242)
  (UNSPEC_QDSP6_Q6M2_vrcmpys_acc_s1 1243)
  (UNSPEC_QDSP6_Q6M2_vrcmpys_s1rp 1244)
  (UNSPEC_QDSP6_Q6M2_mmacls_s0 1245)
  (UNSPEC_QDSP6_Q6M2_mmacls_s1 1246)
  (UNSPEC_QDSP6_Q6M2_mmachs_s0 1247)
  (UNSPEC_QDSP6_Q6M2_mmachs_s1 1248)
  (UNSPEC_QDSP6_Q6M2_mmpyl_s0 1249)
  (UNSPEC_QDSP6_Q6M2_mmpyl_s1 1250)
  (UNSPEC_QDSP6_Q6M2_mmpyh_s0 1251)
  (UNSPEC_QDSP6_Q6M2_mmpyh_s1 1252)
  (UNSPEC_QDSP6_Q6M2_mmacls_rs0 1253)
  (UNSPEC_QDSP6_Q6M2_mmacls_rs1 1254)
  (UNSPEC_QDSP6_Q6M2_mmachs_rs0 1255)
  (UNSPEC_QDSP6_Q6M2_mmachs_rs1 1256)
  (UNSPEC_QDSP6_Q6M2_mmpyl_rs0 1257)
  (UNSPEC_QDSP6_Q6M2_mmpyl_rs1 1258)
  (UNSPEC_QDSP6_Q6M2_mmpyh_rs0 1259)
  (UNSPEC_QDSP6_Q6M2_mmpyh_rs1 1260)
  (UNSPEC_QDSP6_Q6M2_hmmpyl_rs1 1261)
  (UNSPEC_QDSP6_Q6M2_hmmpyh_rs1 1262)
  (UNSPEC_QDSP6_Q6M2_mmaculs_s0 1263)
  (UNSPEC_QDSP6_Q6M2_mmaculs_s1 1264)
  (UNSPEC_QDSP6_Q6M2_mmacuhs_s0 1265)
  (UNSPEC_QDSP6_Q6M2_mmacuhs_s1 1266)
  (UNSPEC_QDSP6_Q6M2_mmpyul_s0 1267)
  (UNSPEC_QDSP6_Q6M2_mmpyul_s1 1268)
  (UNSPEC_QDSP6_Q6M2_mmpyuh_s0 1269)
  (UNSPEC_QDSP6_Q6M2_mmpyuh_s1 1270)
  (UNSPEC_QDSP6_Q6M2_mmaculs_rs0 1271)
  (UNSPEC_QDSP6_Q6M2_mmaculs_rs1 1272)
  (UNSPEC_QDSP6_Q6M2_mmacuhs_rs0 1273)
  (UNSPEC_QDSP6_Q6M2_mmacuhs_rs1 1274)
  (UNSPEC_QDSP6_Q6M2_mmpyul_rs0 1275)
  (UNSPEC_QDSP6_Q6M2_mmpyul_rs1 1276)
  (UNSPEC_QDSP6_Q6M2_mmpyuh_rs0 1277)
  (UNSPEC_QDSP6_Q6M2_mmpyuh_rs1 1278)
  (UNSPEC_QDSP6_Q6M2_vrcmaci_s0 1279)
  (UNSPEC_QDSP6_Q6M2_vrcmacr_s0 1280)
  (UNSPEC_QDSP6_Q6M2_vrcmaci_s0c 1281)
  (UNSPEC_QDSP6_Q6M2_vrcmacr_s0c 1282)
  (UNSPEC_QDSP6_Q6M2_cmaci_s0 1283)
  (UNSPEC_QDSP6_Q6M2_cmacr_s0 1284)
  (UNSPEC_QDSP6_Q6M2_vrcmpyi_s0 1285)
  (UNSPEC_QDSP6_Q6M2_vrcmpyr_s0 1286)
  (UNSPEC_QDSP6_Q6M2_vrcmpyi_s0c 1287)
  (UNSPEC_QDSP6_Q6M2_vrcmpyr_s0c 1288)
  (UNSPEC_QDSP6_Q6M2_cmpyi_s0 1289)
  (UNSPEC_QDSP6_Q6M2_cmpyr_s0 1290)
  (UNSPEC_QDSP6_Q6M2_vcmpy_s0_sat_i 1291)
  (UNSPEC_QDSP6_Q6M2_vcmpy_s0_sat_r 1292)
  (UNSPEC_QDSP6_Q6M2_vcmpy_s1_sat_i 1293)
  (UNSPEC_QDSP6_Q6M2_vcmpy_s1_sat_r 1294)
  (UNSPEC_QDSP6_Q6M2_vcmac_s0_sat_i 1295)
  (UNSPEC_QDSP6_Q6M2_vcmac_s0_sat_r 1296)
  (UNSPEC_QDSP6_Q6S2_vcrotate 1297)
  (UNSPEC_QDSP6_Q6A2_add 1298)
  (UNSPEC_QDSP6_Q6A2_sub 1299)
  (UNSPEC_QDSP6_Q6A2_addsat 1300)
  (UNSPEC_QDSP6_Q6A2_subsat 1301)
  (UNSPEC_QDSP6_Q6A2_addi 1302)
  (UNSPEC_QDSP6_Q6A2_addh_l16_ll 1303)
  (UNSPEC_QDSP6_Q6A2_addh_l16_hl 1304)
  (UNSPEC_QDSP6_Q6A2_addh_l16_sat_ll 1305)
  (UNSPEC_QDSP6_Q6A2_addh_l16_sat_hl 1306)
  (UNSPEC_QDSP6_Q6A2_subh_l16_ll 1307)
  (UNSPEC_QDSP6_Q6A2_subh_l16_hl 1308)
  (UNSPEC_QDSP6_Q6A2_subh_l16_sat_ll 1309)
  (UNSPEC_QDSP6_Q6A2_subh_l16_sat_hl 1310)
  (UNSPEC_QDSP6_Q6A2_addh_h16_ll 1311)
  (UNSPEC_QDSP6_Q6A2_addh_h16_lh 1312)
  (UNSPEC_QDSP6_Q6A2_addh_h16_hl 1313)
  (UNSPEC_QDSP6_Q6A2_addh_h16_hh 1314)
  (UNSPEC_QDSP6_Q6A2_addh_h16_sat_ll 1315)
  (UNSPEC_QDSP6_Q6A2_addh_h16_sat_lh 1316)
  (UNSPEC_QDSP6_Q6A2_addh_h16_sat_hl 1317)
  (UNSPEC_QDSP6_Q6A2_addh_h16_sat_hh 1318)
  (UNSPEC_QDSP6_Q6A2_subh_h16_ll 1319)
  (UNSPEC_QDSP6_Q6A2_subh_h16_lh 1320)
  (UNSPEC_QDSP6_Q6A2_subh_h16_hl 1321)
  (UNSPEC_QDSP6_Q6A2_subh_h16_hh 1322)
  (UNSPEC_QDSP6_Q6A2_subh_h16_sat_ll 1323)
  (UNSPEC_QDSP6_Q6A2_subh_h16_sat_lh 1324)
  (UNSPEC_QDSP6_Q6A2_subh_h16_sat_hl 1325)
  (UNSPEC_QDSP6_Q6A2_subh_h16_sat_hh 1326)
  (UNSPEC_QDSP6_Q6A2_aslh 1327)
  (UNSPEC_QDSP6_Q6A2_asrh 1328)
  (UNSPEC_QDSP6_Q6A2_addp 1329)
  (UNSPEC_QDSP6_Q6A2_addpsat 1330)
  (UNSPEC_QDSP6_Q6A2_addsp 1331)
  (UNSPEC_QDSP6_Q6A2_subp 1332)
  (UNSPEC_QDSP6_Q6A2_neg 1333)
  (UNSPEC_QDSP6_Q6A2_negsat 1334)
  (UNSPEC_QDSP6_Q6A2_abs 1335)
  (UNSPEC_QDSP6_Q6A2_abssat 1336)
  (UNSPEC_QDSP6_Q6A2_vconj 1337)
  (UNSPEC_QDSP6_Q6A2_negp 1338)
  (UNSPEC_QDSP6_Q6A2_absp 1339)
  (UNSPEC_QDSP6_Q6A2_max 1340)
  (UNSPEC_QDSP6_Q6A2_maxu 1341)
  (UNSPEC_QDSP6_Q6A2_min 1342)
  (UNSPEC_QDSP6_Q6A2_minu 1343)
  (UNSPEC_QDSP6_Q6A2_maxp 1344)
  (UNSPEC_QDSP6_Q6A2_maxup 1345)
  (UNSPEC_QDSP6_Q6A2_minp 1346)
  (UNSPEC_QDSP6_Q6A2_minup 1347)
  (UNSPEC_QDSP6_Q6A2_tfr 1348)
  (UNSPEC_QDSP6_Q6A2_tfrsi 1349)
  (UNSPEC_QDSP6_Q6A2_tfrp 1350)
  (UNSPEC_QDSP6_Q6A2_tfrpi 1351)
  (UNSPEC_QDSP6_Q6A2_zxtb 1352)
  (UNSPEC_QDSP6_Q6A2_sxtb 1353)
  (UNSPEC_QDSP6_Q6A2_zxth 1354)
  (UNSPEC_QDSP6_Q6A2_sxth 1355)
  (UNSPEC_QDSP6_Q6A2_combinew 1356)
  (UNSPEC_QDSP6_Q6A2_combineii 1357)
  (UNSPEC_QDSP6_Q6A2_combine_hh 1358)
  (UNSPEC_QDSP6_Q6A2_combine_hl 1359)
  (UNSPEC_QDSP6_Q6A2_combine_lh 1360)
  (UNSPEC_QDSP6_Q6A2_combine_ll 1361)
  (UNSPEC_QDSP6_Q6A2_tfril 1362)
  (UNSPEC_QDSP6_Q6A2_tfrih 1363)
  (UNSPEC_QDSP6_Q6A2_and 1364)
  (UNSPEC_QDSP6_Q6A2_or 1365)
  (UNSPEC_QDSP6_Q6A2_xor 1366)
  (UNSPEC_QDSP6_Q6A2_not 1367)
  (UNSPEC_QDSP6_Q6M2_xor_xacc 1368)
  (UNSPEC_QDSP6_Q6A2_subri 1369)
  (UNSPEC_QDSP6_Q6A2_andir 1370)
  (UNSPEC_QDSP6_Q6A2_orir 1371)
  (UNSPEC_QDSP6_Q6A2_andp 1372)
  (UNSPEC_QDSP6_Q6A2_orp 1373)
  (UNSPEC_QDSP6_Q6A2_xorp 1374)
  (UNSPEC_QDSP6_Q6A2_notp 1375)
  (UNSPEC_QDSP6_Q6A2_sxtw 1376)
  (UNSPEC_QDSP6_Q6A2_sat 1377)
  (UNSPEC_QDSP6_Q6A2_sath 1378)
  (UNSPEC_QDSP6_Q6A2_satuh 1379)
  (UNSPEC_QDSP6_Q6A2_satub 1380)
  (UNSPEC_QDSP6_Q6A2_satb 1381)
  (UNSPEC_QDSP6_Q6A2_vaddub 1382)
  (UNSPEC_QDSP6_Q6A2_vaddubs 1383)
  (UNSPEC_QDSP6_Q6A2_vaddh 1384)
  (UNSPEC_QDSP6_Q6A2_vaddhs 1385)
  (UNSPEC_QDSP6_Q6A2_vadduhs 1386)
  (UNSPEC_QDSP6_Q6A2_vaddw 1387)
  (UNSPEC_QDSP6_Q6A2_vaddws 1388)
  (UNSPEC_QDSP6_Q6A2_svavgh 1389)
  (UNSPEC_QDSP6_Q6A2_svavghs 1390)
  (UNSPEC_QDSP6_Q6A2_svnavgh 1391)
  (UNSPEC_QDSP6_Q6A2_svaddh 1392)
  (UNSPEC_QDSP6_Q6A2_svaddhs 1393)
  (UNSPEC_QDSP6_Q6A2_svadduhs 1394)
  (UNSPEC_QDSP6_Q6A2_svsubh 1395)
  (UNSPEC_QDSP6_Q6A2_svsubhs 1396)
  (UNSPEC_QDSP6_Q6A2_svsubuhs 1397)
  (UNSPEC_QDSP6_Q6A2_vraddub 1398)
  (UNSPEC_QDSP6_Q6A2_vraddub_acc 1399)
  (UNSPEC_QDSP6_Q6M2_vradduh 1400)
  (UNSPEC_QDSP6_Q6A2_vsubub 1401)
  (UNSPEC_QDSP6_Q6A2_vsububs 1402)
  (UNSPEC_QDSP6_Q6A2_vsubh 1403)
  (UNSPEC_QDSP6_Q6A2_vsubhs 1404)
  (UNSPEC_QDSP6_Q6A2_vsubuhs 1405)
  (UNSPEC_QDSP6_Q6A2_vsubw 1406)
  (UNSPEC_QDSP6_Q6A2_vsubws 1407)
  (UNSPEC_QDSP6_Q6A2_vabsh 1408)
  (UNSPEC_QDSP6_Q6A2_vabshsat 1409)
  (UNSPEC_QDSP6_Q6A2_vabsw 1410)
  (UNSPEC_QDSP6_Q6A2_vabswsat 1411)
  (UNSPEC_QDSP6_Q6M2_vabsdiffw 1412)
  (UNSPEC_QDSP6_Q6M2_vabsdiffh 1413)
  (UNSPEC_QDSP6_Q6A2_vrsadub 1414)
  (UNSPEC_QDSP6_Q6A2_vrsadub_acc 1415)
  (UNSPEC_QDSP6_Q6A2_vavgub 1416)
  (UNSPEC_QDSP6_Q6A2_vavguh 1417)
  (UNSPEC_QDSP6_Q6A2_vavgh 1418)
  (UNSPEC_QDSP6_Q6A2_vnavgh 1419)
  (UNSPEC_QDSP6_Q6A2_vavgw 1420)
  (UNSPEC_QDSP6_Q6A2_vnavgw 1421)
  (UNSPEC_QDSP6_Q6A2_vavgwr 1422)
  (UNSPEC_QDSP6_Q6A2_vnavgwr 1423)
  (UNSPEC_QDSP6_Q6A2_vavgwcr 1424)
  (UNSPEC_QDSP6_Q6A2_vnavgwcr 1425)
  (UNSPEC_QDSP6_Q6A2_vavghcr 1426)
  (UNSPEC_QDSP6_Q6A2_vnavghcr 1427)
  (UNSPEC_QDSP6_Q6A2_vavguw 1428)
  (UNSPEC_QDSP6_Q6A2_vavguwr 1429)
  (UNSPEC_QDSP6_Q6A2_vavgubr 1430)
  (UNSPEC_QDSP6_Q6A2_vavguhr 1431)
  (UNSPEC_QDSP6_Q6A2_vavghr 1432)
  (UNSPEC_QDSP6_Q6A2_vnavghr 1433)
  (UNSPEC_QDSP6_Q6A2_vminh 1434)
  (UNSPEC_QDSP6_Q6A2_vmaxh 1435)
  (UNSPEC_QDSP6_Q6A2_vminub 1436)
  (UNSPEC_QDSP6_Q6A2_vmaxub 1437)
  (UNSPEC_QDSP6_Q6A2_vminuh 1438)
  (UNSPEC_QDSP6_Q6A2_vmaxuh 1439)
  (UNSPEC_QDSP6_Q6A2_vminw 1440)
  (UNSPEC_QDSP6_Q6A2_vmaxw 1441)
  (UNSPEC_QDSP6_Q6A2_vminuw 1442)
  (UNSPEC_QDSP6_Q6A2_vmaxuw 1443)
  (UNSPEC_QDSP6_Q6S2_asr_r_r 1444)
  (UNSPEC_QDSP6_Q6S2_asl_r_r 1445)
  (UNSPEC_QDSP6_Q6S2_lsr_r_r 1446)
  (UNSPEC_QDSP6_Q6S2_lsl_r_r 1447)
  (UNSPEC_QDSP6_Q6S2_asr_r_p 1448)
  (UNSPEC_QDSP6_Q6S2_asl_r_p 1449)
  (UNSPEC_QDSP6_Q6S2_lsr_r_p 1450)
  (UNSPEC_QDSP6_Q6S2_lsl_r_p 1451)
  (UNSPEC_QDSP6_Q6S2_asr_r_r_acc 1452)
  (UNSPEC_QDSP6_Q6S2_asl_r_r_acc 1453)
  (UNSPEC_QDSP6_Q6S2_lsr_r_r_acc 1454)
  (UNSPEC_QDSP6_Q6S2_lsl_r_r_acc 1455)
  (UNSPEC_QDSP6_Q6S2_asr_r_p_acc 1456)
  (UNSPEC_QDSP6_Q6S2_asl_r_p_acc 1457)
  (UNSPEC_QDSP6_Q6S2_lsr_r_p_acc 1458)
  (UNSPEC_QDSP6_Q6S2_lsl_r_p_acc 1459)
  (UNSPEC_QDSP6_Q6S2_asr_r_r_nac 1460)
  (UNSPEC_QDSP6_Q6S2_asl_r_r_nac 1461)
  (UNSPEC_QDSP6_Q6S2_lsr_r_r_nac 1462)
  (UNSPEC_QDSP6_Q6S2_lsl_r_r_nac 1463)
  (UNSPEC_QDSP6_Q6S2_asr_r_p_nac 1464)
  (UNSPEC_QDSP6_Q6S2_asl_r_p_nac 1465)
  (UNSPEC_QDSP6_Q6S2_lsr_r_p_nac 1466)
  (UNSPEC_QDSP6_Q6S2_lsl_r_p_nac 1467)
  (UNSPEC_QDSP6_Q6S2_asr_r_r_and 1468)
  (UNSPEC_QDSP6_Q6S2_asl_r_r_and 1469)
  (UNSPEC_QDSP6_Q6S2_lsr_r_r_and 1470)
  (UNSPEC_QDSP6_Q6S2_lsl_r_r_and 1471)
  (UNSPEC_QDSP6_Q6S2_asr_r_r_or 1472)
  (UNSPEC_QDSP6_Q6S2_asl_r_r_or 1473)
  (UNSPEC_QDSP6_Q6S2_lsr_r_r_or 1474)
  (UNSPEC_QDSP6_Q6S2_lsl_r_r_or 1475)
  (UNSPEC_QDSP6_Q6S2_asr_r_p_and 1476)
  (UNSPEC_QDSP6_Q6S2_asl_r_p_and 1477)
  (UNSPEC_QDSP6_Q6S2_lsr_r_p_and 1478)
  (UNSPEC_QDSP6_Q6S2_lsl_r_p_and 1479)
  (UNSPEC_QDSP6_Q6S2_asr_r_p_or 1480)
  (UNSPEC_QDSP6_Q6S2_asl_r_p_or 1481)
  (UNSPEC_QDSP6_Q6S2_lsr_r_p_or 1482)
  (UNSPEC_QDSP6_Q6S2_lsl_r_p_or 1483)
  (UNSPEC_QDSP6_Q6S2_asr_r_r_sat 1484)
  (UNSPEC_QDSP6_Q6S2_asl_r_r_sat 1485)
  (UNSPEC_QDSP6_Q6S2_asr_i_r 1486)
  (UNSPEC_QDSP6_Q6S2_lsr_i_r 1487)
  (UNSPEC_QDSP6_Q6S2_asl_i_r 1488)
  (UNSPEC_QDSP6_Q6S2_asr_i_p 1489)
  (UNSPEC_QDSP6_Q6S2_lsr_i_p 1490)
  (UNSPEC_QDSP6_Q6S2_asl_i_p 1491)
  (UNSPEC_QDSP6_Q6S2_asr_i_r_acc 1492)
  (UNSPEC_QDSP6_Q6S2_lsr_i_r_acc 1493)
  (UNSPEC_QDSP6_Q6S2_asl_i_r_acc 1494)
  (UNSPEC_QDSP6_Q6S2_asr_i_p_acc 1495)
  (UNSPEC_QDSP6_Q6S2_lsr_i_p_acc 1496)
  (UNSPEC_QDSP6_Q6S2_asl_i_p_acc 1497)
  (UNSPEC_QDSP6_Q6S2_asr_i_r_nac 1498)
  (UNSPEC_QDSP6_Q6S2_lsr_i_r_nac 1499)
  (UNSPEC_QDSP6_Q6S2_asl_i_r_nac 1500)
  (UNSPEC_QDSP6_Q6S2_asr_i_p_nac 1501)
  (UNSPEC_QDSP6_Q6S2_lsr_i_p_nac 1502)
  (UNSPEC_QDSP6_Q6S2_asl_i_p_nac 1503)
  (UNSPEC_QDSP6_Q6S2_lsr_i_r_xacc 1504)
  (UNSPEC_QDSP6_Q6S2_asl_i_r_xacc 1505)
  (UNSPEC_QDSP6_Q6S2_lsr_i_p_xacc 1506)
  (UNSPEC_QDSP6_Q6S2_asl_i_p_xacc 1507)
  (UNSPEC_QDSP6_Q6S2_asr_i_r_and 1508)
  (UNSPEC_QDSP6_Q6S2_lsr_i_r_and 1509)
  (UNSPEC_QDSP6_Q6S2_asl_i_r_and 1510)
  (UNSPEC_QDSP6_Q6S2_asr_i_r_or 1511)
  (UNSPEC_QDSP6_Q6S2_lsr_i_r_or 1512)
  (UNSPEC_QDSP6_Q6S2_asl_i_r_or 1513)
  (UNSPEC_QDSP6_Q6S2_asr_i_p_and 1514)
  (UNSPEC_QDSP6_Q6S2_lsr_i_p_and 1515)
  (UNSPEC_QDSP6_Q6S2_asl_i_p_and 1516)
  (UNSPEC_QDSP6_Q6S2_asr_i_p_or 1517)
  (UNSPEC_QDSP6_Q6S2_lsr_i_p_or 1518)
  (UNSPEC_QDSP6_Q6S2_asl_i_p_or 1519)
  (UNSPEC_QDSP6_Q6S2_asl_i_r_sat 1520)
  (UNSPEC_QDSP6_Q6S2_asr_i_r_rnd 1521)
  (UNSPEC_QDSP6_Q6S2_asr_i_r_rnd_goodsyntax 1522)
  (UNSPEC_QDSP6_Q6S2_addasl_rrri 1523)
  (UNSPEC_QDSP6_Q6S2_valignib 1524)
  (UNSPEC_QDSP6_Q6S2_valignrb 1525)
  (UNSPEC_QDSP6_Q6S2_vspliceib 1526)
  (UNSPEC_QDSP6_Q6S2_vsplicerb 1527)
  (UNSPEC_QDSP6_Q6S2_vsplatrh 1528)
  (UNSPEC_QDSP6_Q6S2_vsplatrb 1529)
  (UNSPEC_QDSP6_Q6S2_insert 1530)
  (UNSPEC_QDSP6_Q6S2_tableidxb_goodsyntax 1531)
  (UNSPEC_QDSP6_Q6S2_tableidxh_goodsyntax 1532)
  (UNSPEC_QDSP6_Q6S2_tableidxw_goodsyntax 1533)
  (UNSPEC_QDSP6_Q6S2_tableidxd_goodsyntax 1534)
  (UNSPEC_QDSP6_Q6S2_extractu 1535)
  (UNSPEC_QDSP6_Q6S2_insertp 1536)
  (UNSPEC_QDSP6_Q6S2_extractup 1537)
  (UNSPEC_QDSP6_Q6S2_insert_rp 1538)
  (UNSPEC_QDSP6_Q6S2_extractu_rp 1539)
  (UNSPEC_QDSP6_Q6S2_insertp_rp 1540)
  (UNSPEC_QDSP6_Q6S2_extractup_rp 1541)
  (UNSPEC_QDSP6_Q6S2_tstbit_i 1542)
  (UNSPEC_QDSP6_Q6S2_setbit_i 1543)
  (UNSPEC_QDSP6_Q6S2_togglebit_i 1544)
  (UNSPEC_QDSP6_Q6S2_clrbit_i 1545)
  (UNSPEC_QDSP6_Q6S2_tstbit_r 1546)
  (UNSPEC_QDSP6_Q6S2_setbit_r 1547)
  (UNSPEC_QDSP6_Q6S2_togglebit_r 1548)
  (UNSPEC_QDSP6_Q6S2_clrbit_r 1549)
  (UNSPEC_QDSP6_Q6S2_asr_i_vh 1550)
  (UNSPEC_QDSP6_Q6S2_lsr_i_vh 1551)
  (UNSPEC_QDSP6_Q6S2_asl_i_vh 1552)
  (UNSPEC_QDSP6_Q6S2_asr_r_vh 1553)
  (UNSPEC_QDSP6_Q6S2_asl_r_vh 1554)
  (UNSPEC_QDSP6_Q6S2_lsr_r_vh 1555)
  (UNSPEC_QDSP6_Q6S2_lsl_r_vh 1556)
  (UNSPEC_QDSP6_Q6S2_asr_i_vw 1557)
  (UNSPEC_QDSP6_Q6S2_asr_i_svw_trun 1558)
  (UNSPEC_QDSP6_Q6S2_asr_r_svw_trun 1559)
  (UNSPEC_QDSP6_Q6S2_lsr_i_vw 1560)
  (UNSPEC_QDSP6_Q6S2_asl_i_vw 1561)
  (UNSPEC_QDSP6_Q6S2_asr_r_vw 1562)
  (UNSPEC_QDSP6_Q6S2_asl_r_vw 1563)
  (UNSPEC_QDSP6_Q6S2_lsr_r_vw 1564)
  (UNSPEC_QDSP6_Q6S2_lsl_r_vw 1565)
  (UNSPEC_QDSP6_Q6S2_vrndpackwh 1566)
  (UNSPEC_QDSP6_Q6S2_vrndpackwhs 1567)
  (UNSPEC_QDSP6_Q6S2_vsxtbh 1568)
  (UNSPEC_QDSP6_Q6S2_vzxtbh 1569)
  (UNSPEC_QDSP6_Q6S2_vsathub 1570)
  (UNSPEC_QDSP6_Q6S2_svsathub 1571)
  (UNSPEC_QDSP6_Q6S2_svsathb 1572)
  (UNSPEC_QDSP6_Q6S2_vsathb 1573)
  (UNSPEC_QDSP6_Q6S2_vtrunohb 1574)
  (UNSPEC_QDSP6_Q6S2_vtrunewh 1575)
  (UNSPEC_QDSP6_Q6S2_vtrunowh 1576)
  (UNSPEC_QDSP6_Q6S2_vtrunehb 1577)
  (UNSPEC_QDSP6_Q6S2_vsxthw 1578)
  (UNSPEC_QDSP6_Q6S2_vzxthw 1579)
  (UNSPEC_QDSP6_Q6S2_vsatwh 1580)
  (UNSPEC_QDSP6_Q6S2_vsatwuh 1581)
  (UNSPEC_QDSP6_Q6S2_packhl 1582)
  (UNSPEC_QDSP6_Q6A2_swiz 1583)
  (UNSPEC_QDSP6_Q6S2_vsathub_nopack 1584)
  (UNSPEC_QDSP6_Q6S2_vsathb_nopack 1585)
  (UNSPEC_QDSP6_Q6S2_vsatwh_nopack 1586)
  (UNSPEC_QDSP6_Q6S2_vsatwuh_nopack 1587)
  (UNSPEC_QDSP6_Q6S2_shuffob 1588)
  (UNSPEC_QDSP6_Q6S2_shuffeb 1589)
  (UNSPEC_QDSP6_Q6S2_shuffoh 1590)
  (UNSPEC_QDSP6_Q6S2_shuffeh 1591)
  (UNSPEC_QDSP6_Q6S2_parityp 1592)
  (UNSPEC_QDSP6_Q6S2_lfsp 1593)
  (UNSPEC_QDSP6_Q6S2_clbnorm 1594)
  (UNSPEC_QDSP6_Q6S2_clb 1595)
  (UNSPEC_QDSP6_Q6S2_cl0 1596)
  (UNSPEC_QDSP6_Q6S2_cl1 1597)
  (UNSPEC_QDSP6_Q6S2_clbp 1598)
  (UNSPEC_QDSP6_Q6S2_cl0p 1599)
  (UNSPEC_QDSP6_Q6S2_cl1p 1600)
  (UNSPEC_QDSP6_Q6S2_brev 1601)
  (UNSPEC_QDSP6_Q6S2_ct0 1602)
  (UNSPEC_QDSP6_Q6S2_ct1 1603)
  (UNSPEC_QDSP6_Q6S2_interleave 1604)
  (UNSPEC_QDSP6_Q6S2_deinterleave 1605)
])

(define_expand "qdsp6_builtin_Q6C2_cmpeq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpeq))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpeq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpeq))]
  ""
  "%0=cmp.eq(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgt))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgt))]
  ""
  "%0=cmp.gt(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgtu))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgtu))]
  ""
  "%0=cmp.gtu(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpeqp"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpeqp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpeqp"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpeqp))]
  ""
  "%0=cmp.eq(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgtp"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgtp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgtp"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgtp))]
  ""
  "%0=cmp.gt(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgtup"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgtup))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgtup"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpgtup))]
  ""
  "%0=cmp.gtu(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6C2_bitsset"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_bitsset))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_bitsset"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_bitsset))]
  "TARGET_V2_FEATURES"
  "%0=bitsset(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_bitsclr"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_bitsclr))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_bitsclr"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_bitsclr))]
  "TARGET_V2_FEATURES"
  "%0=bitsclr(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpeqi"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6C2_cmpeqi))]
  ""
  {
    if(TARGET_V2_FEATURES){
      if(GET_CODE (operands[2]) != CONST_INT){
        error("non-constant integer passed to argument 2 of Q6_p_cmp_eq_RI intrinsic");
      }
      if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is10")){
        error("argument 2 of Q6_p_cmp_eq_RI intrinsic cannot be encoded as s10 immediate");
      }
    }
    else {
      if(GET_CODE (operands[2]) != CONST_INT){
        error("non-constant integer passed to argument 2 of Q6_p_cmp_eq_RI intrinsic");
      }
      if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is8")){
        error("argument 2 of Q6_p_cmp_eq_RI intrinsic cannot be encoded as s8 immediate");
      }
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpeqi_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6C2_cmpeqi))]
  "TARGET_V2_FEATURES"
  "%0=cmp.eq(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6C2_cmpeqi_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_cmpeqi))]
  "!TARGET_V2_FEATURES"
  "%0=cmp.eq(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgti"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6C2_cmpgti))]
  ""
  {
    if(TARGET_V2_FEATURES){
      if(GET_CODE (operands[2]) != CONST_INT){
        error("non-constant integer passed to argument 2 of Q6_p_cmp_gt_RI intrinsic");
      }
      if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is10")){
        error("argument 2 of Q6_p_cmp_gt_RI intrinsic cannot be encoded as s10 immediate");
      }
    }
    else {
      if(GET_CODE (operands[2]) != CONST_INT){
        error("non-constant integer passed to argument 2 of Q6_p_cmp_gt_RI intrinsic");
      }
      if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is8")){
        error("argument 2 of Q6_p_cmp_gt_RI intrinsic cannot be encoded as s8 immediate");
      }
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgti_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6C2_cmpgti))]
  "TARGET_V2_FEATURES"
  "%0=cmp.gt(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6C2_cmpgti_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_cmpgti))]
  "!TARGET_V2_FEATURES"
  "%0=cmp.gt(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgtui"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu9")
        ] UNSPEC_QDSP6_Q6C2_cmpgtui))]
  ""
  {
    if(TARGET_V2_FEATURES){
      if(GET_CODE (operands[2]) != CONST_INT){
        error("non-constant integer passed to argument 2 of Q6_p_cmp_gtu_RI intrinsic");
      }
      if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu9")){
        error("argument 2 of Q6_p_cmp_gtu_RI intrinsic cannot be encoded as u9 immediate");
      }
    }
    else {
      if(GET_CODE (operands[2]) != CONST_INT){
        error("non-constant integer passed to argument 2 of Q6_p_cmp_gtu_RI intrinsic");
      }
      if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu8")){
        error("argument 2 of Q6_p_cmp_gtu_RI intrinsic cannot be encoded as u8 immediate");
      }
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgtui_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu9")
        ] UNSPEC_QDSP6_Q6C2_cmpgtui))]
  "TARGET_V2_FEATURES"
  "%0=cmp.gtu(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6C2_cmpgtui_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu8")
        ] UNSPEC_QDSP6_Q6C2_cmpgtui))]
  "!TARGET_V2_FEATURES"
  "%0=cmp.gtu(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgei"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_cmpgei))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_p_cmp_ge_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is8")){
      error("argument 2 of Q6_p_cmp_ge_RI intrinsic cannot be encoded as s8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgei"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_cmpgei))]
  ""
  "%0=cmp.ge(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpgeui"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu8")
        ] UNSPEC_QDSP6_Q6C2_cmpgeui))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_p_cmp_geu_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu8")){
      error("argument 2 of Q6_p_cmp_geu_RI intrinsic cannot be encoded as u8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpgeui"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu8")
        ] UNSPEC_QDSP6_Q6C2_cmpgeui))]
  ""
  "%0=cmp.geu(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmplt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmplt))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmplt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmplt))]
  "TARGET_V2_FEATURES"
  "%0=cmp.lt(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_cmpltu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpltu))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_cmpltu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_cmpltu))]
  "TARGET_V2_FEATURES"
  "%0=cmp.ltu(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_bitsclri"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6C2_bitsclri))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_p_bitsclr_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu6")){
      error("argument 2 of Q6_p_bitsclr_RI intrinsic cannot be encoded as u6 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_bitsclri"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6C2_bitsclri))]
  "TARGET_V2_FEATURES"
  "%0=bitsclr(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_and"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_and_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_and))]
  "TARGET_V2_FEATURES"
  "%0=and(%1,%2)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6C2_and_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_and))]
  "!TARGET_V2_FEATURES"
  "%0=and(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_or"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_or_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_or))]
  "TARGET_V2_FEATURES"
  "%0=or(%1,%2)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6C2_or_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_or))]
  "!TARGET_V2_FEATURES"
  "%0=or(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_xor"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_xor))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_xor_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_xor))]
  "TARGET_V2_FEATURES"
  "%0=xor(%1,%2)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6C2_xor_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_xor))]
  "!TARGET_V2_FEATURES"
  "%0=xor(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_andn"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_andn))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_andn_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_andn))]
  "TARGET_V2_FEATURES"
  "%0=and(%1,!%2)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6C2_andn_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_andn))]
  "!TARGET_V2_FEATURES"
  "%0=and(%1,!%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_not"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_not))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_not_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_not))]
  "TARGET_V2_FEATURES"
  "%0=not(%1)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6C2_not_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_not))]
  "!TARGET_V2_FEATURES"
  "%0=not(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_orn"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_orn))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_orn"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_orn))]
  "TARGET_V2_FEATURES"
  "%0=or(%1,!%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6C2_pxfer_map"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_pxfer_map))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_pxfer_map"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_pxfer_map))]
  "TARGET_V2_FEATURES"
  "%0=%1"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6C2_any8"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_any8))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_any8_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_any8))]
  "TARGET_V2_FEATURES"
  "%0=any8(%1)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6C2_any8_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_any8))]
  "!TARGET_V2_FEATURES"
  "%0=any8(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_all8"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_all8))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_all8_v2"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_all8))]
  "TARGET_V2_FEATURES"
  "%0=all8(%1)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6C2_all8_v1"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_all8))]
  "!TARGET_V2_FEATURES"
  "%0=all8(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_vitpack"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_vitpack))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_vitpack"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:QI 2 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_vitpack))]
  ""
  "%0=vitpack(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_mux"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_mux))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_mux"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_mux))]
  ""
  "%0=mux(%1,%2,%3)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_muxii"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "immediate_operand" "Is8")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_muxii))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_mux_pII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is8")){
      error("argument 2 of Q6_R_mux_pII intrinsic cannot be encoded as s8 immediate");
    }
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_mux_pII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Is8")){
      error("argument 3 of Q6_R_mux_pII intrinsic cannot be encoded as s8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_muxii"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "immediate_operand" "Is8")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_muxii))]
  "TARGET_V2_FEATURES"
  "%0=mux(%1,#%2,#%3)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_muxir"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_muxir))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_mux_pRI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Is8")){
      error("argument 3 of Q6_R_mux_pRI intrinsic cannot be encoded as s8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_muxir"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6C2_muxir))]
  "TARGET_V2_FEATURES"
  "%0=mux(%1,%2,#%3)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_muxri"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "immediate_operand" "Is8")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_muxri))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_mux_pIR intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is8")){
      error("argument 2 of Q6_R_mux_pIR intrinsic cannot be encoded as s8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6C2_muxri"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:SI 2 "immediate_operand" "Is8")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_muxri))]
  "TARGET_V2_FEATURES"
  "%0=mux(%1,#%2,%3)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6C2_vmux"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_vmux))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_vmux"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_vmux))]
  ""
  "%P0=vmux(%1,%P2,%P3)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6C2_mask"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_mask))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_mask"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_mask))]
  ""
  "%P0=mask(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmpbeq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpbeq))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmpbeq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpbeq))]
  ""
  "%0=vcmpb.eq(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmpbgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpbgtu))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmpbgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpbgtu))]
  ""
  "%0=vcmpb.gtu(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmpheq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpheq))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmpheq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpheq))]
  ""
  "%0=vcmph.eq(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmphgt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmphgt))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmphgt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmphgt))]
  ""
  "%0=vcmph.gt(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmphgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmphgtu))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmphgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmphgtu))]
  ""
  "%0=vcmph.gtu(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmpweq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpweq))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmpweq"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpweq))]
  ""
  "%0=vcmpw.eq(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmpwgt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpwgt))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmpwgt"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpwgt))]
  ""
  "%0=vcmpw.gt(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vcmpwgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpwgtu))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vcmpwgtu"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vcmpwgtu))]
  ""
  "%0=vcmpw.gtu(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6C2_tfrpr"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_tfrpr))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_tfrpr"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:QI 1 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6C2_tfrpr))]
  ""
  "%0=%1"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6C2_tfrrp"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_tfrrp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6C2_tfrrp"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6C2_tfrrp))]
  ""
  "%0=%1"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_machisi3_hh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hh_s0))]
  ""
  "%0+=mpy(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_machisi3_hh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hh_s1))]
  ""
  "%0+=mpy(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hl_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_machisi3_hl(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hl_s0))]
  ""
  "%0+=mpy(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hl_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_machisi3_hl_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_hl_s1))]
  ""
  "%0+=mpy(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_lh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_machisi3_lh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_lh_s0))]
  ""
  "%0+=mpy(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_lh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_machisi3_lh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_lh_s1))]
  ""
  "%0+=mpy(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_ll_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_machisi3_ll(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_ll_s0))]
  ""
  "%0+=mpy(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_ll_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_machisi3_ll_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_ll_s1))]
  ""
  "%0+=mpy(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mnachisi3_hh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hh_s0))]
  ""
  "%0-=mpy(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mnachisi3_hh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hh_s1))]
  ""
  "%0-=mpy(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hl_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_mnachisi3_hl(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hl_s0))]
  ""
  "%0-=mpy(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hl_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_mnachisi3_hl_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_hl_s1))]
  ""
  "%0-=mpy(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_lh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_mnachisi3_lh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_lh_s0))]
  ""
  "%0-=mpy(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_lh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_mnachisi3_lh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_lh_s1))]
  ""
  "%0-=mpy(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_ll_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_mnachisi3_ll(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_ll_s0))]
  ""
  "%0-=mpy(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_ll_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_mnachisi3_ll_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_ll_s1))]
  ""
  "%0-=mpy(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ssmachisi3_hh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hh_s0))]
  ""
  "%0+=mpy(%2.h,%3.h):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ssmachisi3_hh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hh_s1))]
  ""
  "%0+=mpy(%2.h,%3.h):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hl_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmachisi3_hl(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hl_s0))]
  ""
  "%0+=mpy(%2.h,%3.l):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hl_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmachisi3_hl_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_hl_s1))]
  ""
  "%0+=mpy(%2.h,%3.l):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_lh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmachisi3_lh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_lh_s0))]
  ""
  "%0+=mpy(%2.l,%3.h):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_lh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmachisi3_lh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_lh_s1))]
  ""
  "%0+=mpy(%2.l,%3.h):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_ll_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmachisi3_ll(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_ll_s0))]
  ""
  "%0+=mpy(%2.l,%3.l):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_acc_sat_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_ll_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmachisi3_ll_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_acc_sat_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_acc_sat_ll_s1))]
  ""
  "%0+=mpy(%2.l,%3.l):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ssmnachisi3_hh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hh_s0))]
  ""
  "%0-=mpy(%2.h,%3.h):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ssmnachisi3_hh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hh_s1))]
  ""
  "%0-=mpy(%2.h,%3.h):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hl_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmnachisi3_hl(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hl_s0))]
  ""
  "%0-=mpy(%2.h,%3.l):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hl_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmnachisi3_hl_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_hl_s1))]
  ""
  "%0-=mpy(%2.h,%3.l):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_lh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmnachisi3_lh(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_lh_s0))]
  ""
  "%0-=mpy(%2.l,%3.h):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_lh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmnachisi3_lh_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_lh_s1))]
  ""
  "%0-=mpy(%2.l,%3.h):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_ll_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmnachisi3_ll(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_ll_s0))]
  ""
  "%0-=mpy(%2.l,%3.l):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_nac_sat_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_ll_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      rtx op3 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_move_insn(op3, gen_lowpart(HImode, operands[3]));
      operands[3] = op3;
      emit_insn(gen_ssmnachisi3_ll_s1(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_nac_sat_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_nac_sat_ll_s1))]
  ""
  "%0-=mpy(%2.l,%3.l):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mulhisi3_hh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hh_s0))]
  ""
  "%0=mpy(%1.h,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mulhisi3_hh_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hh_s1))]
  ""
  "%0=mpy(%1.h,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hl_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_mulhisi3_hl(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hl_s0))]
  ""
  "%0=mpy(%1.h,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hl_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_mulhisi3_hl_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_hl_s1))]
  ""
  "%0=mpy(%1.h,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_lh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_insn(gen_mulhisi3_lh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_lh_s0))]
  ""
  "%0=mpy(%1.l,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_lh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_insn(gen_mulhisi3_lh_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_lh_s1))]
  ""
  "%0=mpy(%1.l,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_ll_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_mulhisi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_ll_s0))]
  ""
  "%0=mpy(%1.l,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_ll_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_mulhisi3_ll_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_ll_s1))]
  ""
  "%0=mpy(%1.l,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ssmulhisi3_hh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hh_s0))]
  ""
  "%0=mpy(%1.h,%2.h):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ssmulhisi3_hh_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hh_s1))]
  ""
  "%0=mpy(%1.h,%2.h):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hl_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmulhisi3_hl(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hl_s0))]
  ""
  "%0=mpy(%1.h,%2.l):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hl_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmulhisi3_hl_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_hl_s1))]
  ""
  "%0=mpy(%1.h,%2.l):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_lh_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_insn(gen_ssmulhisi3_lh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_lh_s0))]
  ""
  "%0=mpy(%1.l,%2.h):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_lh_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_insn(gen_ssmulhisi3_lh_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_lh_s1))]
  ""
  "%0=mpy(%1.l,%2.h):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_ll_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmulhisi3_ll(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_ll_s0))]
  ""
  "%0=mpy(%1.l,%2.l):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_ll_s1))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssmulhisi3_ll_s1(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_ll_s1))]
  ""
  "%0=mpy(%1.l,%2.l):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hh_s0))]
  ""
  "%0=mpy(%1.h,%2.h):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hh_s1))]
  ""
  "%0=mpy(%1.h,%2.h):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hl_s0))]
  ""
  "%0=mpy(%1.h,%2.l):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_hl_s1))]
  ""
  "%0=mpy(%1.h,%2.l):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_lh_s0))]
  ""
  "%0=mpy(%1.l,%2.h):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_lh_s1))]
  ""
  "%0=mpy(%1.l,%2.h):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_ll_s0))]
  ""
  "%0=mpy(%1.l,%2.l):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_rnd_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_rnd_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_rnd_ll_s1))]
  ""
  "%0=mpy(%1.l,%2.l):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hh_s0))]
  ""
  "%0=mpy(%1.h,%2.h):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hh_s1))]
  ""
  "%0=mpy(%1.h,%2.h):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hl_s0))]
  ""
  "%0=mpy(%1.h,%2.l):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_hl_s1))]
  ""
  "%0=mpy(%1.h,%2.l):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_lh_s0))]
  ""
  "%0=mpy(%1.l,%2.h):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_lh_s1))]
  ""
  "%0=mpy(%1.l,%2.h):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_ll_s0))]
  ""
  "%0=mpy(%1.l,%2.l):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_sat_rnd_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_sat_rnd_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_sat_rnd_ll_s1))]
  ""
  "%0=mpy(%1.l,%2.l):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hh_s0))]
  ""
  "%P0+=mpy(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hh_s1))]
  ""
  "%P0+=mpy(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hl_s0))]
  ""
  "%P0+=mpy(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_hl_s1))]
  ""
  "%P0+=mpy(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_lh_s0))]
  ""
  "%P0+=mpy(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_lh_s1))]
  ""
  "%P0+=mpy(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_ll_s0))]
  ""
  "%P0+=mpy(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_acc_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_acc_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_acc_ll_s1))]
  ""
  "%P0+=mpy(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hh_s0))]
  ""
  "%P0-=mpy(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hh_s1))]
  ""
  "%P0-=mpy(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hl_s0))]
  ""
  "%P0-=mpy(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_hl_s1))]
  ""
  "%P0-=mpy(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_lh_s0))]
  ""
  "%P0-=mpy(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_lh_s1))]
  ""
  "%P0-=mpy(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_ll_s0))]
  ""
  "%P0-=mpy(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_nac_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_nac_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_nac_ll_s1))]
  ""
  "%P0-=mpy(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hh_s0))]
  ""
  "%P0=mpy(%1.h,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hh_s1))]
  ""
  "%P0=mpy(%1.h,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hl_s0))]
  ""
  "%P0=mpy(%1.h,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_hl_s1))]
  ""
  "%P0=mpy(%1.h,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_lh_s0))]
  ""
  "%P0=mpy(%1.l,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_lh_s1))]
  ""
  "%P0=mpy(%1.l,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_ll_s0))]
  ""
  "%P0=mpy(%1.l,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_ll_s1))]
  ""
  "%P0=mpy(%1.l,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hh_s0))]
  ""
  "%P0=mpy(%1.h,%2.h):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hh_s1))]
  ""
  "%P0=mpy(%1.h,%2.h):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hl_s0))]
  ""
  "%P0=mpy(%1.h,%2.l):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_hl_s1))]
  ""
  "%P0=mpy(%1.h,%2.l):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_lh_s0))]
  ""
  "%P0=mpy(%1.l,%2.h):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_lh_s1))]
  ""
  "%P0=mpy(%1.l,%2.h):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_ll_s0))]
  ""
  "%P0=mpy(%1.l,%2.l):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyd_rnd_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyd_rnd_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyd_rnd_ll_s1))]
  ""
  "%P0=mpy(%1.l,%2.l):<<1:rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hh_s0))]
  ""
  "%0+=mpyu(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hh_s1))]
  ""
  "%0+=mpyu(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hl_s0))]
  ""
  "%0+=mpyu(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_hl_s1))]
  ""
  "%0+=mpyu(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_lh_s0))]
  ""
  "%0+=mpyu(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_lh_s1))]
  ""
  "%0+=mpyu(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_ll_s0))]
  ""
  "%0+=mpyu(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_acc_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_acc_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_acc_ll_s1))]
  ""
  "%0+=mpyu(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hh_s0))]
  ""
  "%0-=mpyu(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hh_s1))]
  ""
  "%0-=mpyu(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hl_s0))]
  ""
  "%0-=mpyu(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_hl_s1))]
  ""
  "%0-=mpyu(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_lh_s0))]
  ""
  "%0-=mpyu(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_lh_s1))]
  ""
  "%0-=mpyu(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_ll_s0))]
  ""
  "%0-=mpyu(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_nac_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_nac_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_nac_ll_s1))]
  ""
  "%0-=mpyu(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_hh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hh_s0))]
  ""
  "%0=mpyu(%1.h,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_hh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hh_s1))]
  ""
  "%0=mpyu(%1.h,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_hl_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hl_s0))]
  ""
  "%0=mpyu(%1.h,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_hl_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_hl_s1))]
  ""
  "%0=mpyu(%1.h,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_lh_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_lh_s0))]
  ""
  "%0=mpyu(%1.l,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_lh_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_lh_s1))]
  ""
  "%0=mpyu(%1.l,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_ll_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_ll_s0))]
  ""
  "%0=mpyu(%1.l,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_ll_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_ll_s1))]
  ""
  "%0=mpyu(%1.l,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hh_s0))]
  ""
  "%P0+=mpyu(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hh_s1))]
  ""
  "%P0+=mpyu(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hl_s0))]
  ""
  "%P0+=mpyu(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_hl_s1))]
  ""
  "%P0+=mpyu(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_lh_s0))]
  ""
  "%P0+=mpyu(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_lh_s1))]
  ""
  "%P0+=mpyu(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_ll_s0))]
  ""
  "%P0+=mpyu(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_acc_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_acc_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_acc_ll_s1))]
  ""
  "%P0+=mpyu(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hh_s0))]
  ""
  "%P0-=mpyu(%2.h,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hh_s1))]
  ""
  "%P0-=mpyu(%2.h,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hl_s0))]
  ""
  "%P0-=mpyu(%2.h,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_hl_s1))]
  ""
  "%P0-=mpyu(%2.h,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_lh_s0))]
  ""
  "%P0-=mpyu(%2.l,%3.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_lh_s1))]
  ""
  "%P0-=mpyu(%2.l,%3.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_ll_s0))]
  ""
  "%P0-=mpyu(%2.l,%3.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_nac_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_nac_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_nac_ll_s1))]
  ""
  "%P0-=mpyu(%2.l,%3.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_hh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hh_s0))]
  ""
  "%P0=mpyu(%1.h,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_hh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hh_s1))]
  ""
  "%P0=mpyu(%1.h,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_hl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hl_s0))]
  ""
  "%P0=mpyu(%1.h,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_hl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_hl_s1))]
  ""
  "%P0=mpyu(%1.h,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_lh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_lh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_lh_s0))]
  ""
  "%P0=mpyu(%1.l,%2.h)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_lh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_lh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_lh_s1))]
  ""
  "%P0=mpyu(%1.l,%2.h):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_ll_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_ll_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_ll_s0))]
  ""
  "%P0=mpyu(%1.l,%2.l)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyud_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_ll_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyud_ll_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyud_ll_s1))]
  ""
  "%P0=mpyu(%1.l,%2.l):<<1"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpysmi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Im9")
        ] UNSPEC_QDSP6_Q6M2_mpysmi))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_mpyi_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Im9")){
      error("argument 2 of Q6_R_mpyi_RI intrinsic cannot be encoded as m9 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpysmi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Im9")
        ] UNSPEC_QDSP6_Q6M2_mpysmi))]
  "TARGET_V2_FEATURES"
  "%0=mpyi(%1,#%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6M2_macsip"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu8")
        ] UNSPEC_QDSP6_Q6M2_macsip))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_mpyiacc_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu8")){
      error("argument 3 of Q6_R_mpyiacc_RI intrinsic cannot be encoded as u8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_macsip"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu8")
        ] UNSPEC_QDSP6_Q6M2_macsip))]
  "TARGET_V2_FEATURES"
  "%0+=mpyi(%2,#%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_macsin"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu8")
        ] UNSPEC_QDSP6_Q6M2_macsin))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_mpyinac_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu8")){
      error("argument 3 of Q6_R_mpyinac_RI intrinsic cannot be encoded as u8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_macsin"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu8")
        ] UNSPEC_QDSP6_Q6M2_macsin))]
  "TARGET_V2_FEATURES"
  "%0-=mpyi(%2,#%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_dpmpyss_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mulsidi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_dpmpyss_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_s0))]
  ""
  "%P0=mpy(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_dpmpyss_acc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_acc_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_macsidi3(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_dpmpyss_acc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_acc_s0))]
  ""
  "%P0+=mpy(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_dpmpyss_nac_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_nac_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mnacsidi3(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_dpmpyss_nac_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_nac_s0))]
  ""
  "%P0-=mpy(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_dpmpyuu_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyuu_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_umulsidi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_dpmpyuu_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyuu_s0))]
  ""
  "%P0=mpyu(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_dpmpyuu_acc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyuu_acc_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_umacsidi3(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_dpmpyuu_acc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyuu_acc_s0))]
  ""
  "%P0+=mpyu(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_dpmpyuu_nac_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyuu_nac_s0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_umnacsidi3(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_dpmpyuu_nac_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyuu_nac_s0))]
  ""
  "%P0-=mpyu(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpy_up"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_up))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_smulsi3_highpart(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpy_up"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpy_up))]
  ""
  "%0=mpy(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyu_up"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_up))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_umulsi3_highpart(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyu_up"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyu_up))]
  ""
  "%0=mpyu(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_dpmpyss_rnd_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_rnd_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_dpmpyss_rnd_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_dpmpyss_rnd_s0))]
  ""
  "%0=mpy(%1,%2):rnd"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyi))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mulsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyi))]
  ""
  "%0=mpyi(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mpyui"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyui))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_mulsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_mpyui_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyui))]
  "TARGET_V2_FEATURES"
  "%0=mpyui(%1,%2)"
  [(set_attr "type" "X")]
)


(define_insn "qdsp6_unspec_Q6M2_mpyui_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mpyui))]
  "!TARGET_V2_FEATURES"
  "%0=mpyui(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_maci"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_maci))]
  "TARGET_V2_FEATURES"
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_macsi3(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_maci"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_maci))]
  "TARGET_V2_FEATURES"
  "%0+=mpyi(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_acci"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_acci))]
  "TARGET_V2_FEATURES"
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addaccsi3(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_acci"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_acci))]
  "TARGET_V2_FEATURES"
  "%0+=add(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_accii"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6M2_accii))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_addacc_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Is8")){
      error("argument 3 of Q6_R_addacc_RI intrinsic cannot be encoded as s8 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addaccsi3(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_accii"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6M2_accii))]
  "TARGET_V2_FEATURES"
  "%0+=add(%2,#%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_nacci"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_nacci))]
  "TARGET_V2_FEATURES"
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addnacc1si3(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_nacci"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_nacci))]
  "TARGET_V2_FEATURES"
  "%0-=add(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_naccii"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6M2_naccii))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_addnac_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Is8")){
      error("argument 3 of Q6_R_addnac_RI intrinsic cannot be encoded as s8 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addnacc1si3(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_naccii"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6M2_naccii))]
  "TARGET_V2_FEATURES"
  "%0-=add(%2,#%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_subacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_subacc))]
  "TARGET_V2_FEATURES"
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_subacc1si3(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6M2_subacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_subacc))]
  "TARGET_V2_FEATURES"
  "%0+=sub(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmpy2s_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmpy2s_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s0))]
  ""
  "%P0=vmpyh(%1,%2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmpy2s_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmpy2s_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s1))]
  ""
  "%P0=vmpyh(%1,%2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmac2s_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2s_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmac2s_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2s_s0))]
  ""
  "%P0+=vmpyh(%2,%3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmac2s_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2s_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmac2s_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2s_s1))]
  ""
  "%P0+=vmpyh(%2,%3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmpy2s_s0pack"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s0pack))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmpy2s_s0pack"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s0pack))]
  "TARGET_V2_FEATURES"
  "%0=vmpyh(%1,%2):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmpy2s_s1pack"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s1pack))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmpy2s_s1pack"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2s_s1pack))]
  "TARGET_V2_FEATURES"
  "%0=vmpyh(%1,%2):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmac2"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmac2"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2))]
  "TARGET_V2_FEATURES"
  "%P0+=vmpyh(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmpy2es_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2es_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmpy2es_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2es_s0))]
  ""
  "%P0=vmpyeh(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmpy2es_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2es_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmpy2es_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmpy2es_s1))]
  ""
  "%P0=vmpyeh(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmac2es_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2es_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmac2es_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2es_s0))]
  ""
  "%P0+=vmpyeh(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmac2es_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2es_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmac2es_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2es_s1))]
  ""
  "%P0+=vmpyeh(%P2,%P3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vmac2es"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2es))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vmac2es"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vmac2es))]
  "TARGET_V2_FEATURES"
  "%P0+=vmpyeh(%P2,%P3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrmac_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrmac_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrmac_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrmac_s0))]
  ""
  "%P0+=vrmpyh(%P2,%P3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrmpy_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrmpy_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrmpy_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrmpy_s0))]
  ""
  "%P0=vrmpyh(%P1,%P2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vdmpyrs_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpyrs_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vdmpyrs_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpyrs_s0))]
  ""
  "%0=vdmpy(%P1,%P2):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vdmpyrs_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpyrs_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vdmpyrs_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpyrs_s1))]
  ""
  "%0=vdmpy(%P1,%P2):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vdmacs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmacs_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vdmacs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmacs_s0))]
  ""
  "%P0+=vdmpy(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vdmacs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmacs_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vdmacs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmacs_s1))]
  ""
  "%P0+=vdmpy(%P2,%P3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vdmpys_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpys_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vdmpys_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpys_s0))]
  ""
  "%P0=vdmpy(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vdmpys_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpys_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vdmpys_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vdmpys_s1))]
  ""
  "%P0=vdmpy(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpyrs_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrs_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpyrs_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrs_s0))]
  ""
  "%0=cmpy(%1,%2):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpyrs_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrs_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpyrs_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrs_s1))]
  ""
  "%0=cmpy(%1,%2):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpyrsc_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrsc_s0))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpyrsc_s0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrsc_s0))]
  "TARGET_V2_FEATURES"
  "%0=cmpy(%1,%2*):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpyrsc_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrsc_s1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpyrsc_s1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyrsc_s1))]
  "TARGET_V2_FEATURES"
  "%0=cmpy(%1,%2*):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmacs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacs_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmacs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacs_s0))]
  ""
  "%P0+=cmpy(%2,%3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmacs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacs_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmacs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacs_s1))]
  ""
  "%P0+=cmpy(%2,%3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmacsc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacsc_s0))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmacsc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacsc_s0))]
  "TARGET_V2_FEATURES"
  "%P0+=cmpy(%2,%3*):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmacsc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacsc_s1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmacsc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacsc_s1))]
  "TARGET_V2_FEATURES"
  "%P0+=cmpy(%2,%3*):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpys_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpys_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpys_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpys_s0))]
  ""
  "%P0=cmpy(%1,%2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpys_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpys_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpys_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpys_s1))]
  ""
  "%P0=cmpy(%1,%2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpysc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpysc_s0))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpysc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpysc_s0))]
  "TARGET_V2_FEATURES"
  "%P0=cmpy(%1,%2*):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpysc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpysc_s1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpysc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpysc_s1))]
  "TARGET_V2_FEATURES"
  "%P0=cmpy(%1,%2*):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cnacs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacs_s0))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cnacs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacs_s0))]
  "TARGET_V2_FEATURES"
  "%P0-=cmpy(%2,%3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cnacs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacs_s1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cnacs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacs_s1))]
  "TARGET_V2_FEATURES"
  "%P0-=cmpy(%2,%3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cnacsc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacsc_s0))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cnacsc_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacsc_s0))]
  "TARGET_V2_FEATURES"
  "%P0-=cmpy(%2,%3*):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cnacsc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacsc_s1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cnacsc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cnacsc_s1))]
  "TARGET_V2_FEATURES"
  "%P0-=cmpy(%2,%3*):<<1:sat"
  [(set_attr "type" "M")]
)

(define_expand "qdsp6_builtin_Q6M2_vrcmpys_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpys_s1))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmpys_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpys_s1))]
  "TARGET_V3_FEATURES"
  "%P0=vrcmpys(%P1,%2):<<1:sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmpys_acc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpys_acc_s1))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmpys_acc_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpys_acc_s1))]
  "TARGET_V3_FEATURES"
  "%P0+=vrcmpys(%P2,%3):<<1:sat"
  [(set_attr "type" "X")]
)

(define_expand "qdsp6_builtin_Q6M2_vrcmpys_s1rp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpys_s1rp))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmpys_s1rp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpys_s1rp))]
  "TARGET_V3_FEATURES"
  "%0=vrcmpys(%P1,%2):<<1:rnd:sat"
  [(set_attr "type" "X")]
)



(define_expand "qdsp6_builtin_Q6M2_mmacls_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacls_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_s0))]
  ""
  "%P0+=vmpyweh(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmacls_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacls_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_s1))]
  ""
  "%P0+=vmpyweh(%P2,%P3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmachs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmachs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_s0))]
  ""
  "%P0+=vmpywoh(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmachs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmachs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_s1))]
  ""
  "%P0+=vmpywoh(%P2,%P3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyl_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_s0))]
  ""
  "%P0=vmpyweh(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyl_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_s1))]
  ""
  "%P0=vmpyweh(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_s0))]
  ""
  "%P0=vmpywoh(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_s1))]
  ""
  "%P0=vmpywoh(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmacls_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacls_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_rs0))]
  ""
  "%P0+=vmpyweh(%P2,%P3):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmacls_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacls_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacls_rs1))]
  ""
  "%P0+=vmpyweh(%P2,%P3):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmachs_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmachs_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_rs0))]
  ""
  "%P0+=vmpywoh(%P2,%P3):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmachs_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmachs_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmachs_rs1))]
  ""
  "%P0+=vmpywoh(%P2,%P3):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyl_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyl_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_rs0))]
  ""
  "%P0=vmpyweh(%P1,%P2):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyl_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyl_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyl_rs1))]
  ""
  "%P0=vmpyweh(%P1,%P2):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyh_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyh_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_rs0))]
  ""
  "%P0=vmpywoh(%P1,%P2):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyh_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyh_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyh_rs1))]
  ""
  "%P0=vmpywoh(%P1,%P2):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_hmmpyl_rs1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_hmmpyl_rs1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_hmmpyl_rs1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_hmmpyl_rs1))]
  "TARGET_V2_FEATURES"
  "%0=mpy(%1,%2.l):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_hmmpyh_rs1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_hmmpyh_rs1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_hmmpyh_rs1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_hmmpyh_rs1))]
  "TARGET_V2_FEATURES"
  "%0=mpy(%1,%2.h):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmaculs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmaculs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_s0))]
  ""
  "%P0+=vmpyweuh(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmaculs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmaculs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_s1))]
  ""
  "%P0+=vmpyweuh(%P2,%P3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmacuhs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacuhs_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_s0))]
  ""
  "%P0+=vmpywouh(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmacuhs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacuhs_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_s1))]
  ""
  "%P0+=vmpywouh(%P2,%P3):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyul_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyul_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_s0))]
  ""
  "%P0=vmpyweuh(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyul_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyul_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_s1))]
  ""
  "%P0=vmpyweuh(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyuh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyuh_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_s0))]
  ""
  "%P0=vmpywouh(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyuh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_s1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyuh_s1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_s1))]
  ""
  "%P0=vmpywouh(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmaculs_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmaculs_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_rs0))]
  ""
  "%P0+=vmpyweuh(%P2,%P3):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmaculs_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmaculs_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmaculs_rs1))]
  ""
  "%P0+=vmpyweuh(%P2,%P3):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmacuhs_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacuhs_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_rs0))]
  ""
  "%P0+=vmpywouh(%P2,%P3):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmacuhs_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmacuhs_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmacuhs_rs1))]
  ""
  "%P0+=vmpywouh(%P2,%P3):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyul_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyul_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_rs0))]
  ""
  "%P0=vmpyweuh(%P1,%P2):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyul_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyul_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyul_rs1))]
  ""
  "%P0=vmpyweuh(%P1,%P2):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyuh_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_rs0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyuh_rs0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_rs0))]
  ""
  "%P0=vmpywouh(%P1,%P2):rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_mmpyuh_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_rs1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_mmpyuh_rs1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_mmpyuh_rs1))]
  ""
  "%P0=vmpywouh(%P1,%P2):<<1:rnd:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmaci_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmaci_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmaci_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmaci_s0))]
  ""
  "%P0+=vrcmpyi(%P2,%P3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmacr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmacr_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmacr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmacr_s0))]
  ""
  "%P0+=vrcmpyr(%P2,%P3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmaci_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmaci_s0c))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmaci_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmaci_s0c))]
  "TARGET_V2_FEATURES"
  "%P0+=vrcmpyi(%P2,%P3*)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmacr_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmacr_s0c))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmacr_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmacr_s0c))]
  "TARGET_V2_FEATURES"
  "%P0+=vrcmpyr(%P2,%P3*)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmaci_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmaci_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmaci_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmaci_s0))]
  ""
  "%P0+=cmpyi(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmacr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacr_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmacr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmacr_s0))]
  ""
  "%P0+=cmpyr(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmpyi_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyi_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmpyi_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyi_s0))]
  ""
  "%P0=vrcmpyi(%P1,%P2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmpyr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyr_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmpyr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyr_s0))]
  ""
  "%P0=vrcmpyr(%P1,%P2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmpyi_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyi_s0c))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmpyi_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyi_s0c))]
  "TARGET_V2_FEATURES"
  "%P0=vrcmpyi(%P1,%P2*)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vrcmpyr_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyr_s0c))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vrcmpyr_s0c"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vrcmpyr_s0c))]
  "TARGET_V2_FEATURES"
  "%P0=vrcmpyr(%P1,%P2*)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpyi_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyi_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpyi_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyi_s0))]
  ""
  "%P0=cmpyi(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_cmpyr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyr_s0))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_cmpyr_s0"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_cmpyr_s0))]
  ""
  "%P0=cmpyr(%1,%2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vcmpy_s0_sat_i"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s0_sat_i))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vcmpy_s0_sat_i"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s0_sat_i))]
  "TARGET_V2_FEATURES"
  "%P0=vcmpyi(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vcmpy_s0_sat_r"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s0_sat_r))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vcmpy_s0_sat_r"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s0_sat_r))]
  "TARGET_V2_FEATURES"
  "%P0=vcmpyr(%P1,%P2):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vcmpy_s1_sat_i"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s1_sat_i))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vcmpy_s1_sat_i"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s1_sat_i))]
  "TARGET_V2_FEATURES"
  "%P0=vcmpyi(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vcmpy_s1_sat_r"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s1_sat_r))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vcmpy_s1_sat_r"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmpy_s1_sat_r))]
  "TARGET_V2_FEATURES"
  "%P0=vcmpyr(%P1,%P2):<<1:sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vcmac_s0_sat_i"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmac_s0_sat_i))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vcmac_s0_sat_i"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmac_s0_sat_i))]
  "TARGET_V2_FEATURES"
  "%P0+=vcmpyi(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vcmac_s0_sat_r"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmac_s0_sat_r))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vcmac_s0_sat_r"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vcmac_s0_sat_r))]
  "TARGET_V2_FEATURES"
  "%P0+=vcmpyr(%P2,%P3):sat"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6S2_vcrotate"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vcrotate))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vcrotate"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vcrotate))]
  "TARGET_V2_FEATURES"
  "%P0=vcrotate(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_add"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_add))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_add"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_add))]
  ""
  "%0=add(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_sub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sub))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_subsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_sub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sub))]
  ""
  "%0=sub(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_addsat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addsat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addsat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addsat))]
  ""
  "%0=add(%1,%2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subsat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subsat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subsat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subsat))]
  ""
  "%0=sub(%1,%2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is16")
        ] UNSPEC_QDSP6_Q6A2_addi))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_add_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is16")){
      error("argument 2 of Q6_R_add_RI intrinsic cannot be encoded as s16 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_addi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is16")
        ] UNSPEC_QDSP6_Q6A2_addi))]
  ""
  "%0=add(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_l16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_ll))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addhi3_ll(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_l16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_ll))]
  ""
  "%0=add(%1.l,%2.l)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_l16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_hl))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addhi3_lh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_l16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_hl))]
  ""
  "%0=add(%1.l,%2.h)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_l16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_sat_ll))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_ssaddhi3_ll(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_l16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_sat_ll))]
  ""
  "%0=add(%1.l,%2.l):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_l16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_sat_hl))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_insn(gen_ssaddhi3_lh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_l16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_l16_sat_hl))]
  ""
  "%0=add(%1.l,%2.h):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_l16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_ll))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_subhi3_ll(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_l16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_ll))]
  ""
  "%0=sub(%1.l,%2.l)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_l16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_hl))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_subhi3_lh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_l16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_hl))]
  ""
  "%0=sub(%1.l,%2.h)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_l16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_sat_ll))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      rtx op2 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_move_insn(op2, gen_lowpart(HImode, operands[2]));
      operands[2] = op2;
      emit_insn(gen_sssubhi3_ll(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_l16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_sat_ll))]
  ""
  "%0=sub(%1.l,%2.l):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_l16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_sat_hl))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_insn(gen_sssubhi3_lh(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_l16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_l16_sat_hl))]
  ""
  "%0=sub(%1.l,%2.h):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_ll))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_ll))]
  ""
  "%0=add(%1.l,%2.l):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_lh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_lh))]
  ""
  "%0=add(%1.l,%2.h):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_hl))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_hl))]
  ""
  "%0=add(%1.h,%2.l):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_hh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_hh))]
  ""
  "%0=add(%1.h,%2.h):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_ll))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_ll))]
  ""
  "%0=add(%1.l,%2.l):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_sat_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_lh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_sat_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_lh))]
  ""
  "%0=add(%1.l,%2.h):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_hl))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_hl))]
  ""
  "%0=add(%1.h,%2.l):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addh_h16_sat_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_hh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addh_h16_sat_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addh_h16_sat_hh))]
  ""
  "%0=add(%1.h,%2.h):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_ll))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_ll))]
  ""
  "%0=sub(%1.l,%2.l):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_lh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_lh))]
  ""
  "%0=sub(%1.l,%2.h):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_hl))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_hl))]
  ""
  "%0=sub(%1.h,%2.l):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_hh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_hh))]
  ""
  "%0=sub(%1.h,%2.h):<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_ll))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_sat_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_ll))]
  ""
  "%0=sub(%1.l,%2.l):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_sat_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_lh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_sat_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_lh))]
  ""
  "%0=sub(%1.l,%2.h):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_hl))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_sat_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_hl))]
  ""
  "%0=sub(%1.h,%2.l):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_subh_h16_sat_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_hh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_subh_h16_sat_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subh_h16_sat_hh))]
  ""
  "%0=sub(%1.h,%2.h):sat:<<16"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_aslh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_aslh))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashlsi3(operands[0], operands[1], GEN_INT (16)));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_aslh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_aslh))]
  ""
  "%0=aslh(%1)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_asrh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_asrh))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrsi3(operands[0], operands[1], GEN_INT (16)));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_asrh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_asrh))]
  ""
  "%0=asrh(%1)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_addp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_adddi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_addp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addp))]
  ""
  "%P0=add(%P1,%P2)"
  [(set_attr "type" "X")]
)
(define_expand "qdsp6_builtin_Q6A2_addpsat"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addpsat))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addpsat"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addpsat))]
  "TARGET_V3_FEATURES"
  "%P0=add(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_addsp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addsp))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_addsp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_addsp))]
  "TARGET_V3_FEATURES"
  "%P0=add(%1,%P2)"
  [(set_attr "type" "X")]
)

(define_expand "qdsp6_builtin_Q6A2_subp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_subdi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_subp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subp))]
  ""
  "%P0=sub(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_neg"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_neg))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_negsi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_neg"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_neg))]
  ""
  "%0=neg(%1)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_negsat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_negsat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_negsat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_negsat))]
  ""
  "%0=neg(%1):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_abs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_abs))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_abssi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_abs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_abs))]
  ""
  "%0=abs(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_abssat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_abssat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_abssat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_abssat))]
  ""
  "%0=abs(%1):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_vconj"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vconj))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vconj"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vconj))]
  "TARGET_V2_FEATURES"
  "%P0=vconj(%P1):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_negp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_negp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_negdi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_negp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_negp))]
  ""
  "%P0=neg(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_absp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_absp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_absdi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_absp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_absp))]
  ""
  "%P0=abs(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_max"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_max))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_smaxsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_max"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_max))]
  ""
  "%0=max(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_maxu"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_maxu))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_umaxsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_maxu"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_maxu))]
  ""
  "%0=maxu(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_min"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_min))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_sminsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_min"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_min))]
  ""
  "%0=min(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_minu"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_minu))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_uminsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_minu"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_minu))]
  ""
  "%0=minu(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_maxp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_maxp))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_maxp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_maxp))]
  "TARGET_V3_FEATURES"
  "%P0=max(%P1,%P2)"
  [(set_attr "type" "X")]
)

(define_expand "qdsp6_builtin_Q6A2_maxup"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_maxup))]
  "TARGET_V3_FEATURES"
  {
  }
)

(define_insn "qdsp6_unspec_Q6A2_maxup"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_maxup))]
  "TARGET_V3_FEATURES"
  "%P0=maxu(%P1,%P2)"
  [(set_attr "type" "X")]
)

(define_expand "qdsp6_builtin_Q6A2_minp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_minp))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_minp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_minp))]
  "TARGET_V3_FEATURES"
  "%P0=min(%P1,%P2)"
  [(set_attr "type" "X")]
)

(define_expand "qdsp6_builtin_Q6A2_minup"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_minup))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_minup"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_minup))]
  "TARGET_V3_FEATURES"
  "%P0=minu(%P1,%P2)"
  [(set_attr "type" "X")]
)

(define_expand "qdsp6_builtin_Q6A2_tfr"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_tfr))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_movsi(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_tfr"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_tfr))]
  ""
  "%0=%1"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_tfrsi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "immediate_operand" "Is16")
        ] UNSPEC_QDSP6_Q6A2_tfrsi))]
  ""
  {
    if(GET_CODE (operands[1]) != CONST_INT){
      error("non-constant integer passed to argument 1 of Q6_R_equals_I intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'I', "Is16")){
      error("argument 1 of Q6_R_equals_I intrinsic cannot be encoded as s16 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_movsi(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_tfrsi"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "immediate_operand" "Is16")
        ] UNSPEC_QDSP6_Q6A2_tfrsi))]
  ""
  "%0=#%1"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_tfrp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_tfrp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_movdi(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_tfrp_v2"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_tfrp))]
  "TARGET_V2_FEATURES"
  "%P0=%P1"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_tfrp_v1"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_tfrp))]
  "!TARGET_V2_FEATURES"
  "%P0=%P1"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_tfrpi"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6A2_tfrpi))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[1]) != CONST_INT){
      error("non-constant integer passed to argument 1 of Q6_P_equals_I intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'I', "Is8")){
      error("argument 1 of Q6_P_equals_I intrinsic cannot be encoded as s8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_tfrpi"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6A2_tfrpi))]
  "TARGET_V2_FEATURES"
  "%P0=#%1"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_zxtb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_zxtb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_zxtb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_zxtb))]
  ""
  "%0=zxtb(%1)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_sxtb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sxtb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_sxtb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sxtb))]
  ""
  "%0=sxtb(%1)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_zxth"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_zxth))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_zxth"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_zxth))]
  ""
  "%0=zxth(%1)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_sxth"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sxth))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      rtx op1 = gen_reg_rtx(HImode);
      emit_move_insn(op1, gen_lowpart(HImode, operands[1]));
      operands[1] = op1;
      emit_insn(gen_extendhisi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_sxth"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sxth))]
  ""
  "%0=sxth(%1)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_combinew"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combinew))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_combinew"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combinew))]
  ""
  "%P0=combine(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_combineii"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "immediate_operand" "Is8")
          (match_operand:SI 2 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6A2_combineii))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[1]) != CONST_INT){
      error("non-constant integer passed to argument 1 of Q6_P_combine_II intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'I', "Is8")){
      error("argument 1 of Q6_P_combine_II intrinsic cannot be encoded as s8 immediate");
    }
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_combine_II intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is8")){
      error("argument 2 of Q6_P_combine_II intrinsic cannot be encoded as s8 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_combineii"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "immediate_operand" "Is8")
          (match_operand:SI 2 "immediate_operand" "Is8")
        ] UNSPEC_QDSP6_Q6A2_combineii))]
  "TARGET_V2_FEATURES"
  "%P0=combine(#%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_combine_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_hh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_combine_hh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_hh))]
  ""
  "%0=combine(%1.h,%2.h)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_combine_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_hl))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_combine_hl"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_hl))]
  ""
  "%0=combine(%1.h,%2.l)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_combine_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_lh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_combine_lh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_lh))]
  ""
  "%0=combine(%1.l,%2.h)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_combine_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_ll))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_combine_ll"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_combine_ll))]
  ""
  "%0=combine(%1.l,%2.l)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_tfril"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "immediate_operand" "Iu16")
        ] UNSPEC_QDSP6_Q6A2_tfril))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_Rl_equals_I intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu16")){
      error("argument 2 of Q6_Rl_equals_I intrinsic cannot be encoded as u16 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_tfril"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "immediate_operand" "Iu16")
        ] UNSPEC_QDSP6_Q6A2_tfril))]
  ""
  "%0.l=#%2"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_tfrih"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "immediate_operand" "Iu16")
        ] UNSPEC_QDSP6_Q6A2_tfrih))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_Rh_equals_I intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu16")){
      error("argument 2 of Q6_Rh_equals_I intrinsic cannot be encoded as u16 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_tfrih"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "immediate_operand" "Iu16")
        ] UNSPEC_QDSP6_Q6A2_tfrih))]
  ""
  "%0.h=#%2"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_and))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_andsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_and_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_and))]
  "TARGET_V2_FEATURES"
  "%0=and(%1,%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_and_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_and))]
  "!TARGET_V2_FEATURES"
  "%0=and(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_or))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_iorsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_or_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_or))]
  "TARGET_V2_FEATURES"
  "%0=or(%1,%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_or_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_or))]
  "!TARGET_V2_FEATURES"
  "%0=or(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_xor"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_xor))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_xorsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_xor_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_xor))]
  "TARGET_V2_FEATURES"
  "%0=xor(%1,%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_xor_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_xor))]
  "!TARGET_V2_FEATURES"
  "%0=xor(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_not"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_not))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_one_cmplsi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_not_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_not))]
  "TARGET_V2_FEATURES"
  "%0=not(%1)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_not_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_not))]
  "!TARGET_V2_FEATURES"
  "%0=not(%1)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6M2_xor_xacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_xor_xacc))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_xor_xacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_xor_xacc))]
  "TARGET_V2_FEATURES"
  "%0^=xor(%2,%3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6A2_subri"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "immediate_operand" "Is10")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subri))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[1]) != CONST_INT){
      error("non-constant integer passed to argument 1 of Q6_R_sub_IR intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'I', "Is10")){
      error("argument 1 of Q6_R_sub_IR intrinsic cannot be encoded as s10 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_subri"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "immediate_operand" "Is10")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_subri))]
  "TARGET_V2_FEATURES"
  "%0=sub(#%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_andir"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6A2_andir))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_and_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is10")){
      error("argument 2 of Q6_R_and_RI intrinsic cannot be encoded as s10 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_andir"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6A2_andir))]
  "TARGET_V2_FEATURES"
  "%0=and(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_orir"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6A2_orir))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_or_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Is10")){
      error("argument 2 of Q6_R_or_RI intrinsic cannot be encoded as s10 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_orir"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Is10")
        ] UNSPEC_QDSP6_Q6A2_orir))]
  "TARGET_V2_FEATURES"
  "%0=or(%1,#%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_andp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_andp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_anddi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_andp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_andp))]
  ""
  "%P0=and(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_orp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_orp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_iordi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_orp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_orp))]
  ""
  "%P0=or(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_xorp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_xorp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_xordi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_xorp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_xorp))]
  ""
  "%P0=xor(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_notp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_notp))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_one_cmpldi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_notp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_notp))]
  ""
  "%P0=not(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_sxtw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sxtw))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_extendsidi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6A2_sxtw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sxtw))]
  ""
  "%P0=sxtw(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sat))]
  ""
  "%0=sat(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_sath"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sath))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_sath"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_sath))]
  ""
  "%0=sath(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_satuh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_satuh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_satuh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_satuh))]
  ""
  "%0=satuh(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_satub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_satub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_satub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_satub))]
  ""
  "%0=satub(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_satb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_satb))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_satb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_satb))]
  "TARGET_V2_FEATURES"
  "%0=satb(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_vaddub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vaddub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddub))]
  ""
  "%P0=vaddub(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vaddubs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddubs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vaddubs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddubs))]
  ""
  "%P0=vaddub(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vaddh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vaddh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddh))]
  ""
  "%P0=vaddh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vaddhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vaddhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddhs))]
  ""
  "%P0=vaddh(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vadduhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vadduhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vadduhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vadduhs))]
  ""
  "%P0=vadduh(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vaddw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vaddw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddw))]
  ""
  "%P0=vaddw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vaddws"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddws))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vaddws"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vaddws))]
  ""
  "%P0=vaddw(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_svavgh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svavgh))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svavgh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svavgh))]
  "TARGET_V2_FEATURES"
  "%0=vavgh(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_svavghs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svavghs))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svavghs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svavghs))]
  "TARGET_V2_FEATURES"
  "%0=vavgh(%1,%2):rnd"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_svnavgh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svnavgh))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svnavgh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svnavgh))]
  "TARGET_V2_FEATURES"
  "%0=vnavgh(%1,%2)"
  [(set_attr "type" "A")]
)


(define_expand "qdsp6_builtin_Q6A2_svaddh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svaddh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svaddh_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svaddh))]
  "TARGET_V2_FEATURES"
  "%0=vaddh(%1,%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_svaddh_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svaddh))]
  "!TARGET_V2_FEATURES"
  "%0=vaddh(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_svaddhs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svaddhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svaddhs_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svaddhs))]
  "TARGET_V2_FEATURES"
  "%0=vaddh(%1,%2):sat"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_svaddhs_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svaddhs))]
  "!TARGET_V2_FEATURES"
  "%0=vaddh(%1,%2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_svadduhs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svadduhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svadduhs_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svadduhs))]
  "TARGET_V2_FEATURES"
  "%0=vadduh(%1,%2):sat"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_svadduhs_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svadduhs))]
  "!TARGET_V2_FEATURES"
  "%0=vadduh(%1,%2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_svsubh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svsubh_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubh))]
  "TARGET_V2_FEATURES"
  "%0=vsubh(%1,%2)"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_svsubh_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubh))]
  "!TARGET_V2_FEATURES"
  "%0=vsubh(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_svsubhs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svsubhs_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubhs))]
  "TARGET_V2_FEATURES"
  "%0=vsubh(%1,%2):sat"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_svsubhs_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubhs))]
  "!TARGET_V2_FEATURES"
  "%0=vsubh(%1,%2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_svsubuhs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubuhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_svsubuhs_v2"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubuhs))]
  "TARGET_V2_FEATURES"
  "%0=vsubuh(%1,%2):sat"
  [(set_attr "type" "A")]
)


(define_insn "qdsp6_unspec_Q6A2_svsubuhs_v1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_svsubuhs))]
  "!TARGET_V2_FEATURES"
  "%0=vsubuh(%1,%2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vraddub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vraddub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vraddub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vraddub))]
  ""
  "%P0=vraddub(%P1,%P2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6A2_vraddub_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vraddub_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vraddub_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vraddub_acc))]
  ""
  "%P0+=vraddub(%P2,%P3)"
  [(set_attr "type" "M")]
)

(define_expand "qdsp6_builtin_Q6M2_vradduh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vradduh))]
  "TARGET_V3_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vradduh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vradduh))]
  "TARGET_V3_FEATURES"
  "%0=vradduh(%P1,%P2)"
  [(set_attr "type" "M")]
)



(define_expand "qdsp6_builtin_Q6A2_vsubub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vsubub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubub))]
  ""
  "%P0=vsubub(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vsububs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsububs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vsububs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsububs))]
  ""
  "%P0=vsubub(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vsubh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vsubh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubh))]
  ""
  "%P0=vsubh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vsubhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vsubhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubhs))]
  ""
  "%P0=vsubh(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vsubuhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubuhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vsubuhs"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubuhs))]
  ""
  "%P0=vsubuh(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vsubw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vsubw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubw))]
  ""
  "%P0=vsubw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vsubws"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubws))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vsubws"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vsubws))]
  ""
  "%P0=vsubw(%P1,%P2):sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vabsh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabsh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vabsh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabsh))]
  ""
  "%P0=vabsh(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_vabshsat"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabshsat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vabshsat"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabshsat))]
  ""
  "%P0=vabsh(%P1):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_vabsw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabsw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vabsw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabsw))]
  ""
  "%P0=vabsw(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6A2_vabswsat"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabswsat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vabswsat"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vabswsat))]
  ""
  "%P0=vabsw(%P1):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6M2_vabsdiffw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vabsdiffw))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vabsdiffw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vabsdiffw))]
  "TARGET_V2_FEATURES"
  "%P0=vabsdiffw(%P1,%P2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6M2_vabsdiffh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vabsdiffh))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6M2_vabsdiffh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6M2_vabsdiffh))]
  "TARGET_V2_FEATURES"
  "%P0=vabsdiffh(%P1,%P2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6A2_vrsadub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vrsadub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vrsadub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vrsadub))]
  ""
  "%P0=vrsadub(%P1,%P2)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6A2_vrsadub_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vrsadub_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vrsadub_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vrsadub_acc))]
  ""
  "%P0+=vrsadub(%P2,%P3)"
  [(set_attr "type" "M")]
)


(define_expand "qdsp6_builtin_Q6A2_vavgub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavgub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgub))]
  ""
  "%P0=vavgub(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavguh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavguh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguh))]
  ""
  "%P0=vavguh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavgh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavgh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgh))]
  ""
  "%P0=vavgh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vnavgh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vnavgh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgh))]
  ""
  "%P0=vnavgh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavgw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavgw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgw))]
  ""
  "%P0=vavgw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vnavgw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgw))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vnavgw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgw))]
  "TARGET_V2_FEATURES"
  "%P0=vnavgw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavgwr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgwr))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavgwr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgwr))]
  ""
  "%P0=vavgw(%P1,%P2):rnd"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vnavgwr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgwr))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vnavgwr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgwr))]
  "TARGET_V2_FEATURES"
  "%P0=vnavgw(%P1,%P2):rnd:sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavgwcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgwcr))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavgwcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgwcr))]
  "TARGET_V2_FEATURES"
  "%P0=vavgw(%P1,%P2):crnd"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vnavgwcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgwcr))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vnavgwcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavgwcr))]
  "TARGET_V2_FEATURES"
  "%P0=vnavgw(%P1,%P2):crnd:sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavghcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavghcr))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavghcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavghcr))]
  "TARGET_V2_FEATURES"
  "%P0=vavgh(%P1,%P2):crnd"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vnavghcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavghcr))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vnavghcr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavghcr))]
  "TARGET_V2_FEATURES"
  "%P0=vnavgh(%P1,%P2):crnd:sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavguw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavguw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguw))]
  ""
  "%P0=vavguw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavguwr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguwr))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavguwr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguwr))]
  ""
  "%P0=vavguw(%P1,%P2):rnd"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavgubr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgubr))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavgubr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavgubr))]
  ""
  "%P0=vavgub(%P1,%P2):rnd"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavguhr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguhr))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavguhr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavguhr))]
  ""
  "%P0=vavguh(%P1,%P2):rnd"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vavghr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavghr))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vavghr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vavghr))]
  ""
  "%P0=vavgh(%P1,%P2):rnd"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vnavghr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavghr))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vnavghr"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vnavghr))]
  "TARGET_V2_FEATURES"
  "%P0=vnavgh(%P1,%P2):rnd:sat"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vminh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vminh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminh))]
  ""
  "%P0=vminh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vmaxh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vmaxh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxh))]
  ""
  "%P0=vmaxh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vminub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vminub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminub))]
  ""
  "%P0=vminub(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vmaxub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vmaxub"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxub))]
  ""
  "%P0=vmaxub(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vminuh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminuh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vminuh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminuh))]
  ""
  "%P0=vminuh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vmaxuh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxuh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vmaxuh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxuh))]
  ""
  "%P0=vmaxuh(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vminw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vminw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminw))]
  ""
  "%P0=vminw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vmaxw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vmaxw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxw))]
  ""
  "%P0=vmaxw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vminuw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminuw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vminuw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vminuw))]
  ""
  "%P0=vminuw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_vmaxuw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxuw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_vmaxuw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_vmaxuw))]
  ""
  "%P0=vmaxuw(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r))]
  ""
  "%0=asr(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r))]
  ""
  "%0=asl(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r))]
  ""
  "%0=lsr(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r))]
  ""
  "%0=lsl(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p))]
  ""
  "%P0=asr(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p))]
  ""
  "%P0=asl(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p))]
  ""
  "%P0=lsr(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p))]
  ""
  "%P0=lsl(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_acc))]
  ""
  "%0+=asr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_acc))]
  ""
  "%0+=asl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_acc))]
  ""
  "%0+=lsr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_acc))]
  ""
  "%0+=lsl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_acc))]
  ""
  "%P0+=asr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_acc))]
  ""
  "%P0+=asl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_acc))]
  ""
  "%P0+=lsr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_acc))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_acc))]
  ""
  "%P0+=lsl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_nac))]
  ""
  "%0-=asr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_nac))]
  ""
  "%0-=asl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_nac))]
  ""
  "%0-=lsr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_nac))]
  ""
  "%0-=lsl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_nac))]
  ""
  "%P0-=asr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_nac))]
  ""
  "%P0-=asl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_nac))]
  ""
  "%P0-=lsr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_nac))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_nac))]
  ""
  "%P0-=lsl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_and))]
  ""
  "%0&=asr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_and))]
  ""
  "%0&=asl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_and))]
  ""
  "%0&=lsr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_and))]
  ""
  "%0&=lsl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_or))]
  ""
  "%0|=asr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_or))]
  ""
  "%0|=asl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_r_or))]
  ""
  "%0|=lsr(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_r_or))]
  ""
  "%0|=lsl(%2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_and))]
  ""
  "%P0&=asr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_and))]
  ""
  "%P0&=asl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_and))]
  ""
  "%P0&=lsr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_and))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_and))]
  ""
  "%P0&=lsl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_p_or))]
  ""
  "%P0|=asr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_p_or))]
  ""
  "%P0|=asl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_p_or))]
  ""
  "%P0|=lsr(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_or))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_p_or))]
  ""
  "%P0|=lsl(%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_r_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_sat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_r_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_r_sat))]
  ""
  "%0=asr(%1,%2):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_r_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_sat))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_r_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_r_sat))]
  ""
  "%0=asl(%1,%2):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_asr_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_asr_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r))]
  ""
  "%0=asr(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_lsr_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_lsr_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r))]
  ""
  "%0=lsr(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_asl_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_asl_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashlsi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r))]
  ""
  "%0=asl(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_asr_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu6")){
      error("argument 2 of Q6_P_asr_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrdi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p))]
  ""
  "%P0=asr(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_lsr_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu6")){
      error("argument 2 of Q6_P_lsr_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrdi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p))]
  ""
  "%P0=lsr(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_asl_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu6")){
      error("argument 2 of Q6_P_asl_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashldi3(operands[0], operands[1], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_p"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p))]
  ""
  "%P0=asl(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_acc))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_asracc_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_asracc_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrsi3_acc(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_acc))]
  ""
  "%0+=asr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_acc))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_lsracc_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_lsracc_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrsi3_acc(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_acc))]
  ""
  "%0+=lsr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_acc))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_aslacc_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_aslacc_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashlsi3_acc(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_r_acc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_acc))]
  ""
  "%0+=asl(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_acc))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_asracc_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_asracc_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrdi3_acc(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_acc))]
  ""
  "%P0+=asr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_acc))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_lsracc_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_lsracc_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrdi3_acc(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_acc))]
  ""
  "%P0+=lsr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_acc))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_aslacc_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_aslacc_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashldi3_acc(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_p_acc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_acc))]
  ""
  "%P0+=asl(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_nac))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_asrnac_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_asrnac_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrsi3_nacc(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_nac))]
  ""
  "%0-=asr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_nac))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_lsrnac_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_lsrnac_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrsi3_nacc(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_nac))]
  ""
  "%0-=lsr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_nac))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_aslnac_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_aslnac_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashlsi3_nacc(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_r_nac"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_nac))]
  ""
  "%0-=asl(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_nac))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_asrnac_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_asrnac_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrdi3_nacc(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_nac))]
  ""
  "%P0-=asr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_nac))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_lsrnac_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_lsrnac_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrdi3_nacc(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_nac))]
  ""
  "%P0-=lsr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_nac))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_aslnac_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_aslnac_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashldi3_nacc(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_p_nac"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_nac))]
  ""
  "%P0-=asl(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_r_xacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_xacc))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_lsrxacc_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_lsrxacc_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrsi3_xor(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_r_xacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_xacc))]
  "TARGET_V2_FEATURES"
  "%0^=lsr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_r_xacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_xacc))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_aslxacc_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_aslxacc_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashlsi3_xor(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_r_xacc"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_xacc))]
  "TARGET_V2_FEATURES"
  "%0^=asl(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_p_xacc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_xacc))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_lsrxacc_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_lsrxacc_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrdi3_xor(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_p_xacc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_xacc))]
  "TARGET_V2_FEATURES"
  "%P0^=lsr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_p_xacc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_xacc))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_aslxacc_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_aslxacc_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashldi3_xor(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_p_xacc"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_xacc))]
  "TARGET_V2_FEATURES"
  "%P0^=asl(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_and))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_asrand_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_asrand_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrsi3_and(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_and))]
  ""
  "%0&=asr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_and))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_lsrand_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_lsrand_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrsi3_and(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_and))]
  ""
  "%0&=lsr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_and))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_asland_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_asland_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashlsi3_and(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_r_and"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_and))]
  ""
  "%0&=asl(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_or))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_asror_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_asror_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrsi3_or(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_or))]
  ""
  "%0|=asr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_or))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_lsror_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_lsror_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrsi3_or(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_r_or))]
  ""
  "%0|=lsr(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_or))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_aslor_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_aslor_RI intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashlsi3_or(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_r_or"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_or))]
  ""
  "%0|=asl(%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_and))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_asrand_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_asrand_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrdi3_and(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_and))]
  ""
  "%P0&=asr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_and))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_lsrand_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_lsrand_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrdi3_and(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_and))]
  ""
  "%P0&=lsr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_and))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_asland_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_asland_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashldi3_and(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_p_and"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_and))]
  ""
  "%P0&=asl(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_or))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_asror_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_asror_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashrdi3_or(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asr_i_p_or))]
  ""
  "%P0|=asr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_or))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_lsror_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_lsror_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_lshrdi3_or(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_p_or))]
  ""
  "%P0|=lsr(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_or))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_aslor_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_aslor_PI intrinsic cannot be encoded as u6 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ashldi3_or(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_p_or"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_asl_i_p_or))]
  ""
  "%P0|=asl(%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_r_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_sat))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_asl_RI_sat intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_asl_RI_sat intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_r_sat"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_r_sat))]
  ""
  "%0=asl(%1,#%2):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_r_rnd"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_rnd))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_asr_RI_rnd intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_asr_RI_rnd intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_r_rnd"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_rnd))]
  ""
  "%0=asr(%1,#%2):rnd"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_r_rnd_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_rnd_goodsyntax))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_asrrnd_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_asrrnd_RI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_r_rnd_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_r_rnd_goodsyntax))]
  "TARGET_V2_FEATURES"
  "%0=asrrnd(%1,#%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6S2_addasl_rrri"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu3")
        ] UNSPEC_QDSP6_Q6S2_addasl_rrri))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_addasl_RRI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu3")){
      error("argument 3 of Q6_R_addasl_RRI intrinsic cannot be encoded as u3 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_addaslsi4(operands[0], operands[2], operands[3], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_addasl_rrri"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu3")
        ] UNSPEC_QDSP6_Q6S2_addasl_rrri))]
  ""
  "%0=addasl(%1,%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_valignib"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu3")
        ] UNSPEC_QDSP6_Q6S2_valignib))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_valignb_PPI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu3")){
      error("argument 3 of Q6_P_valignb_PPI intrinsic cannot be encoded as u3 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_valignib"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu3")
        ] UNSPEC_QDSP6_Q6S2_valignib))]
  ""
  "%P0=valignb(%P1,%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_valignrb"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:QI 3 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6S2_valignrb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_valignrb"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:QI 3 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6S2_valignrb))]
  ""
  "%P0=valignb(%P1,%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vspliceib"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu3")
        ] UNSPEC_QDSP6_Q6S2_vspliceib))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_vspliceb_PPI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu3")){
      error("argument 3 of Q6_P_vspliceb_PPI intrinsic cannot be encoded as u3 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_vspliceib"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu3")
        ] UNSPEC_QDSP6_Q6S2_vspliceib))]
  ""
  "%P0=vspliceb(%P1,%P2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsplicerb"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:QI 3 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6S2_vsplicerb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsplicerb"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:QI 3 "pr_register_operand" "Rp")
        ] UNSPEC_QDSP6_Q6S2_vsplicerb))]
  ""
  "%P0=vspliceb(%P1,%P2,%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsplatrh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsplatrh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsplatrh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsplatrh))]
  ""
  "%P0=vsplath(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsplatrb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsplatrb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsplatrb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsplatrb))]
  ""
  "%0=vsplatb(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_insert"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_insert))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_insert_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_insert_RII intrinsic cannot be encoded as u5 immediate");
    }
    if(GET_CODE (operands[4]) != CONST_INT){
      error("non-constant integer passed to argument 4 of Q6_R_insert_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[4]), 'I', "Iu5")){
      error("argument 4 of Q6_R_insert_RII intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_move_insn(operands[0], operands[1]);
      emit_insn(gen_insv(operands[0], operands[3], operands[4], operands[2]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_insert"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu5")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_insert))]
  ""
  "%0=insert(%2,#%3,#%4)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_tableidxb_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxb_goodsyntax))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_tableidxb_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu4")){
      error("argument 3 of Q6_R_tableidxb_RII intrinsic cannot be encoded as u4 immediate");
    }
    if(GET_CODE (operands[4]) != CONST_INT){
      error("non-constant integer passed to argument 4 of Q6_R_tableidxb_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[4]), 'I', "Iu5")){
      error("argument 4 of Q6_R_tableidxb_RII intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_tableidxb_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxb_goodsyntax))]
  "TARGET_V2_FEATURES"
  "%0=tableidxb(%2,#%3,#%4)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6S2_tableidxh_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxh_goodsyntax))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_tableidxh_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu4")){
      error("argument 3 of Q6_R_tableidxh_RII intrinsic cannot be encoded as u4 immediate");
    }
    if(GET_CODE (operands[4]) != CONST_INT){
      error("non-constant integer passed to argument 4 of Q6_R_tableidxh_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[4]), 'I', "Iu5")){
      error("argument 4 of Q6_R_tableidxh_RII intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_tableidxh_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxh_goodsyntax))]
  "TARGET_V2_FEATURES"
  "%0=tableidxh(%2,#%3,#%4)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6S2_tableidxw_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxw_goodsyntax))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_tableidxw_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu4")){
      error("argument 3 of Q6_R_tableidxw_RII intrinsic cannot be encoded as u4 immediate");
    }
    if(GET_CODE (operands[4]) != CONST_INT){
      error("non-constant integer passed to argument 4 of Q6_R_tableidxw_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[4]), 'I', "Iu5")){
      error("argument 4 of Q6_R_tableidxw_RII intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_tableidxw_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxw_goodsyntax))]
  "TARGET_V2_FEATURES"
  "%0=tableidxw(%2,#%3,#%4)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6S2_tableidxd_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxd_goodsyntax))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_tableidxd_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu4")){
      error("argument 3 of Q6_R_tableidxd_RII intrinsic cannot be encoded as u4 immediate");
    }
    if(GET_CODE (operands[4]) != CONST_INT){
      error("non-constant integer passed to argument 4 of Q6_R_tableidxd_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[4]), 'I', "Iu5")){
      error("argument 4 of Q6_R_tableidxd_RII intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_tableidxd_goodsyntax"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu4")
          (match_operand:SI 4 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tableidxd_goodsyntax))]
  "TARGET_V2_FEATURES"
  "%0=tableidxd(%2,#%3,#%4)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6S2_extractu"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_extractu))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_extractu_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_extractu_RII intrinsic cannot be encoded as u5 immediate");
    }
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_R_extractu_RII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu5")){
      error("argument 3 of Q6_R_extractu_RII intrinsic cannot be encoded as u5 immediate");
    }
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_extzv(operands[0], operands[1], operands[2], operands[3]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_extractu"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
          (match_operand:SI 3 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_extractu))]
  ""
  "%0=extractu(%1,#%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_insertp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
          (match_operand:SI 4 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_insertp))]
  ""
  {
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_insert_PII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_insert_PII intrinsic cannot be encoded as u6 immediate");
    }
    if(GET_CODE (operands[4]) != CONST_INT){
      error("non-constant integer passed to argument 4 of Q6_P_insert_PII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[4]), 'I', "Iu6")){
      error("argument 4 of Q6_P_insert_PII intrinsic cannot be encoded as u6 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_insertp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:SI 3 "immediate_operand" "Iu6")
          (match_operand:SI 4 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_insertp))]
  ""
  "%P0=insert(%P2,#%3,#%4)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_extractup"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_extractup))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_extractu_PII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu6")){
      error("argument 2 of Q6_P_extractu_PII intrinsic cannot be encoded as u6 immediate");
    }
    if(GET_CODE (operands[3]) != CONST_INT){
      error("non-constant integer passed to argument 3 of Q6_P_extractu_PII intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[3]), 'I', "Iu6")){
      error("argument 3 of Q6_P_extractu_PII intrinsic cannot be encoded as u6 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_extractup"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu6")
          (match_operand:SI 3 "immediate_operand" "Iu6")
        ] UNSPEC_QDSP6_Q6S2_extractup))]
  ""
  "%P0=extractu(%P1,#%2,#%3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_insert_rp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_insert_rp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_insert_rp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "0")
          (match_operand:SI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_insert_rp))]
  ""
  "%0=insert(%2,%P3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_extractu_rp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_extractu_rp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_extractu_rp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_extractu_rp))]
  ""
  "%0=extractu(%1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_insertp_rp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_insertp_rp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_insertp_rp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "0")
          (match_operand:DI 2 "gr_register_operand" "Rg")
          (match_operand:DI 3 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_insertp_rp))]
  ""
  "%P0=insert(%P2,%P3)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_extractup_rp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_extractup_rp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_extractup_rp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_extractup_rp))]
  ""
  "%P0=extractu(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_tstbit_i"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tstbit_i))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_p_tstbit_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_p_tstbit_RI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_tstbit_i"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_tstbit_i))]
  ""
  "%0=tstbit(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_setbit_i"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_setbit_i))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_setbit_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_setbit_RI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_setbit_i"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_setbit_i))]
  ""
  "%0=setbit(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_togglebit_i"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_togglebit_i))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_togglebit_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_togglebit_RI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_togglebit_i"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_togglebit_i))]
  ""
  "%0=togglebit(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_clrbit_i"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_clrbit_i))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_clrbit_RI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_clrbit_RI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_clrbit_i"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_clrbit_i))]
  ""
  "%0=clrbit(%1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_tstbit_r"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_tstbit_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_tstbit_r"
  [(set (match_operand:QI 0 "pr_register_operand" "=Rp")
        (unspec:QI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_tstbit_r))]
  ""
  "%0=tstbit(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_setbit_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_setbit_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_setbit_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_setbit_r))]
  ""
  "%0=setbit(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_togglebit_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_togglebit_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_togglebit_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_togglebit_r))]
  ""
  "%0=togglebit(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_clrbit_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clrbit_r))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_clrbit_r"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clrbit_r))]
  ""
  "%0=clrbit(%1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu4")
        ] UNSPEC_QDSP6_Q6S2_asr_i_vh))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_vasrh_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu4")){
      error("argument 2 of Q6_P_vasrh_PI intrinsic cannot be encoded as u4 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu4")
        ] UNSPEC_QDSP6_Q6S2_asr_i_vh))]
  ""
  "%P0=vasrh(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu4")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_vh))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_vlsrh_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu4")){
      error("argument 2 of Q6_P_vlsrh_PI intrinsic cannot be encoded as u4 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu4")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_vh))]
  ""
  "%P0=vlsrh(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu4")
        ] UNSPEC_QDSP6_Q6S2_asl_i_vh))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_vaslh_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu4")){
      error("argument 2 of Q6_P_vaslh_PI intrinsic cannot be encoded as u4 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu4")
        ] UNSPEC_QDSP6_Q6S2_asl_i_vh))]
  ""
  "%P0=vaslh(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_vh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_vh))]
  ""
  "%P0=vasrh(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_vh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_vh))]
  ""
  "%P0=vaslh(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_vh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_vh))]
  ""
  "%P0=vlsrh(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_vh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_vh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_vh))]
  ""
  "%P0=vlslh(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_vw))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_vasrw_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_P_vasrw_PI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_vw))]
  ""
  "%P0=vasrw(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_i_svw_trun"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_svw_trun))]
  "TARGET_V2_FEATURES"
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_R_vasrw_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_R_vasrw_PI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_i_svw_trun"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asr_i_svw_trun))]
  "TARGET_V2_FEATURES"
  "%0=vasrw(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_svw_trun"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_svw_trun))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_svw_trun"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_svw_trun))]
  "TARGET_V2_FEATURES"
  "%0=vasrw(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_i_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_vw))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_vlsrw_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_P_vlsrw_PI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_i_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_lsr_i_vw))]
  ""
  "%P0=vlsrw(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_i_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_vw))]
  ""
  {
    if(GET_CODE (operands[2]) != CONST_INT){
      error("non-constant integer passed to argument 2 of Q6_P_vaslw_PI intrinsic");
    }
    if(!CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'I', "Iu5")){
      error("argument 2 of Q6_P_vaslw_PI intrinsic cannot be encoded as u5 immediate");
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_i_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "immediate_operand" "Iu5")
        ] UNSPEC_QDSP6_Q6S2_asl_i_vw))]
  ""
  "%P0=vaslw(%P1,#%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asr_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_vw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asr_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asr_r_vw))]
  ""
  "%P0=vasrw(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_asl_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_vw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_asl_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_asl_r_vw))]
  ""
  "%P0=vaslw(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsr_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_vw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsr_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsr_r_vw))]
  ""
  "%P0=vlsrw(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_lsl_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_vw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lsl_r_vw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lsl_r_vw))]
  ""
  "%P0=vlslw(%P1,%2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vrndpackwh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vrndpackwh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vrndpackwh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vrndpackwh))]
  ""
  "%0=vrndwh(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vrndpackwhs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vrndpackwhs))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vrndpackwhs"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vrndpackwhs))]
  ""
  "%0=vrndwh(%P1):sat"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsxtbh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsxtbh))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsxtbh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsxtbh))]
  "TARGET_V2_FEATURES"
  "%P0=vsxtbh(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vzxtbh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vzxtbh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vzxtbh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vzxtbh))]
  ""
  "%P0=vzxtbh(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsathub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathub))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsathub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathub))]
  ""
  "%0=vsathub(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_svsathub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_svsathub))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_svsathub"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_svsathub))]
  "TARGET_V2_FEATURES"
  "%0=vsathub(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_svsathb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_svsathb))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_svsathb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_svsathb))]
  "TARGET_V2_FEATURES"
  "%0=vsathb(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsathb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathb))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsathb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathb))]
  "TARGET_V2_FEATURES"
  "%0=vsathb(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vtrunohb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunohb))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vtrunohb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunohb))]
  "TARGET_V2_FEATURES"
  "%0=vtrunohb(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vtrunewh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunewh))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vtrunewh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunewh))]
  "TARGET_V2_FEATURES"
  "%P0=vtrunewh(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vtrunowh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunowh))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vtrunowh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunowh))]
  "TARGET_V2_FEATURES"
  "%P0=vtrunowh(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vtrunehb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunehb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vtrunehb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vtrunehb))]
  ""
  "%0=vtrunehb(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsxthw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsxthw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsxthw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsxthw))]
  ""
  "%P0=vsxthw(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vzxthw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vzxthw))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vzxthw"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vzxthw))]
  ""
  "%P0=vzxthw(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsatwh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsatwh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwh))]
  ""
  "%0=vsatwh(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsatwuh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwuh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsatwuh"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwuh))]
  ""
  "%0=vsatwuh(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_packhl"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_packhl))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_packhl"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
          (match_operand:SI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_packhl))]
  ""
  "%P0=packhl(%1,%2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6A2_swiz"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_swiz))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6A2_swiz"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6A2_swiz))]
  "TARGET_V2_FEATURES"
  "%0=swiz(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsathub_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathub_nopack))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsathub_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathub_nopack))]
  ""
  "%P0=vsathub(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsathb_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathb_nopack))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsathb_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsathb_nopack))]
  "TARGET_V2_FEATURES"
  "%P0=vsathb(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsatwh_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwh_nopack))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsatwh_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwh_nopack))]
  ""
  "%P0=vsatwh(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_vsatwuh_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwuh_nopack))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_vsatwuh_nopack"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_vsatwuh_nopack))]
  ""
  "%P0=vsatwuh(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_shuffob"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffob))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_shuffob"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffob))]
  ""
  "%P0=shuffob(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_shuffeb"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffeb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_shuffeb"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffeb))]
  ""
  "%P0=shuffeb(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_shuffoh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffoh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_shuffoh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffoh))]
  ""
  "%P0=shuffoh(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_shuffeh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffeh))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_shuffeh"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_shuffeh))]
  ""
  "%P0=shuffeh(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_parityp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_parityp))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_parityp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_parityp))]
  "TARGET_V2_FEATURES"
  "%0=parity(%P1,%P2)"
  [(set_attr "type" "X")]
)


(define_expand "qdsp6_builtin_Q6S2_lfsp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lfsp))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_lfsp"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
          (match_operand:DI 2 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_lfsp))]
  "TARGET_V2_FEATURES"
  "%P0=lfs(%P1,%P2)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_clbnorm"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clbnorm))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_clbnorm"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clbnorm))]
  "TARGET_V2_FEATURES"
  "%0=normamt(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_clb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clb))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_clb"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clb))]
  ""
  "%0=clb(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_cl0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl0))]
  ""
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_clzsi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_cl0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl0))]
  ""
  "%0=cl0(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_cl1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl1))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_cl1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl1))]
  ""
  "%0=cl1(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_clbp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clbp))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_clbp"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_clbp))]
  ""
  "%0=clb(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_cl0p"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl0p))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_cl0p"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl0p))]
  ""
  "%0=cl0(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_cl1p"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl1p))]
  ""
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_cl1p"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_cl1p))]
  ""
  "%0=cl1(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_brev"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_brev))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_brev"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_brev))]
  "TARGET_V2_FEATURES"
  "%0=brev(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_ct0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_ct0))]
  "TARGET_V2_FEATURES"
  {
    if(!TARGET_LITERAL_INTRINSICS){
      emit_insn(gen_ctzsi2(operands[0], operands[1]));
      DONE;
    }
  }
)


(define_insn "qdsp6_unspec_Q6S2_ct0"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_ct0))]
  "TARGET_V2_FEATURES"
  "%0=ct0(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_ct1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_ct1))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_ct1"
  [(set (match_operand:SI 0 "gr_register_operand" "=Rg")
        (unspec:SI [
          (match_operand:SI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_ct1))]
  "TARGET_V2_FEATURES"
  "%0=ct1(%1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_interleave"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_interleave))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_interleave"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_interleave))]
  "TARGET_V2_FEATURES"
  "%P0=interleave(%P1)"
  [(set_attr "type" "S")]
)


(define_expand "qdsp6_builtin_Q6S2_deinterleave"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_deinterleave))]
  "TARGET_V2_FEATURES"
  {
  }
)


(define_insn "qdsp6_unspec_Q6S2_deinterleave"
  [(set (match_operand:DI 0 "gr_register_operand" "=Rg")
        (unspec:DI [
          (match_operand:DI 1 "gr_register_operand" "Rg")
        ] UNSPEC_QDSP6_Q6S2_deinterleave))]
  "TARGET_V2_FEATURES"
  "%P0=deinterleave(%P1)"
  [(set_attr "type" "S")]
)
