
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


/* x������������
* y����������������
* n������͵ĵ���
*
* kΪ��ͺ��ϵ������б��
* b����ؾ�
* һά�������
*/
 int GNMF_linefit(double *x, double *y, int n, double *k, double *b)
 {
	 return 0;
 }







