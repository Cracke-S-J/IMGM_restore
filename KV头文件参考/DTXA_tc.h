/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : DT
* 模块名称 : DTXA
* 文件名称 : DTXA_tc.h
* 概要描述 :
*	DT组件DTXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _DTXA_TC_H_
#define _DTXA_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char DTXA_secs_obj_type_string[0x2C];

typedef char DTXA_secs_timestamp_string[0x2C];

typedef char DTXA_secs_obj_id_string[0x54];

typedef char DTXA_lot_id_string[0x40];

typedef char DTXA_lot_type_string[0x10];

typedef char DTXA_wafer_semilot_id_string[0x54];

typedef struct
{
    int lot_id;
    int wafer_number;
} DTXA_wafer_id_struct;

typedef enum
{
    DTXA_WAFER_EDGE_TYPE_NOTCH = 0,
    DTXA_WAFER_EDGE_TYPE_FLAT_EDGE = 1,
} DTXA_wafer_edge_type;

typedef enum
{
    DTXA_WAFER_TYPE_200_SEMI_FLAT = 0,
    DTXA_WAFER_TYPE_200_SEMI_NOTCH = 1,
    DTXA_WAFER_TYPE_200_JEIDA_FLAT = 2,
    DTXA_WAFER_TYPE_300_SEMI_NOTCH = 3,
    DTXA_WAFER_TYPE_300_JEIDA_NOTCH = 4,
} DTXA_wafer_type;

typedef struct
{
    double wafer_diameter;
    double flat_edge_length;
    double sec_edge_1_length;
    double sec_edge_1_angle;
    double sec_edge_2_length;
    double sec_edge_2_angle;
    double focus_edge_clearance;
    DTXA_wafer_edge_type edge_type;
    double notch_size;
} DTXA_wafer_geometry;

typedef enum
{
    DTXA_SUBST_LOC_STATE_UNDEFINED = -1,
    DTXA_SUBST_LOC_STATE_UNOCCUPIED = 0,
    DTXA_SUBST_LOC_STATE_OCCUPIED = 1,
} DTXA_subst_loc_state_enum;

typedef enum
{
    DTXA_SUBST_LOC_EVENT_1_ENTER = 0,
    DTXA_SUBST_LOC_EVENT_2_LEAVE = 1,
    DTXA_SUBST_LOC_EVENT_A_INSTANTIATE = 2,
    DTXA_SUBST_LOC_EVENT_B_DESTROY = 3,
} DTXA_subst_loc_event_enum;

typedef char DTXA_wafer_loc_id_string[0x50];

typedef enum
{
    DTXA_WAFER_QUAL_STATE_UNDEFINED = -1,
    DTXA_WAFER_QUAL_STATE_RETRY = 1,
    DTXA_WAFER_QUAL_STATE_NOT_REJECTED = 2,
    DTXA_WAFER_QUAL_STATE_REJECTED = 3,
} DTXA_wafer_qual_state_enum;

typedef enum
{
    DTXA_WAFER_QUAL_EVENT_1_INSTANTIATE = 0,
    DTXA_WAFER_QUAL_EVENT_2_RETRY = 1,
    DTXA_WAFER_QUAL_EVENT_3_RETRIED = 2,
    DTXA_WAFER_QUAL_EVENT_4_REJECTED = 3,
    DTXA_WAFER_QUAL_EVENT_5_REJECT_FROM_RETRIED = 4,
} DTXA_wafer_qual_event_enum;

typedef enum
{
    DTXA_WAFER_TRANSP_STATE_UNDEFINED = -1,
    DTXA_WAFER_TRANSP_STATE_AT_SOURCE = 0,
    DTXA_WAFER_TRANSP_STATE_AT_WORK = 1,
    DTXA_WAFER_TRANSP_STATE_AT_DESTINATION = 2,
} DTXA_wafer_transp_state_enum;

typedef enum
{
    DTXA_WAFER_TRANSP_EVENT_1_INSTANTIATE = 0,
    DTXA_WAFER_TRANSP_EVENT_2_WAFER_ON_PU = 1,
    DTXA_WAFER_TRANSP_EVENT_4_WAFER_INT_MOVED = 2,
    DTXA_WAFER_TRANSP_EVENT_5_WAFER_MOVED_TO_OUTP_POS = 3,
    DTXA_WAFER_TRANSP_EVENT_8_STATE_RESET = 4,
    DTXA_WAFER_TRANSP_EVENT_7_REMOVED_NORMALLY = 5,
    DTXA_WAFER_TRANSP_EVENT_9_REMOVED_ABNORMALLY = 6,
} DTXA_wafer_transp_event_enum;

