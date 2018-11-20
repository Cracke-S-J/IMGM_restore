
#include <GNMA.h>






extern int GNMA_freq_size(IN int iNbr_points,/*�������ݵĸ���*/
	IN int iNbr_frames,/*���ݼ����֡����ͨ��Ϊ1,������߼����ٶȣ�����Ƶ�ʷֱ���*/
	OUT int *piNbr_freq_points)
{
	return 0;
}/*Ƶ�ʵ�ĸ���*/

extern int GNMA_spectrum(IN int iNbr_points,/*�������ݼ���ĸ���*/
	IN int iNbr_frames,/*���ݼ����֡����ͨ��Ϊ1��������߼����ٶȣ�����Ƶ�ʷֱ���*/
	IN int iNbr_freq_points, /*Ƶ�ʵ�ĸ�����һ��Ϊ2���ݴη��ĸ�����1*/
	IN double dSample_period,/*�������ڣ����ǹ�˾ĿǰΪ400΢���������*/
	IN double *pdX,/*���������1*/
	IN double *pdY, /*���������2*/
	OUT double *pdFreqs,/*�����Ƶ��*/
	OUT double *pdPxx,/*���������1����*/
	OUT double *pdPyy,/*���������2����*/
	OUT complex *psPxy)
{
	return 0;
}/*����Ļ���*/

extern int GNMA_transfer(IN int iNbr_freq_points,/*Ƶ�ʵ����*/
	IN double *pdPxx,/*����*/
	IN double *pdPyy, /*����*/
	IN complex *psPxy,/*����*/
	OUT double *pdMagnitude, /*��ֵ*/
	OUT double *pdPhase,/*��λֵ*/
	OUT double *pdCoherence)
{
	return 0;
}/*��ض�*/
extern int GNMA_mov_avg_and_std_dev(IN double *input,/*��������*/
	IN int input_size,/*�������ݵĸ���*/
	IN int filter_window, /*�������Ĵ�С*/
	OUT double *mov_avg,/*������ֵMA*/
	OUT double *mov_std_dev)
{
	return 0;
}/*��������ֵMSD*/
extern int GNMA_peak_value(IN double *source, /*���������,����Ϊdouble����*/
	IN int nbr, /*���ݵĸ���*/
	IN int iNull,/*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *peak)
{
	return 0;
}/*���ݵķ�ֵ*/
					  //��source���ҳ�����ֵ����������*peak��
extern int  GNMA_max_value(IN double *pdData, /*���������,����Ϊdouble����*/
	IN int iNumber, /*�������ݵĸ���*/
	IN int iNull,/*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMax)
{
	return 0;
}/*���ݵ����ֵ*/
					   //���ܣ���pdData[]���ҳ����ķ���*pdMax��

extern int  GNMA_min_value(IN double *pdData,/*���������,����Ϊdouble����*/
	IN int iNumber,/*�������ݵĸ���*/
	IN int iNull,/*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMin)
{
	return 0;
}/*���ݵ���Сֵ*/
					   //���ܣ���pdData[]���ҳ���С�ķ���*pdMin��

extern int GNMA_statistics(IN double *pdData, /*���������,����Ϊdouble����*/
	IN int iNumber, /*�������ݵĸ���*/
	IN int iNull, /*sizeof�����ݵ����ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMean,/*��ֵ*/
	OUT double *pdStdDev,/*��׼��*/
	OUT double *pdPeak, /*��ֵ*/
	OUT double *pdMin,/*��Сֵ*/
	OUT double *pdMax,/*���ֵ*/
	OUT double *pdMean3Sigma)
{
	return 0;
}
/*mean+3sigma*/
							  //���ܣ����pdData[]��ƽ��ֵ*pdMean����׼��*pdStdDev��������ֵ*pdPeak��
							  //					  ��Сֵ*pdMin�����ֵ*pdMax �͡�ƽ��ֵ��3�ơ�*pdMean3Sigma��
extern int	GNMA_average_data(IN double *pdData, /*��������,����Ϊdouble����*/
	IN int iNumber, /*���ݵĸ���*/
	IN int iNull, /*sizeof���������ͣ���Ŀǰ�˲��������ã���Ĭ��Ϊsizeof��double��*/
	OUT double *pdMean,/*��ֵ*/
	OUT double *pdStdDev)
{
	return 0;
}
/*��׼��*/
						  //���ܣ����pdData[]��ƽ��ֵ*pdMean�ͱ�׼��*pdStdDev��

extern int GNMA_calc_bandwidth(IN int sim_mode, /*����ģʽ*/
	IN double *freq_point/*Ƶ������*/,
	IN double *magnitude/*��ֵ����*/,
	IN int nbr_fre_trace,/*Ƶ�ʸ���*/
	IN double sample_period,/*�������ڣ����ǹ�˾һ��Ϊ400΢���������*/
	IN double start_fr/*��ʼƵ��*/,
	IN double stop_fr/*ֹͣƵ��*/,
	OUT int *if_found/*�Ƿ��ҵ������û�ҵ�����0*/,
	OUT double *bw/*��������Ĵ���*/)
{
	return 0;
}
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
	OUT double *ph_fre/*��λԣ�ȶ�Ӧ��Ƶ�ʵ�ֵ*/)
{
	return 0;
}

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
	OUT double *ampl_freq/*��Ӧ��Ƶ��ֵ*/)
{
	return 0;
}






