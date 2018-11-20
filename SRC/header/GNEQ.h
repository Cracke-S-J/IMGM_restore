/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : GN
* ģ������ : GNEQ
* �ļ����� : GNEQ.h
* ��Ҫ���� :
*	GN���GNEQ����ӿ�����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _GNEQ_H_ 
#define _GNEQ_H_

#include <base.h>


/*-------------------- ����ȫ�ֱ������� --------------------*/








/*----------------------- ����ӿ����� -----------------------*/


/*--------------------------------------------------------------------
* Parameters	:
* 	-input      :
* 	-input/output	:  <none>
* 	-output	   :
* Returns	:
OK - success (error_code = 0)
* Purpose	: -dRange < d1 - d2 < dRange �򷵻�TRUE, ����dRange�Ǹ�
--------------------------------------------------------------------*/
bool GNEQ_dbl_equal_absolute(double d1, double d2, double dRange);
bool GNEQ_dbl_equal(double d1, double d2);





#endif // _GNEQ_H_

