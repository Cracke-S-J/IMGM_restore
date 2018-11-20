/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : LE
* 模块名称 : LEXA
* 文件名称 : LEXA_tc.h
* 概要描述 :
*	LE组件LEXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _LEXA_TC_H_
#define _LEXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <THXA.h> 
#include <base.h> 
#include <SMXA.h> 
#include <LEXAxDEF_tc.h> 
#include <LEXAxSPOT_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    LEXA_CORRECTION_MAP_MIN = -1,
    LEXA_CORRECTION_MAP_1 = 0,
    LEXA_CORRECTION_MAP_2 = 1,
    LEXA_CORRECTION_MAP_NONE = 2,
    LEXA_CORRECTION_MAP_MAX = 3,
} LEXA_correction_map_enum;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int LEXA_if_selection_t;

typedef double LEXA_pdgc_table_entry_t_pdgc[0x9];

typedef struct
{
    LEXA_pdgc_table_entry_t_pdgc pdgc;
    LEXAxSPOT_spot_selection_t pdgcPresent;
    LEXAxSPOT_spot_selection_t pdgcValid;
    LEXAxSPOT_spot_selection_t pdgcRepaired;
} LEXA_pdgc_table_entry_t;

typedef struct
{
    int len;
    int max_len;
    LEXA_pdgc_table_entry_t* array;
} LEXA_pdgc_table_entry_array_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_t tableId;
    int numInvalidEntries;
    LEXA_pdgc_table_entry_array_t entries;
} LEXA_pdgc_table_t;

typedef struct
{
    int len;
    int max_len;
    LEXA_pdgc_table_t* array;
} LEXA_pdgc_table_array_t;

typedef double LEXA_pdgc_scan_meas_t_zSpot[0x9];

typedef struct
{
    LEXA_pdgc_scan_meas_t_zSpot zSpot;
    double zCapture;
    double zIf;
    double rxIf;
    double ryIf;
    double measPos;
    LEXAxSPOT_spot_selection_t systemError;
    LEXAxSPOT_spot_selection_t measError;
    LEXAxSPOT_spot_selection_t zValid;
    LEXA_if_selection_t ifValid;
    LEXAxDEF_pdgc_table_id_t pdgcTableId;
    int index;
} LEXA_pdgc_scan_meas_t;

typedef struct
{
    int len;
    int max_len;
    LEXA_pdgc_scan_meas_t* array;
} LEXA_pdgc_scan_meas_array_t;

typedef struct
{
    int scanId;
    LEXA_pdgc_scan_meas_array_t meas;
} LEXA_pdgc_scan_data_t;

typedef double LEXA_statmeas_def_t_pdgc[0x9];

typedef struct
{
    double measTime;
    LEXA_statmeas_def_t_pdgc pdgc;
    LEXAxSPOT_spot_selection_t spotSelection;
} LEXA_statmeas_def_t;

typedef double LEXA_AG_scan_meas_t_z[0x1];

typedef double LEXA_AG_scan_meas_t_z_AG[0x1];

typedef struct
{
    LEXA_AG_scan_meas_t_z z;
    LEXA_AG_scan_meas_t_z_AG z_AG;
    double zIf;
    LEXA_if_selection_t ifValid;
    LEXAxSPOT_spot_selection_t zValid;
    LEXAxSPOT_spot_selection_t zUseable;
    LEXAxSPOT_spot_selection_t measError;
    LEXAxSPOT_spot_selection_t systemError;
    double measPos;
} LEXA_AG_scan_meas_t;

typedef struct
{
    int len;
    int max_len;
    LEXA_AG_scan_meas_t* array;
} LEXA_AG_scan_meas_array_t;

typedef struct
{
    int scanId;
    int numMeas;
    LEXA_AG_scan_meas_array_t meas;
} LEXA_AG_scan_data_t;

typedef double LEXA_ag_height_data_t_z_AG[0x1];

typedef struct
{
    LEXA_ag_height_data_t_z_AG z_AG;
    LEXAxSPOT_spot_selection_t zValid;
    LEXAxSPOT_spot_selection_t zUseable;
} LEXA_ag_height_data_t;

typedef enum
{
    LEXA_AG_STATE_MIN = -1,
    LEXA_AG_RETRACTED = 0,
    LEXA_AG_EXTENDED = 1,
    LEXA_AG_EXT_RETR_FAIL = 2,
    LEXA_AG_STATE_UNKNOWN = 3,
    LEXA_AG_STATE_MAX = 4,
} LEXA_AG_ext_retr_state_enum;

