/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVxDATA
* 文件名称 : KVxDATA_tc.h
* 概要描述 :
*	KV组件KVxDATA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVxDATA_TC_H_
#define _KVxDATA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <KVXAxLOTxPAR_tc.h> 
#include <KVXAxLOTxRES_tc.h> 
#include <MEXAxWAFxPLATE_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <ADELpdocCorr_tc.h> 
#include <base.h> 
#include <DTXAxIMAGE_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    DTXAxIMAGE_image_id_string image_id;
    xyvect field_id;
    ADELpdocCorr_ParameterType Parameters;
} KVxDATA_pdocRawCorrParameterType;

typedef struct
{
    bool valid;
    double value;
} KVxDATA_meas_value;

typedef KVxDATA_meas_value KVxDATA_XVSA_data_LE_spot_delta_Z[0x9];

typedef struct
{
    instanceid WaferInstId;
    WPxCHUCK_chuck_id_enum chuck_id;
    KVxDATA_XVSA_data_LE_spot_delta_Z LE_spot_delta_Z;
    KVxDATA_meas_value LE_delta_Z;
    KVxDATA_meas_value LE_delta_Ry;
    KVxDATA_meas_value TIS1_delta_Ry;
    KVxDATA_meas_value TIS1_deformation;
    KVxDATA_meas_value TIS2_delta_Ry;
    KVxDATA_meas_value TIS2_deformation;
} KVxDATA_XVSA_data;

typedef struct
{
    double LS_Ry_drift;
} KVxDATA_XVSA_SOSI_Ls_Ry_drift_data;

typedef KVxDATA_meas_value KVxDATA_VSA_data_Z_LE_spot_std[0x9];

typedef struct
{
    instanceid WaferInstId;
    MEXAxWAFxPLATE_wafer_level_plate plate_id;
    KVxDATA_VSA_data_Z_LE_spot_std Z_LE_spot_std;
    KVxDATA_meas_value TIS_delta_Ry;
} KVxDATA_VSA_data;

typedef struct
{
    instanceid WaferInstId;
    KVxDATA_meas_value Z_max_residual;
} KVxDATA_GLC_data;

typedef struct
{
    instanceid WaferInstId;
    KVxDATA_meas_value Z_max_delta;
    KVxDATA_meas_value Ry_max_delta;
    KVxDATA_meas_value Rx_max_delta;
} KVxDATA_WM_data;

typedef struct
{
    bool MC_updated;
    double Z1;
    double Z2;
    double Z3;
    double Z4;
    double Z5;
    double drift_Z1;
    double drift_Z2;
    double drift_Z4;
    double total_correction;
    double Z5_accuracy;
} KVxDATA_SUSD_chuck_data;

typedef struct
{
    KVxDATA_SUSD_chuck_data chuck1;
    KVxDATA_SUSD_chuck_data chuck2;
} KVxDATA_SUSD_data;

typedef double KVxDATA_VSA_drop_det_plate_data_Z_deterioration[0x9];

typedef struct
{
    KVxDATA_VSA_drop_det_plate_data_Z_deterioration Z_deterioration;
} KVxDATA_VSA_drop_det_plate_data;

typedef KVxDATA_VSA_drop_det_plate_data KVxDATA_VSA_drop_det_data_plate[0x2];

typedef struct
{
    KVxDATA_VSA_drop_det_data_plate plate;
} KVxDATA_VSA_drop_det_data;

typedef double KVxDATA_iVSA_drop_det_lane_data_Z_deterioration[0x9];

typedef struct
{
    KVxDATA_iVSA_drop_det_lane_data_Z_deterioration Z_deterioration;
} KVxDATA_iVSA_drop_det_lane_data;

typedef KVxDATA_iVSA_drop_det_lane_data KVxDATA_iVSA_drop_det_plate_data_lane[0x2];

typedef struct
{
    KVxDATA_iVSA_drop_det_plate_data_lane lane;
} KVxDATA_iVSA_drop_det_plate_data;

typedef KVxDATA_iVSA_drop_det_plate_data KVxDATA_iVSA_drop_det_data_plate[0x2];

typedef struct
{
    KVxDATA_iVSA_drop_det_data_plate plate;
} KVxDATA_iVSA_drop_det_data;

typedef struct
{
    instanceid WaferInstId;
    WPxCHUCK_chuck_id_enum chuck_id;
    double z_rms;
    KVXAxLOTxRES_FM_results fm_results;
    KVXAxLOTxRES_focus_spot_array_t spot_data;
} KVxDATA_FM_spot_log;

typedef struct
{
    instanceid lotInstId;
    KVXAxLOTxPAR_FM_parameters FM_settings;
    KVXAxLOTxPAR_FlexPack_parameters_t flexPack_settings;
} KVxDATA_FM_settings_log;

typedef struct
{
    double grating_drift_data;
} KVxDATA_iVSA_TIS_grating_drift_data;

typedef struct
{
    double iVSA_height_difference_data;
} KVxDATA_iVSA_TIS_height_difference_data;

typedef struct
{
    xyvect xypos;
    double difference;
} KVxDATA_cowa_setpoint_difference_data;

typedef struct
{
    double maximum_detected_blind_angle;
    double blind_angle_threshold;
} KVxDATA_blind_angle_threshold_exceeded_data;

typedef struct
{
    instanceid lotInstId;
    bool FP_setting;
} KVxDATA_FP_SETTING;



#endif // _KVxDATA_TC_H_
