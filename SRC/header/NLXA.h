/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : NL
* ģ������ : NLXA
* �ļ����� : NLXA.h
* ��Ҫ���� :
*	NL���NLXA���ݽṹ����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _NLXA_H_ 
#define _NLXA_H_

/*-------------------- ͷ�ļ� --------------------*/
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
//�����Ĵ���/�ͷ�/����/��ֵ/��ӡ/�洢
int NLXA_create_vec(int nr_elements, NLXA_vec *vec_ptr);
int NLXA_set_vec(double value, NLXA_vec *vec_ptr);
int NLXA_create_vec_and_set(int nr_elements, double value, NLXA_vec *vec_ptr);
int NLXA_destroy_vec(NLXA_vec *vec_ptr);
int NLXA_copy_vec(NLXA_vec *vecS_ptr, NLXA_vec *vecD_ptr);
int NLXA_compare_vec(bool *equal_ptr, double precise, NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr);
void NLXA_trace_vec(const char *component, const char *vector_name, NLXA_vec *vec_ptr);
int NLXA_store_vec(const char *file_name, NLXA_vec *vec_ptr);

//����Ĵ���/�ͷ�/����/��ֵ/��ӡ/�洢
int NLXA_create_mat(int rows, int columns, NLXA_mat *mat_ptr);
int NLXA_eye_mat(NLXA_mat *mat_ptr);
int NLXA_set_mat(double value, NLXA_mat *mat_ptr);
int NLXA_create_mat_and_set(int rows, int columns, double value, NLXA_mat *mat_ptr);
int NLXA_destroy_mat(NLXA_mat *mat_ptr);
int NLXA_copy_mat(NLXA_mat *matS_ptr, NLXA_mat *matD_ptr);
int NLXA_compare_mat(bool *equal_ptr, double precise, NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr);
void NLXA_trace_mat(const char *component, const char *mat_name, NLXA_mat *mat_ptr);
int NLXA_store_mat(const char *file_name, NLXA_mat *mat_ptr);

//ģ�����ݵĴ���/�ͷ�
int NLXA_create_model(int nrow, int ncol, NLXA_mat *mat_ptr, 
	NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vec3_ptr);
int NLXA_destroy_model(NLXA_mat *mat_ptr, 
	NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vec3_ptr);

//ȡ������Сֵ
int NLXA_vecmin(int *min_index_ptr, double *min_value_ptr, NLXA_vec *vec_ptr);
//ȡ�������ֵ
int NLXA_vecmax(int *max_index_ptr, double *max_value_ptr, NLXA_vec *vec_ptr);
//�������
int NLXA_vecsum(double *sum_ptr, NLXA_vec *vec_ptr);
//������normֵ
int NLXA_vecnorm(NLXA_vec *vec_ptr, double *norm_ptr);
//����ȡ����ֵ
int NLXA_vecabs(NLXA_vec *vec_ptr);
//�������
int NLXA_vecvec_add(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vecRes_ptr);
//�������
int NLXA_vecvec_sub(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vecRes_ptr);
//�������
int NLXA_vecvec_mult(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_mat *matRes_ptr);
//�������
int NLXA_vecvec_dot(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, double *res_ptr);
//
int NLXA_scalarvec_mult(double scalar, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);

//����ת��
int NLXA_matT(NLXA_mat *mat_ptr, NLXA_mat *matRes_ptr);
//�������
int NLXA_matmat_add(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//�������
int NLXA_matmat_sub(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//�������
int NLXA_matmat_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//����(ת��)���
int NLXA_matmatT_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//(ת��)�������
int NLXA_matTmat_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr);
//
int NLXA_scalarmat_mult(double scalar, NLXA_mat *mat_ptr, NLXA_mat *matRes_ptr);

//���������
int NLXA_matvec_mult(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);
//����(ת��)������
int NLXA_matTvec_mult(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr);
//
int NLXA_mat_cond(NLXA_mat *mat_ptr, double *condRes_ptr);
//
int NLXA_matinv(NLXA_mat *mat_ptr, NLXA_mat *matinv_ptr);
//
int NLXA_matpinv(double data, NLXA_mat *mat_ptr, NLXA_mat *matpinv_ptr);
//����α��
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

//Cholesky�ֽⷨ�ֽ�ƽ�������������Գ��������Է�������õķ���֮һ
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
