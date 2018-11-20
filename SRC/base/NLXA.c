
#include <NLXA.h>




//向量的创建/释放/拷贝/赋值/打印/存储
int NLXA_create_vec(int nr_elements, NLXA_vec *vec_ptr)
{
	return 0;
}
int NLXA_set_vec(double value, NLXA_vec *vec_ptr)
{
	return 0;
}
int NLXA_create_vec_and_set(int nr_elements, double value, NLXA_vec *vec_ptr)
{
	return 0;
}
int NLXA_destroy_vec(NLXA_vec *vec_ptr)
{
	return 0;
}
int NLXA_copy_vec(NLXA_vec *vecS_ptr, NLXA_vec *vecD_ptr)
{
	return 0;
}
int NLXA_compare_vec(bool *equal_ptr, double precise, NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr)
{
	return 0;
}
void NLXA_trace_vec(const char *component, const char *vector_name, NLXA_vec *vec_ptr)
{
	return;
}
int NLXA_store_vec(const char *file_name, NLXA_vec *vec_ptr)

{
	return 0;
}

//矩阵的创建/释放/拷贝/赋值/打印/存储
int NLXA_create_mat(int rows, int columns, NLXA_mat *mat_ptr)
{
	return 0;
}
int NLXA_eye_mat(NLXA_mat *mat_ptr)
{
	return 0;
}
int NLXA_set_mat(double value, NLXA_mat *mat_ptr)
{
	return 0;
}
int NLXA_create_mat_and_set(int rows, int columns, double value, NLXA_mat *mat_ptr)
{
	return 0;
}
int NLXA_destroy_mat(NLXA_mat *mat_ptr)
{
	return 0;
}
int NLXA_copy_mat(NLXA_mat *matS_ptr, NLXA_mat *matD_ptr)
{
	return 0;
}
int NLXA_compare_mat(bool *equal_ptr, double precise, NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr)
{
	return 0;
}
void NLXA_trace_mat(const char *component, const char *mat_name, NLXA_mat *mat_ptr)
{
	return;
}
int NLXA_store_mat(const char *file_name, NLXA_mat *mat_ptr)
{
	return 0;
}

//模型数据的创建/释放
int NLXA_create_model(int nrow, int ncol, NLXA_mat *mat_ptr, 
	NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vec3_ptr)
{
	return 0;
}
int NLXA_destroy_model(NLXA_mat *mat_ptr, 
	NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vec3_ptr)
{
	return 0;
}

//取向量最小值
int NLXA_vecmin(int *min_index_ptr, double *min_value_ptr, NLXA_vec *vec_ptr)
{
	return 0;
}
//取向量最大值
int NLXA_vecmax(int *max_index_ptr, double *max_value_ptr, NLXA_vec *vec_ptr)
{
	return 0;
}
//向量求和
int NLXA_vecsum(double *sum_ptr, NLXA_vec *vec_ptr)
{
	return 0;
}
//向量求norm值
int NLXA_vecnorm(NLXA_vec *vec_ptr, double *norm_ptr)
{
	return 0;
}
//向量取绝对值
int NLXA_vecabs(NLXA_vec *vec_ptr)
{
	return 0;
}
//向量相加
int NLXA_vecvec_add(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}
//向量相减
int NLXA_vecvec_sub(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}
//向量相乘
int NLXA_vecvec_mult(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}
//向量点积
int NLXA_vecvec_dot(NLXA_vec *vec1_ptr, NLXA_vec *vec2_ptr, double *res_ptr)
{
	return 0;
}
//
int NLXA_scalarvec_mult(double scalar, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}

//矩阵转置
int NLXA_matT(NLXA_mat *mat_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}
//矩阵相加
int NLXA_matmat_add(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}
//矩阵相减
int NLXA_matmat_sub(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}
//矩阵相乘
int NLXA_matmat_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}
//矩阵(转置)相乘
int NLXA_matmatT_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}
//(转置)矩阵相乘
int NLXA_matTmat_mult(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}
//
int NLXA_scalarmat_mult(double scalar, NLXA_mat *mat_ptr, NLXA_mat *matRes_ptr)
{
	return 0;
}

//矩阵乘向量
int NLXA_matvec_mult(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}
//矩阵(转置)乘向量
int NLXA_matTvec_mult(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}
//
int NLXA_mat_cond(NLXA_mat *mat_ptr, double *condRes_ptr)
{
	return 0;
}
//
int NLXA_matinv(NLXA_mat *mat_ptr, NLXA_mat *matinv_ptr)
{
	return 0;
}
//
int NLXA_matpinv(double data, NLXA_mat *mat_ptr, NLXA_mat *matpinv_ptr)
{
	return 0;
}
//矩阵伪逆
int NLXA_mat_pinv(NLXA_mat *mat_ptr, double dEviation, NLXA_mat *matpinv_ptr, double *condition_number)
{
	return 0;
}
//
int NLXA_mat_pinv_iterative(NLXA_mat *mat_ptr, int nr_iterations, NLXA_mat *matpinv_ptr)
{
	return 0;
}


