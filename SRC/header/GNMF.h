/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : GN
* ģ������ : GNMF
* �ļ����� : GNMF.h
* ��Ҫ���� :
*	GN���GNMF����ӿ�����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _GNMF_H_ 
#define _GNMF_H_

/*-------------------- ͷ�ļ� --------------------*/
#include <base.h>



/*-------------------- �궨�� --------------------*/




/*----------------------- ö�ٶ��� -----------------------*/





/*------------------------ �ṹ�� ------------------------*/

typedef int GNMF_column_t[];
typedef double *GNMF_matrix_t;

typedef struct GNMF_model_tag {
	int col_no;
	int reduce_no;
	GNMF_matrix_t *matrix;
	double *reduce_vector;
	int alloc_flag;
}GNMF_model;


/*-------------------- ����ȫ�ֱ������� --------------------*/








/*----------------------- ����ӿ����� -----------------------*/


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


/* x������������
* y����������������
* n������͵ĵ���
*
* kΪ��ͺ��ϵ������б��
* b����ؾ�
* һά�������
*/
 int GNMF_linefit(double *x, double *y, int n, double *k, double *b);





#endif // _GNMF_H_