typedef enum
{
    DTXA_WAFER_PROC_STATE_UNDEFINED = -1,
    DTXA_WAFER_PROC_STATE_NEEDS_PROCESSING = 0,
    DTXA_WAFER_PROC_STATE_IN_PROCESS = 1,
    DTXA_WAFER_PROC_STATE_PROCESSED = 2,
    DTXA_WAFER_PROC_STATE_ABORTED = 3,
    DTXA_WAFER_PROC_STATE_STOPPED = 4,
    DTXA_WAFER_PROC_STATE_REJECTED = 5,
    DTXA_WAFER_PROC_STATE_LOST = 6,
    DTXA_WAFER_PROC_STATE_SKIPPED = 7,
} DTXA_wafer_proc_state_enum;

typedef enum
{
    DTXA_WAFER_PROC_EVENT_10_INSTANTIATE = 0,
    DTXA_WAFER_PROC_EVENT_11_WAFER_ON_CHUCK = 1,
    DTXA_WAFER_PROC_EVENT_12_WAFER_MOVED_TO_OUTP_POS = 2,
    DTXA_WAFER_PROC_EVENT_13_WAFER_RETRY = 3,
    DTXA_WAFER_PROC_EVENT_14_NOT_PROCESSED = 4,
    DTXA_WAFER_PROC_EVENT_15_STATE_RESET = 5,
    DTXA_WAFER_PROC_EVENT_7_REMOVED_NORMALLY = 6,
    DTXA_WAFER_PROC_EVENT_9_REMOVED_ABNORMALLY = 7,
} DTXA_wafer_proc_event_enum;

typedef enum
{
    DTXA_Rejected = 0,
    DTXA_Accepted = 1,
} DTXA_rej_acc_result_enum;

typedef enum
{
    DTXA_FullyExposed = 1,
    DTXA_PartiallyExposed = 2,
    DTXA_NotExposed = 3,
} DTXA_wafer_exposure_result_enum;

typedef char DTXA_secs_wafer_reject_reason_string[0xCC];

typedef struct
{
    DTXA_wafer_loc_id_string loc_id;
    DTXA_secs_timestamp_string time_in;
    DTXA_secs_timestamp_string time_out;
} DTXA_wafer_history_struct;

typedef struct
{
    int len;
    int max_len;
    DTXA_wafer_history_struct* array;
} DTXA_wafer_history_list;

typedef enum
{
    DTXA_SECS_SVCACK_OK = 0,
    DTXA_SECS_SVCACK_INVALID_COMMAND = 1,
    DTXA_SECS_SVCACK_CANNOT_PERFORM_NOW = 2,
    DTXA_SECS_SVCACK_INVALID_PARAM = 3,
    DTXA_SECS_SVCACK_COMPLETED_LATER = 4,
    DTXA_SECS_SVCACK_SERVICE_PROHIBITED = 5,
    DTXA_SECS_SVCACK_NO_SUCH_OBJECT = 6,
} DTXA_secs_svcack_enum;

typedef enum
{
    DTXA_SUBST_TYPE_WAFER = 0,
    DTXA_SUBST_TYPE_FLAT_PANEL = 1,
    DTXA_SUBST_TYPE_CD = 2,
    DTXA_SUBST_TYPE_MASK = 3,
} DTXA_subst_type_enum;

typedef enum
{
    DTXA_SUBST_USAGE_PRODUCT = 0,
    DTXA_SUBST_USAGE_TEST = 1,
    DTXA_SUBST_USAGE_FILLER = 2,
    DTXA_SUBST_USAGE_CLEANING = 3,
} DTXA_subst_usage_enum;

typedef struct
{
    DTXA_secs_obj_type_string ObjType;
    DTXA_secs_obj_id_string ObjID;
    DTXA_wafer_semilot_id_string LotID;
    DTXA_wafer_history_list SubstHistory;
    DTXA_wafer_qual_state_enum MaterialStatus;
    DTXA_wafer_loc_id_string SubstLocID;
    DTXA_wafer_proc_state_enum SubstProcState;
    DTXA_wafer_loc_id_string SubstSource;
    DTXA_wafer_transp_state_enum SubstState;
    DTXA_subst_type_enum SubstType;
    DTXA_wafer_semilot_id_string PrJobID;
    DTXA_subst_usage_enum SubstUsage;
} DTXA_wafer_object_t;

