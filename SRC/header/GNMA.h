/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� : 
* ������� : GN
* ģ������ : GNMA
* �ļ����� : GNMA.h
* ��Ҫ���� :
*	CC���GNMF����ӿ�����
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _GNMA_H_ 
#define _GNMA_H_

/*-------------------- ͷ�ļ� --------------------*/
#include <base.h>



/*-------------------- �궨�� --------------------*/




/*----------------------- ö�ٶ��� -----------------------*/

typedef enum
{
	NORMAL = 0,
	INVERT//����Ҷ���任
} GNMA_fourier_direction;



/*------------------------ �ṹ�� ------------------------*/


/*-------------------- ����ȫ�ֱ������� --------------------*/








/*----------------------- ����ӿ����� -----------------------*/


extern int GNMA_freq_size(IN int iNbr_points,/*�������ݵĸ���*/
	IN int iNbr_frames,/*���ݼ����֡����ͨ��Ϊ1,������߼����ٶȣ�����Ƶ�ʷֱ���*/
	OUT int *piNbr_freq_points);/*Ƶ�ʵ�ĸ���*/

extern int GNMA_spectrum(IN int iNbr_points,/*�������ݼ���ĸ���*/
	IN int iNbr_frames,/*���ݼ����֡����ͨ��Ϊ1��������߼����ٶȣ�����Ƶ�ʷֱ���*/
	IN int iNbr_freq_points, /*Ƶ�ʵ�ĸ�����һ��Ϊ2���ݴη��ĸ�����1*/
	IN double dSample_period,/*�������ڣ����ǹ�˾ĿǰΪ400΢���������*/
	IN double *pdX,/*���������1*/
	IN double *pdY, /*���������2*/
	OUT double *pdFreqs,/*�����Ƶ��*/
	OUT double *pdPxx,/*���������1����*/
	OUT double *pdPyy,/*���������2����*/
	OUT complex *psPxy);/*����Ļ���*/

extern int GNMA_transfer(IN int iNbr_freq_points,/*Ƶ�ʵ����*/
	IN double *pdPxx,/*����*/
	IN double *pdPyy, /*����*/
	IN complex *psPxy,/*����*/
	OUT double *pdMagnitude, /*��ֵ*/
	OUT double *pdPhase,/*��λֵ*/
	OUT double *pdCoherence);/*��ض�*/
extern int GNMA_mov_avg_and_std_dev(IN double *input,/*��������*/
	IN int input_size,/*�������ݵĸ���*/
	IN int filter_window, /*�������Ĵ�С*/
	OUT double *mov_avg,/*������ֵMA*/
	OUT double *mov_std_dev);/*��������ֵMSD*/
extern int GNMA_peak_value(IN double *source, /*���������,����Ϊdouble����*/
	IN int nbr, /*���ݵĸ���*/
	IN int iNull,/*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *peak);/*���ݵķ�ֵ*/
					  //��source���ҳ�����ֵ����������*peak��
extern int  GNMA_max_value(IN double *pdData, /*���������,����Ϊdouble����*/
	IN int iNumber, /*�������ݵĸ���*/
	IN int iNull,/*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMax);/*���ݵ����ֵ*/
					   //���ܣ���pdData[]���ҳ����ķ���*pdMax��

extern int  GNMA_min_value(IN double *pdData,/*���������,����Ϊdouble����*/
	IN int iNumber,/*�������ݵĸ���*/
	IN int iNull,/*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMin);/*���ݵ���Сֵ*/
					   //���ܣ���pdData[]���ҳ���С�ķ���*pdMin��

extern int GNMA_statistics(IN double *pdData, /*���������,����Ϊdouble����*/
	IN int iNumber, /*�������ݵĸ���*/
	IN int iNull, /*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMean,/*��ֵ*/
	OUT double *pdStdDev,/*��׼��*/
	OUT double *pdPeak, /*��ֵ*/
	OUT double *pdMin,/*��Сֵ*/
	OUT double *pdMax,/*���ֵ*/
	OUT double *pdMean3Sigma);/*mean+3sigma*/
							  //���ܣ����pdData[]��ƽ��ֵ*pdMean����׼��*pdStdDev��������ֵ*pdPeak��
							  //					  ��Сֵ*pdMin�����ֵ*pdMax �͡�ƽ��ֵ��3�ơ�*pdMean3Sigma��
extern int	GNMA_average_data(IN double *pdData, /*��������,����Ϊdouble����*/
	IN int iNumber, /*���ݵĸ���*/
	IN int iNull, /*sizeof���������ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMean,/*��ֵ*/
	OUT double *pdStdDev);/*��׼��*/
						  //���ܣ����pdData[]��ƽ��ֵ*pdMean�ͱ�׼��*pdStdDev��

extern int GNMA_calc_bandwidth(IN int sim_mode, /*����ģʽ*/
	IN double *freq_point/*Ƶ������*/,
	IN double *magnitude/*��ֵ����*/,
	IN int nbr_fre_trace,/*Ƶ�ʸ���*/
	IN double sample_period,/*�������ڣ����ǹ�˾һ��Ϊ400΢���������*/
	IN double start_fr/*��ʼƵ��*/,
	IN double stop_fr/*ֹͣƵ��*/,
	OUT int *if_found/*�Ƿ��ҵ������û�ҵ�����0*/,
	OUT double *bw/*��������Ĵ���*/);
//����:���������������Ϊ��Ƶֵ�״δ�Խ��ֱ����Ӧ��Ƶ��ֵ��

extern int GNMA_calc_phase_margin(IN int sim_mode, /*����ģʽ*/
	IN double *freq_point/*Ƶ������*/,
	IN double *magnitude/*��ֵ����*/,
	IN double *phase/*��λ����*/,
	IN int nbr_fre_trace,/*Ƶ�ʸ���*/
	IN double sample_period,/*�������ڣ����ǹ�˾һ��Ϊ400΢���������*/
	IN double start_fr/*��ʼƵ��*/,
	IN double stop_fr/*ֹͣƵ��*/,
	OUT int *if_found/*�Ƿ��ҵ�,0��ʾû���ҵ�*/,
	OUT double *ph_mar/*��λԣ��*/,
	OUT double *ph_fre/*��λԣ�ȶ�Ӧ��Ƶ�ʵ�ֵ*/);

//����:�����λԣ�ȡ�

extern int  GNMA_calc_amplitude_margin(IN int sim_mode,/*����ģʽ*/
	IN double *freq_point/*Ƶ������*/,
	IN double *magnitude/*��ֵ����*/,
	IN double *phase,/*��λ����*/
	IN int nbr_fre_trace, /*Ƶ�ʵ����*/
	IN double sample_period,/*�������ڣ����ǹ�˾һ��Ϊ400΢���������*/
	IN double bw/*����Ƶ��,��Ϊ��ʼƵ��*/,
	IN double amp_stop_fr/*ֹͣƵ��*/,
	OUT int*if_found/*�Ƿ��ҵ���0��ʾû���ҵ�*/,
	OUT double *ampl_mar/*��ֵԣ��*/,
	OUT double *ampl_freq/*��Ӧ��Ƶ��ֵ*/);






#endif // _GNMA_H_