int NLXA_matvec_solve(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}
int NLXA_mat_svd(NLXA_mat *mat1_ptr, NLXA_mat *mat2_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}
int NLXA_matvec_solve_lsq(NLXA_mat *mat_ptr, NLXA_vec *vec_ptr, NLXA_vec *vecRes_ptr)
{
	return 0;
}
int NLXA_matvec_svd_backsub(NLXA_mat *U, NLXA_vec *diag, NLXA_mat *V_T,
	NLXA_vec *x, NLXA_vec *b, double limit_min_SV)
{
	return 0;
}
int NLXA_matvec_lsq_by_svd(NLXA_mat *U, NLXA_vec *diag, double limit_min_SV,
	NLXA_vec *b, NLXA_mat *V_T)
{
	return 0;
}
int NLXA_matvec_lsq_by_svd_divide_and_conquer(NLXA_mat *U, NLXA_vec *diag, double limit_min_SV,
	NLXA_vec *b, NLXA_mat *V_T)
{
	return 0;
}
int NLXA_matvec_lsq_by_svd_sparse_matrix(NLXA_mat *U, NLXA_vec *diag, double limit_min_SV,
	NLXA_vec *b, NLXA_mat *V_T)
{
	return 0;
}

//Cholesky分解法又叫平方根法，是求解对称正定线性方程组最常用的方法之一
int NLXA_cholesky_factorize(char upp_low, NLXA_mat *mat_ptr)
{
	return 0;
}
int NLXA_cholesky_solve_matrix(char upp_low, NLXA_mat *matA_ptr, NLXA_mat *matB_ptr)
{
	return 0;
}
int NLXA_cholesky_solve_vector(char upp_low, NLXA_mat *mat_ptr, NLXA_vec *vec_ptr)
{
	return 0;
}
int NLXA_solve_eigensystem_real(NLXA_mat *mat1_ptr, NLXA_vec *vec_ptr, NLXA_mat *mat2_ptr)
{
	return 0;
}


int NLXA_line_search(search_func func, double interval_x, double interval_y,
	double tolerance, int max_iterations, double *x_min)
{
	return 0;
}

int NLXA_poly_real_extreme_values(NLXA_polynomial *polynomial, NLXA_inteval *inteval, 
	NLXA_extreme_values *extreme_values_p)
{
	return 0;
}
int NLXA_poly_real_roots(NLXA_polynomial *polynomial,
	NLXA_roots *real_roots_p);
int NLXA_poly_derivative(NLXA_polynomial *polynomial,
	NLXA_polynomial *derivative_p)
{
	return 0;
}

int NLXA_compute_poly_fit_order(NLXA_vec *x_vect, NLXA_vec *y_vect, int order,
	NLXA_polynomial *polynomial, double limit_min_SV)
{
	return 0;
}
int NLXA_compute_poly_fit(NLXA_vec *x_vect, NLXA_vec *b_vect, NLXA_vec *intervals,
	NLXA_polynomial *polynomial, double limit_min_SV)
{
	return 0;
}
int NLXA_compute_poly_fit_matrix(NLXA_vec *x_vect, NLXA_vec *intervals, NLXA_mat *A,
	int bound_cond)
{
	return 0;
}
int NLXA_compute_poly_fit_by_coefs(NLXA_vec *coefs, NLXA_vec *intervals, int bound_cond,
	NLXA_polynomial *polynomial)
{
	return 0;
}
int NLXA_compute_natural_cubic_spline_fit(NLXA_vec *x, NLXA_vec *y,
	NLXA_polynomial *polynomial)
{
	return 0;
}

int NLXA_poly_scale(NLXA_vec *scale, NLXA_polynomial *polynomial)
{
	return 0;
}

int NLXA_fit_ellipse_polynominal(NLXA_vec *x, NLXA_vec *y, NLXA_polynomial *polynomial)
{
	return 0;
}
int NLXA_fit_ellipse_goniometric(NLXA_vec *x, NLXA_vec *y, double goniometric[5])
{
	return 0;
}
int NLXA_fit_ellipse_extremes(double i0i1, double i2i3, double i4i5, double i6i7, double i8i9, double i10i11,
	double *data1, double *data2, double *data3, double *data4)
{
	return 0;
}

int NLXA_erf(double x, double *erf_x)
{
	return 0;
}





void NLSPL_ensureConfiguration()

{
	return;
}