typedef struct
{
    DTXA_secs_obj_type_string ObjType;
    DTXA_secs_obj_id_string ObjID;
    DTXA_secs_obj_id_string SubstID;
    DTXA_subst_loc_state_enum SubstLocState;
} DTXA_wafer_location_object_t;

typedef struct
{
    DTXA_wafer_loc_id_string SubstLocID;
    double VisitCount;
    double TotalTime;
} DTXA_subst_history_element_struct;

typedef struct
{
    int len;
    int max_len;
    DTXA_subst_history_element_struct* array;
} DTXA_subst_history_report;

typedef struct
{
    DTXA_secs_obj_type_string ObjType;
    DTXA_secs_obj_id_string ObjID;
    DTXA_subst_history_report SubstHistoryReport;
} DTXA_subst_history_object_t;

typedef enum
{
    DTXA_wfr_reject_reason_none = 0,
    DTXA_wfr_reject_reason_exception = 1,
    DTXA_wfr_reject_reason_track = 2,
    DTXA_wfr_reject_reason_lot_stopped = 3,
    DTXA_wfr_reject_reason_lot_aborted = 4,
    DTXA_wfr_reject_reason_mark_sensor_prealign = 5,
    DTXA_wfr_reject_reason_global_level_circle = 6,
    DTXA_wfr_reject_reason_coarse_align = 7,
    DTXA_wfr_reject_reason_fine_align = 8,
    DTXA_wfr_reject_reason_height_map = 9,
    DTXA_wfr_reject_reason_reticle_align = 10,
    DTXA_wfr_reject_reason_expose = 11,
    DTXA_wfr_reject_reason_dynamic_performance = 12,
    DTXA_wfr_reject_reason_focus_spots = 13,
    DTXA_wfr_reject_reason_chuck_spots = 14,
    DTXA_wfr_reject_reason_RSC = 15,
    DTXA_wfr_reject_reason_edge_sensor_prealign = 16,
    DTXA_wfr_reject_reason_chuck_temperature = 17,
    DTXA_wfr_reject_reason_data_inconsistency = 18,
    DTXA_wfr_reject_reason_dosecontrol_calibration = 19,
    DTXA_wfr_reject_reason_ARITM = 20,
    DTXA_wfr_reject_reason_lightsource_beam_quality_nr_limit = 21,
    DTXA_wfr_reject_reason_lightsource_dose_eval_nr_limit = 22,
    DTXA_wfr_reject_reason_closing_wafer_refresh = 23,
    DTXA_wfr_reject_reason_energy_sensor_calibration_needed = 24,
    DTXA_wfr_reject_reason_long_agile_measurement = 25,
    DTXA_wfr_reject_reason_EFESE_HR_focus_range_limit_exceeded = 26,
    DTXA_wfr_reject_reason_flexray_mirror_performance = 27,
    DTXA_wfr_reject_reason_SA_scan_table_invalid = 28,
} DTXA_wfr_reject_reason_enum;

typedef struct
{
    DTXA_wfr_reject_reason_enum reject_reason;
} DTXA_wfr_reject_info_struct;

typedef enum
{
    DTXA_WAFER_STATE_MIN = -1,
    DTXA_WAFER_STATE_EXPOSED = 0,
    DTXA_WAFER_STATE_NOT_EXPOSED = 1,
    DTXA_WAFER_STATE_REJECT = 2,
    DTXA_WAFER_STATE_RETRY = 3,
    DTXA_WAFER_STATE_MAX = 4,
} DTXA_wafer_state_enum;

typedef char DTXA_wafer_carrier_id_string[0x14];

typedef char DTXA_layer_id_string[0x18];

typedef enum
{
    DTXA_normal_layer = 0,
    DTXA_combined_layer = 1,
} DTXA_layer_type;

typedef char DTXA_user_context_id_string[0x10];

typedef char DTXA_reticle_id_string[0x18];

typedef enum
{
    DTXA_6_INCH_RETICLE = 6,
    DTXA_9_INCH_INT_MED_RETICLE = 8,
    DTXA_9_INCH_FINAL_RETICLE = 9,
} DTXA_reticle_type;

typedef enum
{
    DTXA_reticle_size_6inch = 0,
} DTXA_reticle_size_enum;

typedef char DTXA_reticle_carrier_id_string[0x10];

typedef char DTXA_tag_model_id_string[0x8];

