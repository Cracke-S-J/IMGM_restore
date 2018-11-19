/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : WP
* 模块名称 : WPxSCANxPF
* 文件名称 : WPxSCANxPF_tc.h
* 概要描述 :
*	WP组件WPxSCANxPF数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _WPxSCANxPF_TC_H_
#define _WPxSCANxPF_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    bool prep_snap_property_valid;
    bool scan_snap_property_valid;
    bool prep_crackle_property_valid;
    bool scan_crackle_property_valid;
    double max_prep_snap;
    double max_prep_crackle;
    double max_scan_snap;
    double max_scan_crackle;
} WPxSCANxPF_scan_axis_snap_crackle_property_struct;

typedef struct
{
    int scan_performance_id;
    WPxSCANxPF_scan_axis_snap_crackle_property_struct x;
    WPxSCANxPF_scan_axis_snap_crackle_property_struct y;
    WPxSCANxPF_scan_axis_snap_crackle_property_struct rz;
    WPxSCANxPF_scan_axis_snap_crackle_property_struct z;
    WPxSCANxPF_scan_axis_snap_crackle_property_struct rx;
    WPxSCANxPF_scan_axis_snap_crackle_property_struct ry;
} WPxSCANxPF_6dof_snap_crackle_struct;

typedef struct
{
    bool overrule_axis;
    double max_prep_velocity;
    double max_prep_acceleration;
    double max_prep_jerk;
    double max_scan_velocity;
    double max_scan_acceleration;
    double max_scan_jerk;
} WPxSCANxPF_scan_axis_performance_property_struct;

typedef char WPxSCANxPF_6dof_scan_performance_property_struct_scan_performance_description[0x2C];

typedef struct
{
    int scan_performance_id;
    WPxSCANxPF_6dof_scan_performance_property_struct_scan_performance_description scan_performance_description;
    double minimum_prescan_settle_time;
    WPxSCANxPF_scan_axis_performance_property_struct x;
    WPxSCANxPF_scan_axis_performance_property_struct y;
    WPxSCANxPF_scan_axis_performance_property_struct rz;
    WPxSCANxPF_scan_axis_performance_property_struct z;
    WPxSCANxPF_scan_axis_performance_property_struct rx;
    WPxSCANxPF_scan_axis_performance_property_struct ry;
} WPxSCANxPF_6dof_scan_performance_property_struct;

typedef struct
{
    int len;
    int max_len;
    WPxSCANxPF_6dof_scan_performance_property_struct* array;
} WPxSCANxPF_6dof_scan_performance_array;

typedef char WPxSCANxPF_scan_performance_property_struct_scan_performance_description[0x2C];

typedef struct
{
    int scan_performance_id;
    WPxSCANxPF_scan_performance_property_struct_scan_performance_description scan_performance_description;
    double minimum_prescan_settle_time;
    WPxSCANxPF_scan_axis_performance_property_struct ss_x;
    WPxSCANxPF_scan_axis_performance_property_struct ss_y;
    WPxSCANxPF_scan_axis_performance_property_struct ss_rz;
    WPxSCANxPF_scan_axis_performance_property_struct ss_z;
    WPxSCANxPF_scan_axis_performance_property_struct ss_rx;
    WPxSCANxPF_scan_axis_performance_property_struct ss_ry;
    WPxSCANxPF_scan_axis_performance_property_struct ls_x;
    WPxSCANxPF_scan_axis_performance_property_struct ls_y;
    WPxSCANxPF_scan_axis_performance_property_struct ls_rz;
    WPxSCANxPF_scan_axis_performance_property_struct ls_z;
    WPxSCANxPF_scan_axis_performance_property_struct ls_rx;
    WPxSCANxPF_scan_axis_performance_property_struct ls_ry;
} WPxSCANxPF_scan_performance_property_struct;

typedef struct
{
    int len;
    int max_len;
    WPxSCANxPF_scan_performance_property_struct* array;
} WPxSCANxPF_scan_performance_array;

typedef struct
{
    WPxSCANxPF_scan_performance_array performance_data_array;
} WPxSCANxPF_machine_constant_struct;



#endif // _WPxSCANxPF_TC_H_
