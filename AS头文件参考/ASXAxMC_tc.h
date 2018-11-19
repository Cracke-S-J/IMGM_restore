/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : AS
* 模块名称 : ASXAxMC
* 文件名称 : ASXAxMC_tc.h
* 概要描述 :
*	AS组件ASXAxMC数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _ASXAxMC_TC_H_
#define _ASXAxMC_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <WPxCHUCK_tc.h> 
#include <ASXAxMCxPWQ_tc.h> 
#include <MDXA_tc.h> 
#include <base.h> 
#include <ASXAxSBO_tc.h> 
#include <ASXA_tc.h> 
//extern GNAFxVPxPERF_MAX_ALIGNMENT_SPEED  SETTING_1  //9027, 9011
//extern GNAFxVPxPERF_MAX_ALIGNMENT_SPEED  SETTING_2  //9027, 9012
//extern GNAFxVPxPERF_MAX_ALIGNMENT_SPEED  SETTING_3  //9027, 9013
//extern GNAFxVPxPERF_MAX_ALIGNMENT_SPEED  SETTING_4  //9027, 9014
//extern GNAFxVPxPERF_MAX_ALIGNMENT_SPEED  SETTING_5  //9027, 9015
//extern GNAFxVPxPERF_MAX_ALIGNMENT_SPEED  SETTING_6  //9027, 9016
//extern GVxVPxMACHxTYPE_MACHINE_ARCHITECTURE  NXT  //9007, 9021
//extern GVxVPxMACHxTYPE_MACHINE_ARCHITECTURE  AT  //9007, 8995
//extern GVxVPxMACHxTYPE_MACHINE_ARCHITECTURE  XT  //9007, 9000
//extern GVxVPxMACHxTYPE_MACHINE_ARCHITECTURE  NXE  //9007, 9020
//extern GNAFxVPxPERF_AL_LASER_TYPE  4CLMA  //9006, 8996
//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  REV4_1  //9028, 9022
//extern GVxVPxMACHxTYPE_XT_ARCH_REVISION  REV4_2  //9028, 9023
//extern GNAFxVPxPERF_DEDICATED_STAGE_ALIGN  ENABLED  //9025, 9024
//extern IHCCxVPxIMM_IMMERSION  PRESENT  //9001, 9009
//extern ASxEVPxPERF_CALCULATE_AGC_TIME  DISABLED  //8994, 8989



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    bool dark_move;
    bool optimized_dark_move;
} ASXAxMC_EUV_struct;

typedef struct
{
    bool ref_color_overrule_for_SA;
    ASXA_COLOR_ENUM ref_color_SA;
    bool disable_WQ_thresholding;
} ASXAxMC_SA_ref_color_struct;

typedef char ASXAxMC_time_string[0x2C];

typedef ASXAxSBO_sbo_direction_struct ASXAxMC_sbo_chuck_struct_direction[0x2];

typedef struct
{
    ASXAxMC_time_string time_last_update;
    ASXAxMC_sbo_chuck_struct_direction direction;
} ASXAxMC_sbo_chuck_struct;

typedef ASXAxMC_sbo_chuck_struct ASXAxMC_sbo_struct_chuck[0x2];

typedef struct
{
    bool custom_sbo_enable;
    ASXAxMC_sbo_struct_chuck chuck;
} ASXAxMC_sbo_struct;

typedef double ASXAxMC_sbc_chuck_struct_sbc[0x2][0x4];

typedef struct
{
    ASXAxMC_sbc_chuck_struct_sbc sbc;
} ASXAxMC_sbc_chuck_struct;

typedef ASXAxMC_sbc_chuck_struct ASXAxMC_sbc_struct_chuck[0x2];

typedef struct
{
    ASXAxMC_sbc_struct_chuck chuck;
} ASXAxMC_sbc_struct;

typedef struct
{
    horvervect sensor_position;
} ASXAxMC_sensor_position_struct;

typedef struct
{
    double z_range;
    double scan_speed;
    bool negotiate_scantime;
} ASXAxMC_scan_data_struct;

typedef struct
{
    ASXAxMC_scan_data_struct scan_data;
    double order_to_order_threshold;
    double minimum_MCC;
    double edge_clearance_distance;
} ASXAxMC_dual_periodic_scan_data_struct;

typedef struct
{
    bool reduce_lateral_scans;
    int min_nr_of_lateral_scans;
} ASXAxMC_mp_tpt_improve_struct;

typedef double ASXAxMC_MIN_MCC_array[0x4];

typedef double ASXAxMC_SIGNAL_array[0x4];

typedef struct
{
    ASXAxMC_MIN_MCC_array min_mcc;
    ASXAxMC_SIGNAL_array signal_modulus;
} ASXAxMC_signal_struct;

typedef double ASXAxMC_mto_ord_struct_mto[0x4][0x7];

typedef struct
{
    ASXAxMC_mto_ord_struct_mto mto;
} ASXAxMC_mto_ord_struct;

typedef ASXAxMC_mto_ord_struct ASXAxMC_mto_dir_struct_segment[0x4];

