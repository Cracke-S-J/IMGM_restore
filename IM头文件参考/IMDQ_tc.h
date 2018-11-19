/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMDQ
* 文件名称 : IMDQ_tc.h
* 概要描述 :
*	IM组件IMDQ数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMDQ_TC_H_
#define _IMDQ_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <IHCLxIMM_tc.h> 
#include <SMXA.h> 
#include <WPxCHUCK_tc.h> 
#include <MIENXTxRA_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMDQ_OK = 0,
    IMDQ_NOK = 1,
    IMDQ_SKIPPED = 2,
} IMDQ_ok_nok_enum;

typedef enum
{
    IMDQ_YES = 0,
    IMDQ_NO = 1,
    IMDQ_FAILED = 2,
} IMDQ_yes_no_failed_enum;

typedef enum
{
    IMDQ_SCENARIO_MACHINE = 0,
    IMDQ_SCENARIO_MF_Z_RODS = 1,
    IMDQ_SCENARIO_MF_DAMPERS = 2,
} IMDQ_scenario_enum;

typedef enum
{
    IMDQ_SIDE_MEASURE = 0,
    IMDQ_SIDE_EXPOSE = 1,
} IMDQ_side_enum;

typedef enum
{
    IMDQ_M2 = 0,
    IMDQ_M3 = 1,
    IMDQ_E1 = 2,
    IMDQ_E2 = 3,
    IMDQ_E3 = 4,
} IMDQ_encoder_enum;

typedef enum
{
    IMDQ_AIR_MOUNTS_STABLE = 0,
    IMDQ_PALM_STABLE = 1,
} IMDQ_stable_enum;

typedef enum
{
    IMDQ_DRIVER_MI = 0,
    IMDQ_DRIVER_AM = 1,
    IMDQ_DRIVER_PA = 2,
    IMDQ_DRIVER_WPCL = 3,
    IMDQ_DRIVER_IHAL_DC_APP = 4,
} IMDQ_drivers_enum;

typedef enum
{
    IMDQ_CRITERIUM_FREQ_BELOW = 0,
    IMDQ_CRITERIUM_FREQ_EXCEED = 1,
    IMDQ_CRITERIUM_PEAK_EXCEED = 2,
} IMDQ_criterium_type_enum;

typedef enum
{
    IMDQ_NORMALIZATION_NONE = 0,
    IMDQ_NORMALIZATION_ENCODER = 1,
    IMDQ_NORMALIZATION_GAP = 2,
} IMDQ_normalization_enum;

typedef char IMDQ_input_damper_sn_struct_damper_type[0x18];

typedef char IMDQ_input_damper_sn_struct_location[0x4];

typedef char IMDQ_input_damper_sn_struct_serial_number[0x10];

typedef struct
{
    IMDQ_input_damper_sn_struct_damper_type damper_type;
    IMDQ_input_damper_sn_struct_location location;
    IMDQ_input_damper_sn_struct_serial_number serial_number;
} IMDQ_input_damper_sn_struct;

typedef struct
{
    int len;
    int max_len;
    IMDQ_input_damper_sn_struct* array;
} IMDQ_input_damper_sn_array;

typedef char IMDQ_input_aomf_struct_comment[0x64];

typedef char IMDQ_input_aomf_struct_operator[0x8];

typedef char IMDQ_input_aomf_struct_cabine_nr[0xC];

typedef char IMDQ_input_aomf_struct_metroframe_sn[0x10];

typedef struct
{
    IMDQ_input_aomf_struct_comment comment;
    IMDQ_input_aomf_struct_operator operator;
    IMDQ_input_aomf_struct_cabine_nr cabine_nr;
    IMDQ_input_aomf_struct_metroframe_sn metroframe_sn;
} IMDQ_input_aomf_struct;

typedef struct
{
    IMDQ_input_damper_sn_array damper_sn_measure;
    IMDQ_input_damper_sn_array damper_sn_expose;
} IMDQ_input_aomf_dampers_struct;

typedef struct
{
    IMDQ_scenario_enum input_scenario;
    bool qual_m_side;
    bool qual_e_side;
    IMDQ_input_aomf_struct aomf;
    IMDQ_input_aomf_dampers_struct aomf_dampers;
} IMDQ_input_struct;

typedef char IMDQ_result_driver_struct_status[0x14];

typedef struct
{
    IMDQ_result_driver_struct_status status;
} IMDQ_result_driver_struct;

typedef IMDQ_result_driver_struct IMDQ_result_driver_array[0x5];

typedef struct
{
    IMDQ_ok_nok_enum result;
} IMDQ_result_validation_elem_struct;

typedef IMDQ_result_validation_elem_struct IMDQ_result_validation_array[0x5];

typedef struct
{
    IMDQ_ok_nok_enum quality;
} IMDQ_result_measurement_quality_elem_struct;

typedef IMDQ_result_measurement_quality_elem_struct IMDQ_result_measurement_quality_array[0x2];

typedef char IMDQ_result_gap_validation_struct_limits[0x50];

