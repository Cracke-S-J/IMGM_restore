/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IM
* 模块名称 : IMCD
* 文件名称 : IMCD_tc.h
* 概要描述 :
*	IM组件IMCD数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IMCD_TC_H_
#define _IMCD_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MIRSXTxCAPxML_tc.h> 
#include <AMXAxSTAB_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IMCD_STEP_INITIALIZE = 1,
    IMCD_STEP_EZCAB_BOARD_STATUS = 2,
    IMCD_STEP_AIRMOUNT_STABILITY = 3,
    IMCD_STEP_CHECK_SENSOR_POSITIONS = 4,
    IMCD_STEP_READ_SENSORS_AT_BOP = 5,
    IMCD_STEP_TERMINATE = 6,
} IMCD_step_enum;

typedef enum
{
    IMCD_NA = 0,
    IMCD_NOK = 1,
    IMCD_OK = 2,
    IMCD_NC = 3,
} IMCD_result_enum;

typedef enum
{
    IMCD_PRECONDITION_INITIAL = 0,
    IMCD_PRECONDITION_CONNECT = 1,
} IMCD_precondition_enum;

typedef enum
{
    IMCD_CONTROL_STATE_NA = 0,
    IMCD_CONTROL_STATE_NONE = 1,
    IMCD_CONTROL_STATE_BFC = 2,
    IMCD_CONTROL_STATE_ENC = 3,
    IMCD_CONTROL_STATE_ERR = 4,
} IMCD_control_state_enum;

typedef enum
{
    IMCD_TILT_ZERO = 0,
    IMCD_RX_NEG = 1,
    IMCD_RX_POS = 2,
    IMCD_RY_NEG = 3,
    IMCD_RY_POS = 4,
} IMCD_tilt_enum;

typedef enum
{
    IMCD_Z1 = 0,
    IMCD_Z2 = 1,
    IMCD_Z3 = 2,
    IMCD_Z4 = 3,
} IMCD_sensor_enum;

typedef enum
{
    IMCD_LED_BIST = 0,
    IMCD_LED_Z1 = 1,
    IMCD_LED_Z2 = 2,
    IMCD_LED_Z3 = 3,
    IMCD_LED_Z4 = 4,
    IMCD_LED_EXC = 5,
} IMCD_led_enum;

typedef struct
{
    bool connection_test;
    bool readbop_test;
} IMCD_input_struct;

typedef struct
{
    AMXAxSTAB_performance_struct am;
} IMCD_stabil_result_struct;

typedef char IMCD_led_struct_s[0x14];

typedef char IMCD_led_struct_l[0x30];

typedef struct
{
    IMCD_led_struct_s s;
    IMCD_led_struct_l l;
} IMCD_led_struct;

typedef IMCD_led_struct IMCD_led_array[0x6];

typedef struct
{
    IMCD_led_array led;
} IMCD_front_struct;

typedef char IMCD_board_info_struct_ppca12nc[0x14];

typedef char IMCD_board_info_struct_hsi[0x14];

typedef char IMCD_board_info_struct_hsi_match[0x30];

typedef char IMCD_board_info_struct_serial[0x14];

typedef char IMCD_board_info_struct_pga[0x14];

typedef char IMCD_board_info_struct_dsp12nc[0x14];

typedef char IMCD_board_info_struct_version[0x14];

typedef char IMCD_board_info_struct_data12nc[0x14];

typedef struct
{
    IMCD_board_info_struct_ppca12nc ppca12nc;
    IMCD_board_info_struct_hsi hsi;
    IMCD_board_info_struct_hsi_match hsi_match;
    IMCD_board_info_struct_serial serial;
    IMCD_board_info_struct_pga pga;
    IMCD_board_info_struct_dsp12nc dsp12nc;
    IMCD_board_info_struct_version version;
    IMCD_board_info_struct_data12nc data12nc;
} IMCD_board_info_struct;

typedef char IMCD_board_status_struct_running[0x14];

typedef char IMCD_board_status_struct_bist[0x14];

typedef char IMCD_board_status_struct_clock[0x14];

typedef char IMCD_board_status_struct_frame[0x14];

typedef char IMCD_board_status_struct_connect[0x14];

typedef char IMCD_board_status_struct_changes[0x14];

typedef char IMCD_board_status_struct_voltage[0x14];

typedef struct
{
    IMCD_board_status_struct_running running;
    IMCD_board_status_struct_bist bist;
    IMCD_board_status_struct_clock clock;
    IMCD_board_status_struct_frame frame;
    IMCD_board_status_struct_connect connect;
    IMCD_board_status_struct_changes changes;
    IMCD_board_status_struct_voltage voltage;
} IMCD_board_status_struct;