typedef char DTXA_tag_firmware_id_string[0x8];

typedef char DTXA_device_id_string[0x10];

typedef char DTXA_align_strategy_id_string[0x1C];

typedef char DTXA_recipe_id_string[0x100];

typedef enum
{
    DTXA_image_sequence_ABBA = 0,
    DTXA_image_sequence_ABAB = 1,
} DTXA_image_sequence_enum;

typedef enum
{
    DTXA_scan_down = -1,
    DTXA_scan_none = 0,
    DTXA_scan_up = 1,
} DTXA_scan_direction;

typedef char DTXA_variant_id_string[0x10];

typedef enum
{
    DTXA_Code_00 = 0,
    DTXA_Code_10 = 1,
    DTXA_Code_11 = 2,
    DTXA_Code_20 = 3,
    DTXA_Code_21 = 4,
    DTXA_Code_22 = 5,
    DTXA_Code_30 = 6,
    DTXA_Code_31 = 7,
    DTXA_Code_32 = 8,
    DTXA_Code_34 = 9,
    DTXA_Code_40 = 10,
    DTXA_Code_44 = 11,
    DTXA_Code_50 = 12,
    DTXA_Code_51 = 13,
    DTXA_Code_52 = 14,
    DTXA_Code_54 = 15,
} DTXA_FormatCode_type;

typedef char DTXA_PRJOBID_type[0x54];

typedef enum
{
    DTXA_WAFERS = 1,
    DTXA_CASSETTE = 2,
    DTXA_DIE_OR_CHIPS = 3,
    DTXA_BOATS = 4,
    DTXA_INGOTS = 5,
    DTXA_LEADFRAMES = 6,
    DTXA_LOTS = 7,
    DTXA_MAGAZINES = 8,
    DTXA_PACKAGES = 9,
    DTXA_PLATES = 10,
    DTXA_TUBES = 11,
    DTXA_WATERFRAMES = 12,
    DTXA_CARRIERS = 13,
    DTXA_SUBSTRATES = 14,
} DTXA_MF_type;

typedef char DTXA_MID_type[0x54];

typedef struct
{
    int len;
    int max_len;
    DTXA_MID_type* array;
} DTXA_MID_list;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef bool DTXA_ACKA_type;

typedef enum
{
    DTXA_RECIPE_ONLY = 1,
    DTXA_RECIPE_WITH_VARIABLE_TUNING = 2,
} DTXA_PRRECIPEMETHOD_type;

typedef char DTXA_RCPSPEC_type[0x100];

typedef char DTXA_RCPPARNM_type[0x104];

typedef char DTXA_RCPPARVAL_type_strVal[0x54];

typedef struct
{
    DTXA_FormatCode_type element;
    int filler0;
    union
    {
        bool bVal;
        char cVal;
        char cVal;
        char cVal;
        short sVal;
        short sVal;
        int iVal;
        int iVal;
        double dblVal;
        double dblVal;
        float fVal;
        DTXA_RCPPARVAL_type_strVal strVal;
    } spec;
} DTXA_RCPPARVAL_type;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef bool DTXA_PRPROCESSSTART_type;

typedef char DTXA_PRCMDNAME_type[0x8];

typedef enum
{
    DTXA_JOB_SETUP = 1,
    DTXA_JOB_PROCESSING = 2,
    DTXA_JOB_PROCESSING_COMPLETE = 3,
    DTXA_JOB_COMPLETE = 4,
    DTXA_JOB_WAITING_FOR_START = 5,
} DTXA_PRJOBMILESTONE_type;

typedef enum
{
    DTXA_WAITING_FOR_MATERIAL = 1,
    DTXA_JOB_STATE_CHANGE = 2,
} DTXA_PREVENTID_type;

typedef enum
{
    DTXA_ARRIVAL = 1,
    DTXA_OPTIMIZE = 2,
    DTXA_LIST = 3,
} DTXA_PRMTRLORDER_type;

typedef enum
{
    DTXA_QUEUED_POOLED = 0,
    DTXA_SETTING_UP = 1,
    DTXA_WAITING_FOR_START = 2,
    DTXA_PROCESSING = 3,
    DTXA_PROCESSING_COMPLETE = 4,
    DTXA_RESERVED = 5,
    DTXA_PAUSING = 6,
    DTXA_PAUSED = 7,
    DTXA_STOPPING = 8,
    DTXA_ABORTING = 9,
    DTXA_STOPPED = 10,
    DTXA_ABORTED = 11,
} DTXA_PrJobState_type;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned char DTXA_SLOTID_element;