typedef struct
{
    ASXAxMC_mto_dir_struct_segment segment;
} ASXAxMC_mto_dir_struct;

typedef ASXAxMC_mto_dir_struct ASXAxMC_mto_chuck_struct_direction[0x2];

typedef struct
{
    bool calibrated;
    ASXAxMC_mto_chuck_struct_direction direction;
} ASXAxMC_mto_chuck_struct;

typedef ASXAxMC_mto_chuck_struct ASXAxMC_mark_mto_struct_chuck[0x2];

typedef struct
{
    MDXA_mark_type_string mark_name;
    MDXA_alignment_step_enum alignment_step;
    ASXAxMC_mark_mto_struct_chuck chuck;
} ASXAxMC_mark_mto_struct;

typedef struct
{
    ASXAxMC_mark_mto_struct mark;
} ASXAxMC_mto_struct;

typedef struct
{
    int len;
    int max_len;
    ASXAxMC_mto_struct* array;
} ASXAxMC_mto_varr;

typedef ASXAxMC_mto_struct ASXAxMC_mto[0x5E];

typedef struct
{
    int len;
    int max_len;
    ASXAxMC_mto_struct* array;
} ASXAxMC_dual_periodic_mto_var;

typedef ASXAxMC_mto_struct ASXAxMC_dual_periodic_mto[0x2];

typedef ASXAxMC_mto_struct ASXAxMC_oblique_mto[0x6];

typedef struct
{
    int len;
    int max_len;
    ASXAxMC_mto_struct* array;
} ASXAxMC_oblique_mto_var;

typedef double ASXAxMC_mtc_chuck_struct_mtc[0x2][0x4];

typedef struct
{
    bool calibrated;
    ASXAxMC_mtc_chuck_struct_mtc mtc;
} ASXAxMC_mtc_chuck_struct;

typedef ASXAxMC_mtc_chuck_struct ASXAxMC_mark_mtc_struct_chuck[0x2];

typedef struct
{
    MDXA_mark_type_string mark_name;
    MDXA_alignment_step_enum alignment_step;
    ASXAxMC_mark_mtc_struct_chuck chuck;
} ASXAxMC_mark_mtc_struct;

typedef struct
{
    ASXAxMC_mark_mtc_struct mark;
} ASXAxMC_mtc_struct;

typedef ASXAxMC_mtc_struct ASXAxMC_mtc[0x2];

typedef struct
{
    int len;
    int max_len;
    ASXAxMC_mtc_struct* array;
} ASXAxMC_mtc_varr;

typedef double ASXAxMC_zigzag_wq_seg_struct_wq_nf[0x4];

typedef struct
{
    ASXAxMC_zigzag_wq_seg_struct_wq_nf wq_nf;
} ASXAxMC_zigzag_wq_seg_struct;

typedef ASXAxMC_zigzag_wq_seg_struct ASXAxMC_zigzag_wq_dir_struct_segment[0x4];

typedef struct
{
    ASXAxMC_zigzag_wq_dir_struct_segment segment;
} ASXAxMC_zigzag_wq_dir_struct;

typedef ASXAxMC_zigzag_wq_dir_struct ASXAxMC_zigzag_wq_struct_direction[0x2];

typedef struct
{
    ASXAxMC_zigzag_wq_struct_direction direction;
} ASXAxMC_zigzag_wq_struct;

typedef double ASXAxMC_period_mtwq_struct_mtwq[0x4][0x7];

typedef struct
{
    ASXAxMC_period_mtwq_struct_mtwq mtwq;
} ASXAxMC_period_mtwq_struct;

typedef ASXAxMC_period_mtwq_struct ASXAxMC_direction_mtwq_struct_segment[0x4];

typedef struct
{
    ASXAxMC_direction_mtwq_struct_segment segment;
} ASXAxMC_direction_mtwq_struct;

typedef ASXAxMC_direction_mtwq_struct ASXAxMC_mark_mtwq_struct_direction[0x2];

typedef struct
{
    bool calibrated;
    ASXAxMC_mark_mtwq_struct_direction direction;
} ASXAxMC_mark_mtwq_struct;

typedef struct
{
    MDXA_mark_type_string mark_name;
    MDXA_alignment_step_enum alignment_step;
    ASXAxMC_mark_mtwq_struct mtwq;
} ASXAxMC_markset_mtwq_struct;

typedef struct
{
    ASXAxMC_markset_mtwq_struct mark;
} ASXAxMC_mtwq_struct;

typedef struct
{
    int len;
    int max_len;
    ASXAxMC_mtwq_struct* array;
} ASXAxMC_mtwq_varr;

typedef ASXAxMC_mtwq_struct ASXAxMC_mtwq[0x2A];

typedef struct
{
    MDXA_mark_type_string mark_type;
    MDXA_alignment_step_enum alignment_step;
    bool enabled;
    double scan_length;
    double scan_speed_fraction;
} ASXAxMC_overrule_marktype_data_struct;

typedef ASXAxMC_overrule_marktype_data_struct ASXAxMC_overrule_marktype_data_array[0x3];

