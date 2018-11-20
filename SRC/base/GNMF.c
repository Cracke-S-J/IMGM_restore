
#include <GNMF.h>






int GNMF_AllocateModel(GNMF_model *ModelData, int m)
{
	return 0;
}
int GNMF_Clear(GNMF_model *ModelData)
{
	return 0;
}
int GNMF_FreeModel(GNMF_model *ModelData)
{
	return 0;
}
int GNMF_Mcc(GNMF_model *ModelData, double * Mcc)
{
	return 0;
}
int GNMF_Reduce(GNMF_model *ModelData, double Vector[])
{
	return 0;
}
int GNMF_Residual(GNMF_model *ModelData, double * Residual)
{
	return 0;
}
int GNMF_Size(GNMF_model *ModelData, int *Size)
{
	return 0;
}
int GNMF_Solve(GNMF_model *ModelData, double Vector[])
{
	return 0;
}
/* end of library functions declaration*/

int GNMF_invert_matrix(int row_no, double** matrix)
{
	return 0;
}
void GNMF_destroy_matrix(double ***matrix)
{
	return;
}
int GNMF_create_matrix(int row_nr, int column_nr, double ***matrix)
{
	return 0;
}
int GNMF_matrix_x_vector(int N, int M, double **matrix, double vector[])
{
	return 0;
}


/* x横轴坐标数组
* y代表纵轴坐标数组
* n代表拟和的点数
*
* k为拟和后的系数，即斜率
* b代表截矩
* 一维线性拟合
*/
 int GNMF_linefit(double *x, double *y, int n, double *k, double *b)
 {
	 return 0;
 }







