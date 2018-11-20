/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : LE
* 模块名称 : LEXAxDEF
* 文件名称 : LEXAxDEF_tc.h
* 概要描述 :
*	LE组件LEXAxDEF数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _LEXAxDEF_TC_H_
#define _LEXAxDEF_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <LFXAxDEF_tc.h> 
#include <LEXAxSPOT_tc.h> 
#include <ADELme_grid_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    LEXAxDEF_SCAN_TYPE_MIN = -1,
    LEXAxDEF_SCAN_TYPE_ZMAP = 0,
    LEXAxDEF_SCAN_TYPE_PDGC = 1,
    LEXAxDEF_SCAN_TYPE_AG = 2,
    LEXAxDEF_SCAN_TYPE_MAX = 3,
} LEXAxDEF_scan_type_t;

typedef enum
{
    LEXAxDEF_CALIB_PROC_ID_MIN = -1,
    LEXAxDEF_CALIB_PROC_ID_CRYSTAL_FREQ = 0,
    LEXAxDEF_CALIB_PROC_ID_DARK_CURR = 1,
    LEXAxDEF_CALIB_PROC_ID_MAX = 2,
} LEXAxDEF_calib_proc_id_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double LEXAxDEF_pdgc_grid_elem_t;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_pdgc_grid_elem_t* array;
} LEXAxDEF_pdgc_grid_array_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int LEXAxDEF_pdgc_table_id_t;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_pdgc_table_id_t* array;
} LEXAxDEF_pdgc_table_id_array_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_t pdgcTableId;
    ADELgen_RecipeIDType subRecipeName;
    ADELsr_CorrectionSetNameType correctionSetName;
    ADELme_grid_LsGridType LSGrid;
} LEXAxDEF_pdgc_table_params_t;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_pdgc_table_params_t* array;
} LEXAxDEF_pdgc_table_params_array_t;

typedef struct
{
    double position;
    LEXAxDEF_pdgc_table_id_t pdgcTableId;
    int index;
} LEXAxDEF_zmap_meas_point_def_t;

typedef struct
{
    double position;
    LEXAxDEF_pdgc_table_id_t rawPdgcTableId;
    int index;
} LEXAxDEF_pdgc_meas_point_def_t;

typedef struct
{
    double position;
} LEXAxDEF_AG_meas_point_def_t;

typedef LEXAxDEF_zmap_meas_point_def_t LEXAxDEF_meas_point_def_t_zmap[0x258];

typedef LEXAxDEF_pdgc_meas_point_def_t LEXAxDEF_meas_point_def_t_pdgc[0x258];

typedef LEXAxDEF_AG_meas_point_def_t LEXAxDEF_meas_point_def_t_ag[0x258];

typedef struct
{
    LEXAxDEF_scan_type_t element;
    int filler0;
    union
    {
        LEXAxDEF_meas_point_def_t_zmap zmap;
        LEXAxDEF_meas_point_def_t_pdgc pdgc;
        LEXAxDEF_meas_point_def_t_ag ag;
        char one_char;
    } spec;
} LEXAxDEF_meas_point_def_t;

typedef struct
{
	int numEntries;
	LEXAxDEF_meas_point_def_t measPointTbl;
} LEXAxDEF_measgrid_table_t;

typedef struct
{
	double position;
	LEXAxSPOT_spot_selection_t spots;
} LEXAxDEF_spot_switch_point_t;

typedef LEXAxDEF_spot_switch_point_t LEXAxDEF_meas_spot_valid_table_t_validSpots[0x258];

typedef struct
{
	int numEntries;
	LEXAxDEF_meas_spot_valid_table_t_validSpots validSpots;
} LEXAxDEF_meas_spot_valid_table_t;

typedef LEXAxDEF_spot_switch_point_t LEXAxDEF_servo_spot_valid_table_t_validSpots[0x258];

typedef struct
{
	int numEntries;
	LEXAxDEF_servo_spot_valid_table_t_validSpots validSpots;
} LEXAxDEF_servo_spot_valid_table_t;

typedef int LEXAxDEF_statmeas_report_t_numMeasurementErrors[0x9];

typedef int LEXAxDEF_statmeas_report_t_numSystemErrors[0x9];

typedef struct
{
	LEXAxDEF_statmeas_report_t_numMeasurementErrors numMeasurementErrors;
	LEXAxDEF_statmeas_report_t_numSystemErrors numSystemErrors;
	int numMeasErrorsCapture;
	int numSystemErrorsCapture;
	unsigned int errorSpec;
	double scanStartTime;
	double scanDuration;
	bool m4InTheCorrectPeriod;
} LEXAxDEF_statmeas_report_t;

typedef double LEXAxDEF_statmeas_data_t_zSpot[0x9];

typedef double LEXAxDEF_statmeas_data_t_zSpotStdDev[0x9];

typedef struct
{
	LEXAxDEF_statmeas_data_t_zSpot zSpot;
	LEXAxDEF_statmeas_data_t_zSpotStdDev zSpotStdDev;
	double zCapture;
	double zCaptureStdDev;
	unsigned int zValid;
	int numMeasurements;
} LEXAxDEF_statmeas_data_t;

typedef struct
{
	LEXAxDEF_pdgc_table_id_t tableId;	
	int numEntries;
	int numInvalidEntries;
} LEXAxDEF_pdgc_report_t;

typedef struct
{
	int len;
	int max_len;
	LEXAxDEF_pdgc_report_t *array;
} LEXAxDEF_pdgc_report_array_t;

typedef struct
{
	int scanId;
	int numSystemErrors;
	int numMeasurementErrors;
	LFXAxDEF_error_source_t errorSpec;
	double scanStartTime;
	double scanDuration;
	bool m4InTheCorrectPeriod;
	bool periodJumpDetected;
} LEXAxDEF_scan_report_t;

typedef double LEXAxDEF_zmap_scan_meas_t_zSpot[0x9];

typedef struct
{
	LEXAxDEF_zmap_scan_meas_t_zSpot zSpot;	
	double zCapture;
	LEXAxSPOT_spot_selection_t zValid;
	LEXAxSPOT_spot_selection_t zUseable;
	LEXAxSPOT_spot_selection_t measError;
	LEXAxSPOT_spot_selection_t systemError;
	double measPos;
	LEXAxSPOT_spot_selection_t esmOccured;
} LEXAxDEF_zmap_scan_meas_t;

typedef LEXAxDEF_zmap_scan_meas_t LEXAxDEF_scan_data_t_meas[0x9];

typedef struct
{
	int scanId;
	int numMeas;
	LEXAxDEF_scan_data_t_meas meas;
} LEXAxDEF_scan_data_t;

typedef struct
{
	int numMeasurementErrors;
	int numSystemErrors;
	LFXAxDEF_error_source_t errorSpec;
	double scanStartTime;
	double scanDuration;
} LEXAxDEF_AG_statemeas_report_t;



#endif // _LEXAxDEF_TC_H_