typedef struct
{
    ASXAxMC_overrule_marktype_data_array overrule_md_array;
} ASXAxMC_overrule_md_struct;

typedef struct
{
    bool MCC_overrule_for_SA;
    double MCC_threshold_SA;
} ASXAxMC_SA_MCC_threshold_struct;

typedef struct
{
    double AGC_settle_time_default;
    bool AGC_settle_time_is_default;
    double AGC_settle_time_min;
    double AGC_settle_time_max;
} ASXAxMC_AGC_settle_time_struct;

typedef struct
{
    ASXAxMC_sbo_struct sbo;
    ASXAxSBO_sbo_ctl_struct sbo_ctl;
    ASXAxSBO_sbo_ilc_struct sbo_ilc;
    ASXAxSBO_sbo_olc_struct sbo_olc;
    ASXAxMC_sbc_struct sbc;
    ASXAxMC_mto asml_mto;
    ASXAxMC_mto_varr customer_mto;
    ASXAxMC_mtc asml_mtc;
    ASXAxMC_mtc_varr mtc;
    ASXAxMCxPWQ_periodic_wq_struct pwq;
    ASXAxMC_zigzag_wq_struct zwq;
    ASXAxMC_mtwq asml_mtwq;
    ASXAxMC_mtwq_varr customer_mtwq;
    ASXAxMC_sensor_position_struct sensor_position;
    ASXAxMC_scan_data_struct scan_data;
    ASXAxMC_scan_data_struct scan_data_wafer;
    ASXAxMC_scan_data_struct fast_periodic_scan_data;
    ASXAxMC_scan_data_struct template_scan_data;
    ASXAxMC_scan_data_struct zigzag_scan_data;
    ASXAxMC_scan_data_struct multiper_scan_data;
    ASXAxMC_mp_tpt_improve_struct mp_tpt_improve_data;
    ASXAxMC_scan_data_struct hp_periodic_scan_data;
    ASXAxMC_signal_struct signal_data;
    ASXAxMC_overrule_md_struct overrule_md;
    ASXAxMC_oblique_mto asml_oblique_mto;
    ASXAxMC_oblique_mto_var customer_oblique_mto;
    ASXAxMC_dual_periodic_mto asml_dual_periodic_mto;
    ASXAxMC_dual_periodic_mto_var customer_dual_periodic_mto;
    ASXAxMC_scan_data_struct oblique_scan_data;
    ASXAxMC_scan_data_struct oblique_scan_data_wafer;
    ASXAxMC_dual_periodic_scan_data_struct dual_periodic_scan_data;
    ASXAxMC_EUV_struct EUV;
    ASXAxMC_SA_ref_color_struct SA_ref_color;
    ASXAxMC_SA_MCC_threshold_struct SA_MCC_threshold;
    ASXAxMC_AGC_settle_time_struct AGC_settle_time;
} ASXAxMC_mc_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int ASXAxMC_mc_load(void);
int ASXAxMC_mc_get_sensor_position(horvervect *sensor_position);
int ASXAxMC_mc_get_periodic_mto(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	ASXAxMC_mto_chuck_struct *mto);
int ASXAxMC_mc_get_template_mtc(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	ASXAxMC_mtc_chuck_struct *mtc);
int ASXAxMC_mc_get_zigzag_wq_nf(ASXAxMC_zigzag_wq_struct *zwq);
int ASXAxMC_mc_get_periodic_MTWQ(const MDXA_mark_type_string *mark_name,
	const MDXA_alignment_step_enum *alignment_step,
	ASXAxMC_mark_mtwq_struct *mtwq);
int ASXAxMC_mc_get_template_sbc(const WPxCHUCK_chuck_id_enum *chuck_id,
	ASXAxMC_sbc_chuck_struct *sbc);
int ASXAxMC_mc_get_scan_data(ASXAxMC_scan_data_struct *scan_data);
int ASXAxMC_mc_get_fp_scan_data(ASXAxMC_scan_data_struct *scan_data);
int ASXAxMC_mc_get_template_scan_data(ASXAxMC_scan_data_struct *scan_data);
int ASXAxMC_mc_get_zigzag_scan_data(ASXAxMC_scan_data_struct *scan_data);
int ASXAxMC_mc_get_multiper_scan_data(ASXAxMC_scan_data_struct *scan_data);
int ASXAxMC_mc_get_oblique_scan_data(ASXAxMC_scan_data_struct *scan_data);
int ASXAxMC_mc_get_dual_periodic_scan_data(ASXAxMC_dual_periodic_scan_data_struct *scan_data_p);
int ASXAxMC_mc_get_multiper_tpt_improve_data(ASXAxMC_mp_tpt_improve_struct *tpt_improve_data);
int ASXAxMC_get_marktype_overrule_data(ASXAxMC_overrule_md_struct *overrule_md_p);
int ASXAxMC_get_SA_ref_color(ASXAxMC_SA_ref_color_struct *ref_color_p);
int ASXAxMC_get_SA_MCC_threshold(ASXAxMC_SA_MCC_threshold_struct *MCC_threshold_p);



#endif // _ASXAxMC_TC_H_
