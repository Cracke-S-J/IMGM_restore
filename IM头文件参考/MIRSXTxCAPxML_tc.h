/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : MI
* 模块名称 : MIRSXTxCAPxML
* 文件名称 : MIRSXTxCAPxML_tc.h
* 概要描述 :
*	MI组件MIRSXTxCAPxML数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MIRSXTxCAPxML_TC_H_
#define _MIRSXTxCAPxML_TC_H_

/*------------------------------- Includes -------------------------------*/



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef struct
{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double Z0;
    double Rx0;
    double Ry0;
    double z10;
    double z20;
    double z30;
    double z40;
    double fz1;
    double fz2;
    double fz3;
    double fz4;
    double wl;
    double wq;
    double wr;
    double sp1;
    double sp2;
    double sp3;
    double sp4;
} MIRSXTxCAPxML_model_parameter_struct;

typedef struct
{
    int z1;
    bool z1_valid;
    int z2;
    bool z2_valid;
    int z3;
    bool z3_valid;
    int z4;
    bool z4_valid;
} MIRSXTxCAPxML_model_data_struct;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MIRSXTxCAPxML_get_model_parameters(MIRSXTxCAPxML_model_parameter_struct *model_param_ptr);
int MIRSXTxCAPxML_set_model_parameters(const MIRSXTxCAPxML_model_parameter_struct *model_param);
int MIRSXTxCAPxML_get_model_data(MIRSXTxCAPxML_model_data_struct *model_data_ptr);



#endif // _MIRSXTxCAPxML_TC_H_
