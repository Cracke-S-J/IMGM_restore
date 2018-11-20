/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : NL
* 模块名称 : NLXA
* 文件名称 : NLXA.h
* 概要描述 :
*	NL组件NLXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _NLXA_H_ 
#define _NLXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/







typedef struct
{
	int length;    //0x0
	double *data;  //0x4	
} NLXA_vec;  //size=0x8

typedef struct
{
	int rows;      //0x0
	int columns;   //0x4
	double **data;  //0x8	
} NLXA_mat;  //size=0xC

typedef struct
{
	int order;       //0x0
	double coef[5];  //0x8	
} NLXA_polynomial;  //size=0x30

typedef struct
{
	double start; //0x0
	double end;   //0x8
} NLXA_inteval;  //size=0x10

typedef struct
{
	double min; //0x0
	double max;   //0x8
} NLXA_extreme_values;  //size=0x10

typedef struct
{
	int nroot;        //0x0
	double root[3];   //0x8
} NLXA_roots;  //size=0x20



/*-------------------------- Functions ---------------------------*/
//向量的创建/释放/拷贝/赋值/打印/存储
int NLXA_create_vec(int nr_elements, NLXA_vec *vec_ptr);
int NLXA_set_vec(double value, NLXA_vec *vec_ptr);
int NLXA_create_vec_and_set(int nr_elements, double value, NLXA_vec *vec_ptr);
int NLXA_destroy_vec(NLXA_vec *vec_ptr);
int NLXA_copy_vec(NLXA_vec *vecS_ptr, NLXA_vec *vecD_ptr);
int NLXA_compare_vec(bool *equal_ptr, double precise, NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr);
void NLXA_trace_vec(const char *component, const char *vector_name, NLXA_vec *vec_ptr);
int NLXA_store_vec(const char *file_name, NLXA_vec *vec_ptr);

//矩阵的创建/释放/拷贝/赋值/打印/存储
int NLXA_create_mat(int rows, int columns, NLXA_mat *mat_ptr);
int NLXA_eye_mat(NLXA_mat *mat_ptr);
int NLXA_set_mat(double value, NLXA_mat *mat_ptr);
int NLXA_create_mat_and_set(int rows, int columns, double value, NLXA_mat *mat_ptr);
int NLXA_destroy_mat(NLXA_mat *mat_ptr);
int NLXA_copy_mat(NLXA_mat *matS_ptr, NLXA_mat *matD_ptr);
int NLXA_compare_mat(bool *equal_ptr, double precise, NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr);
void NLXA_trace_mat(const char *component, const char *mat_name, NLXA_mat *mat_ptr);
int NLXA_store_mat(const char *file_name, NLXA_mat *mat_ptr);

//模型数据的创建/释放
int NLXA_create_model(int nrow, int ncol, NLXA_mat *mat_ptr, 
	NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vec3_ptr);
int NLXA_destroy_model(NLXA_mat *mat_ptr, 
	NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vec3_ptr);

//取向量最小值
int NLXA_vecmin(int *min_index_ptr, double *min_value_ptr, NLXA_vec *vec_ptr);
//取向量最大值
int NLXA_vecmax(int *max_index_ptr, double *max_value_ptr, NLXA_vec *vec_ptr);
//向量求和
int NLXA_vecsum(double *sum_ptr, NLXA_vec *vec_ptr);
//向量求norm值
int NLXA_vecnorm(NLXA_vec *vec_ptr, double *norm_ptr);
//向量取绝对值
int NLXA_vecabs(NLXA_vec *vec_ptr);
//向量相加
int NLXA_vecvec_add(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vecRes_ptr);
//向量相减
int NLXA_vecvec_sub(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vecRes_ptr);
//向量相乘
int NLXA_vecvec_mult(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_mat *matRes_ptr);
//向量点积
int NLXA_vecvec_dot(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, double *res_ptr);
//
int NLXA_scalarvec_mult(double scalar, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);