typedef char IMCD_bist_string_struct_s[0x14];

typedef struct
{
    IMCD_bist_string_struct_s s;
} IMCD_bist_string_struct;

typedef enum
{
    IMCD_BIST_STATUS_PFVP12V = 0,
    IMCD_BIST_STATUS_PFVN12V = 1,
    IMCD_BIST_STATUS_PFVP5V = 2,
    IMCD_BIST_STATUS_PFVP3V3 = 3,
    IMCD_BIST_STATUS_PFVP3V3DSP = 4,
    IMCD_BIST_STATUS_PFVP1V5 = 5,
    IMCD_BIST_STATUS_PFVP2V5 = 6,
    IMCD_BIST_STATUS_PFVP1V26 = 7,
    IMCD_BIST_STATUS_PFZ1VP5V = 8,
    IMCD_BIST_STATUS_PFZ2VP5V = 9,
    IMCD_BIST_STATUS_PFZ3VP5V = 10,
    IMCD_BIST_STATUS_PFZ4VP5V = 11,
    IMCD_BIST_STATUS_PFZ1VN5V = 12,
    IMCD_BIST_STATUS_PFZ2VN5V = 13,
    IMCD_BIST_STATUS_PFZ3VN5V = 14,
    IMCD_BIST_STATUS_PFZ4VN5V = 15,
    IMCD_BIST_STATUS_PFVP7V5ISO = 16,
    IMCD_BIST_STATUS_PFVN7V5ISO = 17,
    IMCD_BIST_STATUS_PFVP0V8ISO = 18,
    IMCD_BIST_STATUS_PFGNDISO = 19,
    IMCD_BIST_STATUS_PFVP2V5ISO = 20,
    IMCD_BIST_STATUS_PFVN2V5ISO = 21,
    IMCD_BIST_STATUS_PFVP15VISO = 22,
    IMCD_BIST_STATUS_PFVN15VISO = 23,
    IMCD_BIST_STATUS_EXC_FAIL = 24,
    IMCD_BIST_STATUS_REF_FAIL = 25,
    IMCD_BIST_STATUS_DOMO_BUSY = 26,
    IMCD_BIST_STATUS_DOMO_FIRMWARE = 27,
    IMCD_BIST_STATUS_DOMO_LOCK_ERROR = 28,
    IMCD_BIST_STATUS_HPI_FAILURE = 29,
    IMCD_BIST_STATUS_DSP_FAILURE = 30,
    IMCD_BIST_STATUS_TRACE_MEMORY_ERROR = 31,
    IMCD_BIST_STATUS_SPI_FAILURE = 32,
    IMCD_BIST_STATUS_PFVP5VAISO = 33,
    IMCD_BIST_STATUS_MAX = 34,
} IMCD_bist_status_enum;

typedef IMCD_bist_string_struct IMCD_bist_string_array[0x22];

typedef struct
{
    IMCD_bist_string_array msg;
} IMCD_bist_struct;

typedef char IMCD_msg_string_struct_s[0x14];

typedef struct
{
    IMCD_msg_string_struct_s s;
} IMCD_msg_string_struct;

typedef enum
{
    IMCD_CHANNEL_STATCONT_RAW_POSITION = 0,
    IMCD_CHANNEL_STATCONT_NOT_CONNECTED = 1,
    IMCD_CHANNEL_STATCONT_ERROR = 2,
    IMCD_CHANNEL_STATCONT_NO_SIGNAL = 3,
    IMCD_CHANNEL_STATCONT_SENSOR_ERROR = 4,
    IMCD_CHANNEL_STATCONT_OUT_OF_RANGE = 5,
    IMCD_CHANNEL_STATCONT_PHASE_SHIFT_ERROR = 6,
    IMCD_CHANNEL_STATCONT_REFERENCE_ERROR = 7,
    IMCD_CHANNEL_STATCONT_INA_P_MUX = 8,
    IMCD_CHANNEL_STATCONT_INA_N_MUX = 9,
    IMCD_CHANNEL_STATCONT_REF_MUX = 10,
    IMCD_CHANNEL_STATCONT_ENABLE_Z = 11,
    IMCD_CHANNEL_STATCONT_SENSSPLY = 12,
    IMCD_CHANNEL_STATCONT_SCALE_Z = 13,
    IMCD_CHANNEL_STATCONT_OFFSET_Z = 14,
} IMCD_channel_statcont_enum;

typedef IMCD_msg_string_struct IMCD_msg_string_array[0xF];

typedef struct
{
    IMCD_msg_string_array msg;
} IMCD_chan_message_struct;

typedef char IMCD_chan_struct_position[0x14];

typedef char IMCD_chan_struct_connected[0x14];