typedef struct
{
    bool AgAvailable;
    LEXA_AG_ext_retr_state_enum AgExtRetrState;
} LEXA_AG_status_t;

typedef struct
{
    double scan_speed;
} LEXA_scan_perf_params_t;

typedef struct
{
    LEXAxDEF_scan_report_t scanReport;
} LEXA_scan_result_struct_t;

typedef enum
{
    LEXA_SSA_SET_SERVO_SPOTS = 0,
    LEXA_SSA_GET_SERVO_SPOTS = 1,
    LEXA_SSA_START_STATIC_MEASUREMENT = 2,
    LEXA_SSA_GET_STATIC_MEASUREMENT = 3,
    LEXA_SSA_START_CALIBRATION = 4,
    LEXA_SSA_WAIT_CALIBRATION_READY = 5,
    LEXA_SSA_FLUSH_MEASUREMENT = 6,
    LEXA_SSA_FLUSH_SINGLE_SCAN = 7,
    LEXA_SSA_CALCULATE_PDGC = 8,
    LEXA_SSA_FLUSH_PDGC_RESULT = 9,
    LEXA_SSA_FLUSH_PDGC_TABLES = 10,
    LEXA_SSA_AVERAGE_PDGC = 11,
    LEXA_SSA_LOAD_PDGC_TABLES = 12,
    LEXA_SSA_SAVE_PDGC_TABLES = 13,
    LEXA_SSA_EXTEND_AG = 14,
    LEXA_SSA_SAFE_EXTEND_AG = 15,
    LEXA_SSA_PRE_EXTEND_HEALTH_CHECK_AG = 16,
    LEXA_SSA_RETRACT_AG = 17,
    LEXA_SSA_GET_AG_STATUS = 18,
    LEXA_SSA_GET_AG_HEIGHT = 19,
    LEXA_SSA_GET_AG_GAIN_CORRECTION = 20,
    LEXA_SSA_SET_AG_GAIN_CORRECTION = 21,
    LEXA_SSA_SET_PDGC_TABLE = 22,
    LEXA_SSA_NO_ACTION = 23,
} LEXA_ssa_action_enum_t;

typedef struct
{
    LEXAxSPOT_spot_selection_t servoSpots;
} LEXA_ssa_set_servo_spots_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_get_servo_spots_par_t;

typedef struct
{
    LEXA_statmeas_def_t measDef;
} LEXA_ssa_start_static_measurement_par_t;

typedef struct
{
    int timeOut;
} LEXA_ssa_get_static_measurement_par_t;

typedef struct
{
    LEXAxDEF_calib_proc_id_t procId;
} LEXA_ssa_start_calibration_par_t;

typedef struct
{
    int timeOut;
} LEXA_ssa_wait_calibration_ready_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_flush_measurement_par_t;

typedef struct
{
    int actionId;
} LEXA_ssa_flush_single_scan_par_t;

typedef int LEXA_ssa_calculate_pdgc_par_t_pdgcScanIds[0x15];

typedef struct
{
    int nrCalibScans;
    LEXA_ssa_calculate_pdgc_par_t_pdgcScanIds pdgcScanIds;
} LEXA_ssa_calculate_pdgc_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_flush_pdgc_result_par_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_array_t pdgcTableIds;
} LEXA_ssa_flush_pdgc_tables_par_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_array_t rawPdgcTableIds;
    LEXAxDEF_pdgc_grid_array_t pdgcTableGrid;
    LEXAxDEF_pdgc_table_id_t avgPdgcTableId;
} LEXA_ssa_average_pdgc_par_t;

typedef struct
{
    LEXAxDEF_pdgc_table_params_array_t pdgcTableParams;
} LEXA_ssa_load_pdgc_tables_par_t;

typedef struct
{
    LEXAxDEF_pdgc_table_params_array_t pdgcTableParams;
} LEXA_ssa_save_pdgc_tables_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_extend_ag_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_safe_extend_ag_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_retract_ag_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_get_ag_status_par_t;

typedef struct
{
    LEXAxSPOT_spot_selection_t spotSelection;
} LEXA_ssa_get_ag_height_par_t;

typedef struct
{
    int dummy;
} LEXA_ssa_get_ag_gain_correction_par_t;

typedef struct
{
    double gain_corr;
} LEXA_ssa_set_ag_gain_correction_par_t;

typedef struct
{
    LEXA_pdgc_table_array_t PdgcTable;
} LEXA_ssa_set_pdgc_table_par_t;

