/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : GP
* 模块名称 : GPXA
* 文件名称 : GPXA.h
* 概要描述 :
*	GP组件GPXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _GPXA_H_ 
#define _GPXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  NONE  //125, 123
//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  REV1  //125, 115
//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  REV2  //125, 116
//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  REV3  //125, 117
//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  REV4_1  //125, 112
//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  REV4_2  //125, 113
//extern GVxVPxMACHxTYPE_NXT_ARCH_REVISION  NONE  //103, 123
//extern GVxVPxMACHxTYPE_NXT_ARCH_REVISION  REV1  //103, 115
//extern GVxVPxMACHxTYPE_NXT_ARCH_REVISION  REV1_1  //103, 97
//extern GVxVPxMACHxTYPE_NXT_ARCH_REVISION  REV2  //103, 116
//extern KExVPxSEQ_LOT_OVERHEAD_REDUCTION  ABSENT  //84, 80
//extern KExVPxSEQ_LOT_OVERHEAD_REDUCTION  LOR1  //84, 72
//extern KExVPxSEQ_LOT_OVERHEAD_REDUCTION  LOR2  //84, 73
//extern IHCCxVPxIMM_IMMERSION  ABSENT  //79, 80
//extern IHCCxVPxIMM_IMMERSION  PRESENT  //79, 96
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  850  //100, 114
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1450  //100, 122
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1000  //100, 98
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  400  //100, 91
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  450  //100, 92
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  3100  //100, 94
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  750  //100, 107
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1400  //100, 119
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1700  //100, 77
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1900  //100, 82
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1950  //100, 83
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1100  //100, 101
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1150  //100, 102
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1200  //100, 104
//extern GVxVPxMACHxTYPE_MACHINE_TYPE  1250  //100, 108
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  H  //110, 66
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  K  //110, 68
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  J  //110, 67
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  F  //110, 64
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  D  //110, 62
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  E  //110, 63
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  G  //110, 65
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  A  //110, 59
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  PEP_A  //110, 86
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  B  //110, 60
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  C  //110, 61
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  PEP_C  //110, 87
//extern GVxVPxMACHxSPEC_MACHINE_SPECIFICATION  PEP_D  //110, 88
//extern GVxVPxMACHxTYPE_MACHINE_ARCHITECTURE  NXE  //93, 111
//extern WLxVPxBHxPEP_WH_PEP_OPTION  NONE  //105, 123
//extern WLxVPxBHxPEP_WH_PEP_OPTION  1  //105, 54
//extern WLxVPxBHxPEP_WH_PEP_OPTION  2  //105, 55
//extern GVxVPxMACHxSPEC_PEP_OPTION  NONE  //95, 123
//extern GVxVPxMACHxSPEC_PEP_OPTION  1  //95, 54
//extern GVxVPxMACHxSPEC_PEP_OPTION  4  //95, 57
//extern GVxVPxMACHxSPEC_PEP_OPTION  2  //95, 55
//extern GVxVPxMACHxSPEC_PEP_OPTION  3  //95, 56
//extern GVxVPxMACHxSPEC_PEP_OPTION  5  //95, 58
//extern WLxVPxMTxSIZE_WAFER_SIZE  300_MM  //109, 85
//extern WLxVPxMTxSIZE_WAFER_SIZE  200_MM  //109, 106
//extern ASxVPxOPTION_SMASHXY  DISABLED  //124, 71
//extern ASxVPxOPTION_SMASHXY  ENABLED  //124, 118
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_1_SETTINGS  PACKAGE_1  //81, 89
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_1_SETTINGS  PACKAGE_1B  //81, 120
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_1_SETTINGS  PACKAGE_1C  //81, 121
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_1_SETTINGS  PACKAGE_2  //81, 90
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_2_SETTINGS  PACKAGE_1  //69, 89
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_2_SETTINGS  PACKAGE_1B  //69, 120
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_2_SETTINGS  PACKAGE_1C  //69, 121
//extern WPCMxVPxPLATFORM_WS_MOVE_PROFILE_2_SETTINGS  PACKAGE_2  //69, 90
//extern IHCCxVPxCOMHW_SWAP_BRIDGE_1_TYPE  MK30  //99, 74
//extern IHCCxVPxCOMHW_SWAP_BRIDGE_1_TYPE  MK32  //99, 76
//extern IHCCxVPxCOMHW_SWAP_BRIDGE_1_TYPE  MK31  //99, 75
//extern IHCCxVPxCOMHW_SWAP_BRIDGE_2_TYPE  MK30  //78, 74
//extern IHCCxVPxCOMHW_SWAP_BRIDGE_2_TYPE  MK32  //78, 76
//extern IHCCxVPxCOMHW_SWAP_BRIDGE_2_TYPE  MK31  //78, 75



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
	double retex_tpg_value;
	double retex_min_atp_value;
	double retex_max_atp_value;
	double nloh_min_atp_value;
	double nloh_max_atp_value;
	double nloh_no_retex_ill_change_min_atp_value;
	double nloh_no_retex_ill_change_max_atp_value;
	double wafer_cycletime_tpg_value;
	double l2l_retex_tpg_value;
	double chuck_swap_tpg_value;
	double measure_cycle_tpg_value;
	double expose_cycle_tpg_value;
	double wafer_cycletime_max_atp_value;
	double wafer_cycletime_min_atp_value;
	double wafer_cycletime_max_ff_value;
	double wafer_cycletime_min_ff_value;
	double prep_time_tpg_value;
} GPXA_tpg_table;


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/








#endif // _GPXA_H_