typedef struct
{
    int len;
    int max_len;
    DTXA_SLOTID_element* array;
} DTXA_SLOTID_list;

typedef struct
{
    DTXA_wafer_carrier_id_string CARRIERID;
    DTXA_SLOTID_list SLOTID;
} DTXA_CARRIER_element;

typedef struct
{
    int len;
    int max_len;
    DTXA_CARRIER_element* array;
} DTXA_CARRIER_list;

typedef struct
{
    DTXA_MF_type element;
    int filler0;
    union
    {
        DTXA_CARRIER_list Carrier;
        DTXA_CARRIER_list Carrier;
        DTXA_MID_list MID;
        DTXA_MID_list MID;
    } spec;
} DTXA_PRMtlNameList_struct;

typedef enum
{
    DTXA_WAFERS = 1,
    DTXA_CASSETTE = 2,
    DTXA_DIE_OR_CHIPS = 3,
    DTXA_BOATS = 4,
    DTXA_INGOTS = 5,
    DTXA_LEADFRAMES = 6,
    DTXA_LOTS = 7,
    DTXA_MAGAZINES = 8,
    DTXA_PACKAGES = 9,
    DTXA_PLATES = 10,
    DTXA_TUBES = 11,
    DTXA_WATERFRAMES = 12,
    DTXA_CARRIERS = 13,
    DTXA_SUBSTRATES = 14,
} DTXA_PRMtlType_type;

typedef struct
{
    DTXA_RCPPARNM_type RCPPARNM;
    DTXA_RCPPARVAL_type RCPPARVAL;
} DTXA_RecVariableList_element;

typedef struct
{
    int len;
    int max_len;
    DTXA_RecVariableList_element* array;
} DTXA_RecVariableList_list;

typedef enum
{
    DTXA_PRODUCTION = 0,
    DTXA_TSW_LOT = 1,
    DTXA_EXPOSED_ALIGNMENT = 2,
    DTXA_UNEXPOSED_ALIGNMENT = 3,
    DTXA_TSW_FOCUS_MEANDER = 4,
    DTXA_TSW_ENERGY_MEANDER = 5,
    DTXA_TSW_MATRIX = 6,
    DTXA_MEANDER_PER_IMAGE = 7,
    DTXA_MATRIX_PER_IMAGE = 8,
    DTXA_CLOSING_WAFER_REFRESH_LOT = 9,
    DTXA_TSW_CLOSING_WAFER_REFRESH_LOT = 10,
} DTXA_PRJobOperationMode_type;

typedef struct
{
    DTXA_secs_obj_type_string ObjType;
    DTXA_secs_obj_id_string ObjID;
    DTXA_PrJobState_type PRJobState;
    DTXA_PRMtlNameList_struct PRMtlNameList;
    DTXA_PRMtlType_type PRMtlType;
    DTXA_PRPROCESSSTART_type PRProcessStart;
    DTXA_PRRECIPEMETHOD_type PRRecipeMethod;
    DTXA_recipe_id_string RecID;
    DTXA_RecVariableList_list RecVariableList;
    DTXA_PRJobOperationMode_type PRJobOperationMode;
    DTXA_lot_type_string LotType;
    DTXA_layer_id_string LayerID;
} DTXA_LOT_OBJECT;

typedef char DTXA_process_calibration_id_string[0x1C];

typedef struct
{
    int len;
    int max_len;
    DTXA_process_calibration_id_string* array;
} DTXA_process_calibration_id_list;

typedef enum
{
    DTXA_recipe_created = 1,
    DTXA_recipe_modified = 2,
    DTXA_recipe_deleted = 3,
} DTXA_recipe_change_status;

typedef enum
{
    DTXA_ValErrorType_Unsupported_Option = 0,
    DTXA_ValErrorType_Invalid_Params = 1,
    DTXA_ValErrorType_Insufficient_Params = 2,
    DTXA_ValErrorType_Object_id_In_Use = 3,
} DTXA_ValErrorType;

typedef char DTXA_ValErrorMsgString[0x100];

typedef struct
{
    DTXA_ValErrorMsgString error_msg;
    DTXA_ValErrorType error_type;
} DTXA_ValErrorMessage_struct;

typedef struct
{
    int len;
    int max_len;
    DTXA_ValErrorMessage_struct* array;
} DTXA_ValErrorMessageArray;



#endif // _DTXA_TC_H_