typedef struct
{
    LEXA_ssa_action_enum_t element;
    int filler0;
    union
    {
        LEXA_ssa_set_servo_spots_par_t setServoSpots;
        LEXA_ssa_get_servo_spots_par_t getServoSpots;
        LEXA_ssa_start_static_measurement_par_t measurement;
        LEXA_ssa_get_static_measurement_par_t getMeasurement;
        LEXA_ssa_start_calibration_par_t calibId;
        LEXA_ssa_wait_calibration_ready_par_t calibration;
        LEXA_ssa_flush_measurement_par_t flushMeasurement;
        LEXA_ssa_flush_single_scan_par_t flushSingleScan;
        LEXA_ssa_calculate_pdgc_par_t calculatePdgc;
        LEXA_ssa_flush_pdgc_result_par_t flushPdgcResult;
        LEXA_ssa_flush_pdgc_tables_par_t flushPdgcTable;
        LEXA_ssa_average_pdgc_par_t averagePdgc;
        LEXA_ssa_load_pdgc_tables_par_t loadPdgcTables;
        LEXA_ssa_save_pdgc_tables_par_t savePdgcTables;
        LEXA_ssa_extend_ag_par_t extendAg;
        LEXA_ssa_safe_extend_ag_par_t safeExtendAg;
        LEXA_ssa_retract_ag_par_t retractAg;
        LEXA_ssa_get_ag_status_par_t getAgStatus;
        LEXA_ssa_get_ag_height_par_t getAgHeight;
        LEXA_ssa_get_ag_gain_correction_par_t getAgGainCorrection;
        LEXA_ssa_set_ag_gain_correction_par_t setAgGainCorrection;
        LEXA_ssa_set_pdgc_table_par_t setPdgcTable;
        int dummy;
    } spec;
} LEXA_ssa_params_union_t;

typedef struct
{
    int result;
} LEXA_ssa_set_servo_spots_res_t;

typedef struct
{
    int result;
    LEXAxSPOT_spot_selection_t servoSpots;
} LEXA_ssa_get_servo_spots_res_t;

typedef struct
{
    int result;
} LEXA_ssa_start_static_measurement_res_t;

typedef struct
{
    int result;
    LEXAxDEF_statmeas_data_t data;
    LEXAxDEF_statmeas_report_t report;
} LEXA_ssa_get_static_measurement_res_t;

typedef struct
{
    int result;
} LEXA_ssa_start_calibration_res_t;

typedef struct
{
    int result;
} LEXA_ssa_wait_calibration_ready_res_t;

typedef struct
{
    int result;
} LEXA_ssa_flush_measurement_res_t;

typedef struct
{
    int result;
} LEXA_ssa_flush_single_scan_res_t;

typedef struct
{
    int result;
    LEXAxDEF_pdgc_report_array_t pdgcTableReports;
} LEXA_ssa_calculate_pdgc_res_t;

typedef struct
{
    int result;
} LEXA_ssa_flush_pdgc_result_res_t;

typedef struct
{
    int result;
} LEXA_ssa_flush_pdgc_tables_res_t;

typedef struct
{
    int result;
    int nrInvalidEntries;
} LEXA_ssa_average_pdgc_res_t;

typedef struct
{
    int result;
    LEXAxDEF_pdgc_table_id_array_t pdgcTableIds;
} LEXA_ssa_load_pdgc_tables_res_t;

typedef struct
{
    int result;
} LEXA_ssa_save_pdgc_tables_res_t;

typedef struct
{
    int result;
} LEXA_ssa_extend_ag_res_t;

typedef struct
{
    int result;
} LEXA_ssa_safe_extend_ag_res_t;

typedef struct
{
    int result;
} LEXA_ssa_retract_ag_res_t;

typedef struct
{
    int result;
    LEXA_AG_status_t status;
} LEXA_ssa_get_ag_status_res_t;

typedef struct
{
    int result;
    LEXA_ag_height_data_t data;
} LEXA_ssa_get_ag_height_res_t;

typedef struct
{
    int result;
    double gain_corr;
} LEXA_ssa_get_ag_gain_correction_res_t;

typedef struct
{
    int result;
} LEXA_ssa_set_ag_gain_correction_res_t;

typedef struct
{
    int result;
} LEXA_ssa_set_pdgc_table_res_t;

