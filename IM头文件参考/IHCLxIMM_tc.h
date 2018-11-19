/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : IH
* 模块名称 : IHCLxIMM
* 文件名称 : IHCLxIMM_tc.h
* 概要描述 :
*	IH组件IHCLxIMM数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _IHCLxIMM_TC_H_
#define _IHCLxIMM_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    IHCLxIMM_STATE_UNKNOWN = 0,
    IHCLxIMM_STATE_SAFE_UP_CLD_NOT_ON_IH = 1,
    IHCLxIMM_STATE_SAFE_UP_CLD_ON_IH = 2,
    IHCLxIMM_STATE_HOVERING = 3,
    IHCLxIMM_STATE_INTERMEDIATE = 4,
} IHCLxIMM_immersion_state_enum;

typedef enum
{
    IHCLxIMM_OPMODE_UNKNOWN = 0,
    IHCLxIMM_OPMODE_MANUAL = 1,
    IHCLxIMM_OPMODE_AUTOMATIC_WET = 2,
    IHCLxIMM_OPMODE_AUTOMATIC_DRY = 3,
} IHCLxIMM_immersion_opmode_enum;

typedef enum
{
    IHCLxIMM_FLUID_STATE_UNKNOWN = 0,
    IHCLxIMM_FLUID_STATE_OFF = 1,
    IHCLxIMM_FLUID_STATE_ON_NOT_STABLE = 2,
    IHCLxIMM_FLUID_STATE_ON_STABLE = 3,
} IHCLxIMM_immersion_fluid_state_enum;

typedef enum
{
    IHCLxIMM_CLD_POSITION_HOOD = 0,
    IHCLxIMM_CLD_POSITION_CHUCK1 = 1,
    IHCLxIMM_CLD_POSITION_CHUCK2 = 2,
    IHCLxIMM_CLD_POSITION_UNKNOWN = 3,
    IHCLxIMM_CLD_POSITION_MAX = 4,
} IHCLxIMM_cld_position_enum;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int IHCLxIMM_request_select_immersion_operating_mode(const IHCLxIMM_immersion_opmode_enum *imm_opmode,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_select_immersion_operating_mode(const int *logical_action_id);
int IHCLxIMM_force_immersion_operating_mode(const IHCLxIMM_immersion_opmode_enum *imm_opmode);
int IHCLxIMM_request_get_immersion_states(int *logical_action_id_ptr);
int IHCLxIMM_get_result_get_immersion_states(const int *logical_action_id,
	IHCLxIMM_immersion_opmode_enum *imm_opmode_ptr,
	IHCLxIMM_immersion_state_enum *imm_state_ptr,
	IHCLxIMM_immersion_fluid_state_enum *imm_fluid_state_ptr);
int IHCLxIMM_request_approve_wafer_for_immersion(const WPxCHUCK_chuck_func_enum *chuck_func,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const zrxryvect *leveling_offset,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_approve_wafer_for_immersion(const int *logical_action_id);
int IHCLxIMM_request_wafer_approved_for_immersion(const WPxCHUCK_chuck_func_enum *chuck_func,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_wafer_approved_for_immersion(const int *logical_action_id,
	bool *approved_ptr,
	zrxryvect *leveling_offset_ptr);
int IHCLxIMM_request_approve_chuck_top_surface_for_immersion(const WPxCHUCK_chuck_func_enum *chuck_func,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	const bool *approved,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_approve_chuck_top_surface_for_immersion(const int *logical_action_id);
int IHCLxIMM_request_chuck_top_surface_approved_for_immersion(const WPxCHUCK_chuck_func_enum *chuck_func,
	const WPxCHUCK_chuck_id_enum *chuck_id,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_chuck_top_surface_approved_for_immersion(const int *logical_action_id,
	bool *approved_ptr);
int IHCLxIMM_request_swap_scan_surface_approved_for_immersion(int *logical_action_id_ptr);
int IHCLxIMM_get_result_swap_scan_surface_approved_for_immersion(const int *logical_action_id,
	bool *approved_ptr);
int IHCLxIMM_request_set_immersion_state(const IHCLxIMM_immersion_state_enum *imm_state,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_set_immersion_state(const int *logical_action_id);
int IHCLxIMM_force_immersion_state(const IHCLxIMM_immersion_state_enum *imm_state);
int IHCLxIMM_request_switch_fluid(const bool *switch_fluid_on,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_switch_fluid(const int *logical_action_id);
int IHCLxIMM_request_cleaning(const WPxCHUCK_chuck_id_enum *chuck_id,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_cleaning(const int *logical_action_id);
int IHCLxIMM_request_conditioning(const WPxCHUCK_chuck_id_enum *chuck_id,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_conditioning(const int *logical_action_id_ptr);
int IHCLxIMM_request_wait_immersion_fluid_stable(const int *timeout,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_wait_immersion_fluid_stable(const int *logical_action_id,
	bool *timeout_occured_ptr);
int IHCLxIMM_ensure_immersion_state_and_operating_mode(const IHCLxIMM_immersion_opmode_enum *new_imm_opmode,
	const IHCLxIMM_immersion_state_enum *new_imm_state,
	const IHCLxIMM_immersion_fluid_state_enum *new_imm_fluid_state,
	IHCLxIMM_immersion_opmode_enum *old_imm_opmode_ptr,
	IHCLxIMM_immersion_state_enum *old_imm_state_ptr,
	IHCLxIMM_immersion_fluid_state_enum *old_imm_fluid_state_ptr);
int IHCLxIMM_restore_immersion_state_and_operating_mode(const IHCLxIMM_immersion_opmode_enum *imm_opmode,
	const IHCLxIMM_immersion_state_enum *imm_state,
	const IHCLxIMM_immersion_fluid_state_enum *imm_fluid_state);
int IHCLxIMM_get_immersion_configured(bool *immersion_configured_ptr);
int IHCLxIMM_get_closing_disk_present(bool *closing_disk_present_ptr);
int IHCLxIMM_get_nominal_hover_gap(double *nom_hover_gap_ptr);
int IHCLxIMM_set_dry_mode(IHCLxIMM_immersion_opmode_enum *imm_operation_mode,
	IHCLxIMM_immersion_state_enum *imm_hood_state,
	IHCLxIMM_immersion_fluid_state_enum *imm_hood_fluid_state);
int IHCLxIMM_restore_dry_mode(const IHCLxIMM_immersion_opmode_enum *imm_operation_mode,
	const IHCLxIMM_immersion_state_enum *imm_hood_state,
	const IHCLxIMM_immersion_fluid_state_enum *imm_hood_fluid_state);
int IHCLxIMM_get_hood_wet_area(double *radius_ptr);
int IHCLxIMM_get_conditioning_starting_position(xyvect *conditioning_starting_position_ptr);
int IHCLxIMM_get_ref_plane_params(const WPxCHUCK_chuck_id_enum *chuck,
	zrxryvect *ref_plane,
	bool *valid);
int IHCLxIMM_request_get_cld_position(int *logical_action_id_ptr);
int IHCLxIMM_get_result_get_cld_position(const int *logical_action_id,
	IHCLxIMM_cld_position_enum *cld_pos);
int IHCLxIMM_request_idle_conditioning(const WPxCHUCK_chuck_id_enum *chuck_id,
	int *logical_action_id_ptr);
int IHCLxIMM_get_result_idle_conditioning(const int *logical_action_id);



#endif // _IHCLxIMM_TC_H_