typedef struct
{
    IMDQ_result_gap_validation_struct_limits limits;
    double last_stored_gap;
    timestamp last_measure_time;
    double measured_gap;
    double gap_difference;
    MIENXTxRA_gap_validation_result_enum result;
    double distance_um;
    double raca_force;
} IMDQ_result_gap_validation_struct;

typedef struct
{
    IMDQ_result_gap_validation_struct gap_measure;
    IMDQ_result_gap_validation_struct gap_expose;
} IMDQ_result_gap_struct;

typedef struct
{
    IMDQ_result_gap_struct gap_validation;
} IMDQ_result_raca_struct;

typedef char IMDQ_criterion_struct_spectrum[0x14];

typedef char IMDQ_criterion_struct_criterion[0x1C];

typedef char IMDQ_criterion_struct_freq_range[0xC];

typedef char IMDQ_criterion_struct_spec_value[0x14];

typedef struct
{
    IMDQ_criterion_struct_spectrum spectrum;
    IMDQ_criterion_struct_criterion criterion;
    IMDQ_criterion_struct_freq_range freq_range;
    double value;
    IMDQ_criterion_struct_spec_value spec_value;
    IMDQ_ok_nok_enum result;
} IMDQ_criterion_struct;

typedef struct
{
    int len;
    int max_len;
    IMDQ_criterion_struct* array;
} IMDQ_criteria_array;

typedef char IMDQ_result_criteria_struct_criteria_used[0x34];

typedef struct
{
    IMDQ_result_criteria_struct_criteria_used criteria_used;
    IMDQ_criteria_array M2;
    IMDQ_criteria_array M3;
    IMDQ_criteria_array E1;
    IMDQ_criteria_array E2;
    IMDQ_criteria_array E3;
} IMDQ_result_criteria_struct;

typedef char IMDQ_result_plots_struct_raw_peak_peak_data[0x200];

typedef char IMDQ_result_plots_struct_criteria_data[0x200];

typedef struct
{
    IMDQ_result_plots_struct_raw_peak_peak_data raw_peak_peak_data;
    IMDQ_result_plots_struct_criteria_data criteria_data;
} IMDQ_result_plots_struct;

typedef struct
{
    IMDQ_result_raca_struct raca;
    IMDQ_result_criteria_struct reference_axis_sensors;
    IMDQ_result_plots_struct plots;
} IMDQ_result_values_struct;

typedef char IMDQ_result_validation_summary_struct_result[0x5][0x1][0x10];

typedef struct
{
    IMDQ_result_validation_summary_struct_result result;
} IMDQ_result_validation_summary_struct;

typedef struct
{
    IMDQ_result_driver_array driver_init;
    IMDQ_result_validation_array result_summary;
    IMDQ_result_measurement_quality_array measurement_quality;
    IMDQ_result_values_struct result_values;
    IMDQ_result_validation_summary_struct summary;
} IMDQ_result_struct;

typedef WPxCHUCK_chuck_func_enum IMDQ_system_state_struct_chuck_func[0x2];

typedef bool IMDQ_system_state_struct_chuck_zeroed[0x2];

typedef struct
{
    SMXA_driverState WP_driver_state;
    SMXA_driverState IH_driver_state;
    bool restore_imm_state;
    IHCLxIMM_immersion_opmode_enum imm_op_mode;
    IHCLxIMM_immersion_state_enum imm_state;
    IHCLxIMM_immersion_fluid_state_enum imm_hood_fluid_state;
    bool restore_chuck_state;
    IMDQ_system_state_struct_chuck_func chuck_func;
    IMDQ_system_state_struct_chuck_zeroed chuck_zeroed;
} IMDQ_system_state_struct;

typedef struct
{
    bool save_measure_gap;
    bool save_expose_gap;
    MIENXTxRA_gap_validation_t measure_gap;
    MIENXTxRA_gap_validation_t expose_gap;
} IMDQ_gap_validation_save_struct;

typedef struct
{
    double frequency;
    double peak_peak;
} IMDQ_peak_peak_value_struct;

typedef struct
{
    int len;
    int max_len;
    IMDQ_peak_peak_value_struct* array;
} IMDQ_peak_peak_value_array;

typedef struct
{
    IMDQ_peak_peak_value_array peak_peak;
    double maximum_peak_peak;
} IMDQ_sweep_measurement_encoder_struct;

typedef IMDQ_sweep_measurement_encoder_struct IMDQ_sweep_measurement_struct_sweep[0x5];

typedef struct
{
    IMDQ_sweep_measurement_struct_sweep sweep;
} IMDQ_sweep_measurement_struct;

typedef IMDQ_sweep_measurement_struct IMDQ_intermediate_struct_sweep_measurements[0x2];

typedef struct
{
    IMDQ_system_state_struct system_state;
    IMDQ_gap_validation_save_struct gap_val;
    IMDQ_intermediate_struct_sweep_measurements sweep_measurements;
} IMDQ_intermediate_struct;

typedef struct
{
    IMDQ_input_struct input;
    IMDQ_result_struct result;
    IMDQ_intermediate_struct intermediate;
} IMDQ_data_struct;



#endif // _IMDQ_TC_H_