typedef struct
{
    LEXA_ssa_action_enum_t element;
    int filler0;
    union
    {
        LEXA_ssa_set_servo_spots_res_t setServoSpots;
        LEXA_ssa_get_servo_spots_res_t getServoSpots;
        LEXA_ssa_start_static_measurement_res_t measurement;
        LEXA_ssa_get_static_measurement_res_t getMeasurement;
        LEXA_ssa_start_calibration_res_t calibId;
        LEXA_ssa_wait_calibration_ready_res_t calibration;
        LEXA_ssa_flush_measurement_res_t flushMeasurement;
        LEXA_ssa_flush_single_scan_res_t flushSingleScan;
        LEXA_ssa_calculate_pdgc_res_t calculatePdgc;
        LEXA_ssa_flush_pdgc_result_res_t flushPdgcResult;
        LEXA_ssa_flush_pdgc_tables_res_t flushPdgcTable;
        LEXA_ssa_average_pdgc_res_t averagePdgc;
        LEXA_ssa_load_pdgc_tables_res_t loadPdgcTables;
        LEXA_ssa_save_pdgc_tables_res_t savePdgcTables;
        LEXA_ssa_extend_ag_res_t extendAg;
        LEXA_ssa_safe_extend_ag_res_t safeExtendAg;
        LEXA_ssa_retract_ag_res_t retractAg;
        LEXA_ssa_get_ag_status_res_t getAgStatus;
        LEXA_ssa_get_ag_height_res_t getAgHeight;
        LEXA_ssa_get_ag_gain_correction_res_t getAgGainCorrection;
        LEXA_ssa_set_ag_gain_correction_res_t setAgGainCorrection;
        int dummy;
        LEXA_ssa_set_pdgc_table_res_t setPdgcTable;
    } spec;
} LEXA_ssa_result_union_t;

typedef xyzvect LEXA__getActualLePositions_measSpotPositions[0x9];

typedef xyzvect LEXA__getActualAgPositions_agSpotPositions[0x1];



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int LEXA_initialise(void);
int LEXA_terminate(void);
int LEXA_get_status(SMXA_driverState *smDriverState_p);
int LEXA_getActualLePositions(LEXA__getActualLePositions_measSpotPositions *measSpotPositions,
	xyzvect *captureSpotPositions_p);
int LEXA_readImportedData(void);
void LEXA_mcChanged(void);
int LEXA_setSimulationMode(const THXA_SIM_MODE *simMode,
	const THXA_TRACE_MODE *traceMode,
	const THXA_REQ_MODE *reqMode);
int LEXA_getSimulationMode(THXA_SIM_MODE *simMode_p,
	THXA_TRACE_MODE *traceMode_p,
	THXA_REQ_MODE *reqMode_p);
int LEXA_getCalibrationPeriod(const LEXAxDEF_calib_proc_id_t *procId,
	double *intervalRemainder_p);
int LEXA_getScanResults(const int *scanId,
	const double *start,
	const double *stop,
	LEXAxDEF_scan_data_t *scanData_p,
	LEXAxDEF_scan_report_t *scanReport_p);
int LEXA_getPdgcScanResults(const int *scanId,
	const double *start,
	const double *stop,
	LEXA_pdgc_scan_data_t *scanData_p,
	LEXAxDEF_scan_report_t *scanReport_p);
int LEXA_getCaptureToM4Offset(double *capture_to_m4_offset_p);
int LEXA_runBondwireTest(void);
int LEXA_extendAg(void);
int LEXA_retractAg(void);
int LEXA_getAgStatus(LEXA_AG_status_t *status);
int LEXA_getAgScanResults(const int *scanId,
	const double *start,
	const double *stop,
	LEXA_AG_scan_data_t *scanData_p,
	LEXAxDEF_scan_report_t *scanReport_p);
int LEXA_flushSingleAgScanBuffer(const int *scan_id);
int LEXA_getAgGainCorrection(double *gain_corr);
int LEXA_setAgGainCorrection(const double *gain_corr);
int LEXA_getAgCalibrationPeriod(double *period);
int LEXA_getActualAgPositions(LEXA__getActualAgPositions_agSpotPositions *agSpotPositions);
int LEXA_setServoSpots(const LEXAxSPOT_spot_selection_t *servoSpots);
int LEXA_getServoSpots(LEXAxSPOT_spot_selection_t *servoSpots_p);
int LEXA_startStaticMeasurement(const LEXA_statmeas_def_t *measDef_p);
int LEXA_getStaticMeasurementResults(LEXAxDEF_statmeas_data_t *data_p,
	LEXAxDEF_statmeas_report_t *report_p,
	const int *timeOut);
int LEXA_startCalibration(const LEXAxDEF_calib_proc_id_t *procId);
int LEXA_waitCalibrationReady(const int *timeOut);
int LEXA_flushMeasurements(void);
int LEXA_flushSingleScanBuffer(const int *actionId);
int LEXA_flushPdgcScanResults(void);
void LEXA_subsystem_action_result_available(int *actionId);



#endif // _LEXA_TC_H_