typedef char IMCD_chan_struct_valid[0x14];

typedef char IMCD_chan_struct_signal[0x14];

typedef char IMCD_chan_struct_current[0x14];

typedef char IMCD_chan_struct_ranges[0x14];

typedef char IMCD_chan_struct_shiftfound[0x14];

typedef char IMCD_chan_struct_ref[0x14];

typedef char IMCD_chan_struct_inapmux[0x14];

typedef char IMCD_chan_struct_inanmux[0x14];

typedef char IMCD_chan_struct_refmux[0x14];

typedef char IMCD_chan_struct_zsensor[0x14];

typedef char IMCD_chan_struct_supply[0x14];

typedef char IMCD_chan_struct_scale[0x14];

typedef char IMCD_chan_struct_offset[0x14];

typedef struct
{
    IMCD_chan_struct_position position;
    IMCD_chan_struct_connected connected;
    IMCD_chan_struct_valid valid;
    IMCD_chan_struct_signal signal;
    IMCD_chan_struct_current current;
    IMCD_chan_struct_ranges ranges;
    IMCD_chan_struct_shiftfound shiftfound;
    IMCD_chan_struct_ref ref;
    IMCD_chan_struct_inapmux inapmux;
    IMCD_chan_struct_inanmux inanmux;
    IMCD_chan_struct_refmux refmux;
    IMCD_chan_struct_zsensor zsensor;
    IMCD_chan_struct_supply supply;
    IMCD_chan_struct_scale scale;
    IMCD_chan_struct_offset offset;
} IMCD_chan_struct;

typedef struct
{
    IMCD_front_struct front;
    IMCD_board_info_struct info;
    IMCD_board_status_struct status;
    IMCD_bist_struct bist;
} IMCD_board_struct;

typedef IMCD_chan_message_struct IMCD_chan_message_array[0x4];

typedef IMCD_chan_message_struct IMCD_diag_struct_chan[0x4];

typedef struct
{
    IMCD_board_struct board;
    IMCD_diag_struct_chan chan;
} IMCD_diag_struct;

typedef struct
{
    int count_averages;
    double pos_z;
} IMCD_position_z_struct;

typedef IMCD_position_z_struct IMCD_position_z_array[0x5];

typedef char IMCD_channel_connection_str[0x50];

typedef char IMCD_channel_connection_result_str[0x50];

typedef struct
{
    IMCD_position_z_array pos;
    IMCD_channel_connection_str str;
    IMCD_result_enum result;
    IMCD_channel_connection_result_str result_str;
} IMCD_channel_connection;

typedef struct
{
    double calc;
    double min;
    double max;
    IMCD_result_enum result;
} IMCD_position_connection;

typedef IMCD_channel_connection IMCD_connection_struct_chan[0x4];

typedef IMCD_position_connection IMCD_connection_struct_pos_x[0x4];

typedef IMCD_position_connection IMCD_connection_struct_pos_y[0x4];

typedef struct
{
    IMCD_connection_struct_chan chan;
    IMCD_connection_struct_pos_x pos_x;
    IMCD_connection_struct_pos_y pos_y;
} IMCD_connection_struct;

typedef IMCD_position_z_struct IMCD_readbop_struct_chan[0x4];

typedef char IMCD_readbop_struct_e1[0x4];

typedef char IMCD_readbop_struct_e2[0x4];

typedef struct
{
    IMCD_readbop_struct_chan chan;
    double average_pos;
    IMCD_readbop_struct_e1 e1;
    IMCD_readbop_struct_e2 e2;
} IMCD_readbop_struct;

typedef char IMCD_sum_result_struct_str1[0x50];

typedef char IMCD_sum_result_struct_e1[0x4];

typedef char IMCD_sum_result_struct_e2[0x50];

typedef char IMCD_sum_result_struct_e3[0x4];

typedef char IMCD_sum_result_struct_e4[0x4];

typedef struct
{
    IMCD_sum_result_struct_str1 str1;
    IMCD_sum_result_struct_e1 e1;
    IMCD_result_enum diag;
    IMCD_result_enum connect;
    IMCD_result_enum readbop;
    AMXAxSTAB_result_enum stabil;
    IMCD_sum_result_struct_e2 e2;
    IMCD_sum_result_struct_e3 e3;
    IMCD_sum_result_struct_e4 e4;
} IMCD_sum_result_struct;

typedef struct
{
    IMCD_sum_result_struct sum;
    IMCD_diag_struct diag;
    MIRSXTxCAPxML_model_parameter_struct cap_model;
    IMCD_connection_struct connect;
    IMCD_readbop_struct readbop;
    IMCD_stabil_result_struct s;
} IMCD_result_struct;



#endif // _IMCD_TC_H_