//矩阵转置
int NLXA_matT(NLXA_mat *mat_ptr, NLXA_mat *matRes_ptr);
//矩阵相加
int NLXA_matmat_add(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//矩阵相减
int NLXA_matmat_sub(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//矩阵相乘
int NLXA_matmat_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//矩阵(转置)相乘
int NLXA_matmatT_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//(转置)矩阵相乘
int NLXA_matTmat_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//
int NLXA_scalarmat_mult(double scalar, NLXA_mat *mat_ptr, NLXA_mat *matRes_ptr);

//矩阵乘向量
int NLXA_matvec_mult(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);
//矩阵(转置)乘向量
int NLXA_matTvec_mult(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);
//
int NLXA_mat_cond(NLXA_mat *mat_ptr, double *condRes_ptr);
//
int NLXA_matinv(NLXA_mat *mat_ptr, NLXA_mat *matinv_ptr);
//
int NLXA_matpinv(double data, NLXA_mat *mat_ptr, NLXA_mat *matpinv_ptr);
//矩阵伪逆
int NLXA_mat_pinv(NLXA_mat *mat_ptr, double dEviation, NLXA_mat *matpinv_ptr, double *condition_number);
//
int NLXA_mat_pinv_iterative(NLXA_mat *mat_ptr, int nr_iterations, NLXA_mat *matpinv_ptr);


int NLXA_matvec_solve(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);
int NLXA_mat_svd(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_vec *vecRes_ptr);
int NLXA_matvec_solve_lsq(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);
int NLXA_matvec_svd_backsub(NLXA_mat *U, NLXA_vec *diag, NLXA_mat *V_T,
	NLXA_vec *x, NLXA_vec *b, double limit_min_SV);
int NLXA_matvec_lsq_by_svd(NLXA_mat *U, NLXA_vec *diag, double limit_min_SV,
	NLXA_vec *b, NLXA_mat *V_T);
int NLXA_matvec_lsq_by_svd_divide_and_conquer(NLXA_mat *U, NLXA_vec *diag, double limit_min_SV,
	NLXA_vec *b, NLXA_mat *V_T);
int NLXA_matvec_lsq_by_svd_sparse_matrix(NLXA_mat *U, NLXA_vec *diag, double limit_min_SV,
	NLXA_vec *b, NLXA_mat *V_T);

//Cholesky分解法又叫平方根法，是求解对称正定线性方程组最常用的方法之一
int NLXA_cholesky_factorize(char upp_low, NLXA_mat *mat_ptr);
int NLXA_cholesky_solve_matrix(char upp_low, NLXA_mat *matA_ptr, NLXA_mat *matB_ptr);
int NLXA_cholesky_solve_vector(char upp_low, NLXA_mat *mat_ptr, NLXA_vec *vec_ptr);
int NLXA_solve_eigensystem_real(NLXA_mat *mat1_ptr, NLXA_vec *vec_ptr, NLXA_mat *mat2_ptr);

typedef void (*search_func)(double data, double *ret);
int NLXA_line_search(search_func func, double interval_x, double interval_y,
	double tolerance, int max_iterations, double *x_min);

int NLXA_poly_real_extreme_values(NLXA_polynomial *polynomial, NLXA_inteval *inteval, 
	NLXA_extreme_values *extreme_values_p);
int NLXA_poly_real_roots(NLXA_polynomial *polynomial,
	NLXA_roots *real_roots_p);
int NLXA_poly_derivative(NLXA_polynomial *polynomial,
	NLXA_polynomial *derivative_p);

int NLXA_compute_poly_fit_order(NLXA_vec *x_vect, NLXA_vec *y_vect, int order,
	NLXA_polynomial *polynomial, double limit_min_SV);
int NLXA_compute_poly_fit(NLXA_vec *x_vect, NLXA_vec *b_vect, NLXA_vec *intervals,
	NLXA_polynomial *polynomial, double limit_min_SV);
int NLXA_compute_poly_fit_matrix(NLXA_vec *x_vect, NLXA_vec *intervals, NLXA_mat *A,
	int bound_cond);
int NLXA_compute_poly_fit_by_coefs(NLXA_vec *coefs, NLXA_vec *intervals, int bound_cond,
	NLXA_polynomial *polynomial);
int NLXA_compute_natural_cubic_spline_fit(NLXA_vec *x, NLXA_vec *y,
	NLXA_polynomial *polynomial);

int NLXA_poly_scale(NLXA_vec *scale, NLXA_polynomial *polynomial);

int NLXA_fit_ellipse_polynominal(NLXA_vec *x, NLXA_vec *y, NLXA_polynomial *polynomial);
int NLXA_fit_ellipse_goniometric(NLXA_vec *x, NLXA_vec *y, double goniometric[5]);
int NLXA_fit_ellipse_extremes(double , double , double , double , double , double ,
	double *data1, double *data2, double *data3, double *data4);

int NLXA_erf(double x, double *erf_x);





void NLSPL_ensureConfiguration();

#endif // _NLXA_H_
