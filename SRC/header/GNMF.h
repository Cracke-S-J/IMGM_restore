/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : GN
* 模块名称 : GNMF
* 文件名称 : GNMF.h
* 概要描述 :
*	GN组件GNMF对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _GNMF_H_ 
#define _GNMF_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------- 宏定义 --------------------*/




/*----------------------- 枚举定义 -----------------------*/





/*------------------------ 结构体 ------------------------*/

typedef int GNMF_column_t[];
typedef double *GNMF_matrix_t;

typedef struct GNMF_model_tag {
	int col_no;
	int reduce_no;
	GNMF_matrix_t *matrix;
	double *reduce_vector;
	int alloc_flag;
}GNMF_model;


/*-------------------- 对外全局变量声明 --------------------*/








/*----------------------- 对外接口声明 -----------------------*/


int GNMF_AllocateModel(GNMF_model *ModelData, int m);
int GNMF_Clear(GNMF_model *ModelData);
int GNMF_FreeModel(GNMF_model *ModelData);
int GNMF_Mcc(GNMF_model *ModelData, double * Mcc);
int GNMF_Reduce(GNMF_model *ModelData, double Vector[]);
int GNMF_Residual(GNMF_model *ModelData, double * Residual);
int GNMF_Size(GNMF_model *ModelData, int *Size);
int GNMF_Solve(GNMF_model *ModelData, double Vector[]);
/* end of library functions declaration*/

int GNMF_invert_matrix(int row_no, double** matrix);
void GNMF_destroy_matrix(double ***matrix);
int GNMF_create_matrix(int row_nr, int column_nr, double ***matrix);
int GNMF_matrix_x_vector(int N, int M, double **matrix, double vector[]);


/* x横轴坐标数组
* y代表纵轴坐标数组
* n代表拟和的点数
*
* k为拟和后的系数，即斜率
* b代表截矩
* 一维线性拟合
*/
 int GNMF_linefit(double *x, double *y, int n, double *k, double *b);





#endif // _GNMF_H_

