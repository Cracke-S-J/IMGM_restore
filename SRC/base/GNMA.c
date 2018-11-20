
#include <GNMA.h>






extern int GNMA_freq_size(IN int iNbr_points,/*输入数据的个数*/
	IN int iNbr_frames,/*数据计算的帧数，通常为1,大则提高计算速度，降低频率分辨率*/
	OUT int *piNbr_freq_points)
{
	return 0;
}/*频率点的个数*/

extern int GNMA_spectrum(IN int iNbr_points,/*输入数据计算的个数*/
	IN int iNbr_frames,/*数据计算的帧数，通常为1，大则提高计算速度，降低频率分辨率*/
	IN int iNbr_freq_points, /*频率点的个数，一般为2的幂次方的个数加1*/
	IN double dSample_period,/*采样周期，我们公司目前为400微秒的整数倍*/
	IN double *pdX,/*输入的数据1*/
	IN double *pdY, /*输入的数据2*/
	OUT double *pdFreqs,/*输出的频率*/
	OUT double *pdPxx,/*输出的数据1自谱*/
	OUT double *pdPyy,/*输出的数据2自谱*/
	OUT complex *psPxy)
{
	return 0;
}/*输出的互谱*/

extern int GNMA_transfer(IN int iNbr_freq_points,/*频率点个数*/
	IN double *pdPxx,/*自谱*/
	IN double *pdPyy, /*自谱*/
	IN complex *psPxy,/*互谱*/
	OUT double *pdMagnitude, /*幅值*/
	OUT double *pdPhase,/*相位值*/
	OUT double *pdCoherence)
{
	return 0;
}/*相关度*/
extern int GNMA_mov_avg_and_std_dev(IN double *input,/*输入数据*/
	IN int input_size,/*输入数据的个数*/
	IN int filter_window, /*滑动窗的大小*/
	OUT double *mov_avg,/*滑动均值MA*/
	OUT double *mov_std_dev)
{
	return 0;
}/*滑动均方值MSD*/
extern int GNMA_peak_value(IN double *source, /*输入的数据,必须为double类型*/
	IN int nbr, /*数据的个数*/
	IN int iNull,/*sizeof（数据的类型），目前此参数不可用，可默认为sizeof（double）*/
	OUT double *peak)
{
	return 0;
}/*数据的峰值*/
					  //从source中找出绝对值最大的数放入*peak。
extern int  GNMA_max_value(IN double *pdData, /*输入的数据,必须为double类型*/
	IN int iNumber, /*输入数据的个数*/
	IN int iNull,/*sizeof（数据的类型），目前此参数不可用，可默认为sizeof（double）*/
	OUT double *pdMax)
{
	return 0;
}/*数据的最大值*/
					   //功能：从pdData[]中找出最大的放入*pdMax。

extern int  GNMA_min_value(IN double *pdData,/*输入的数据,必须为double类型*/
	IN int iNumber,/*输入数据的个数*/
	IN int iNull,/*sizeof（数据的类型），目前此参数不可用，可默认为sizeof（double）*/
	OUT double *pdMin)
{
	return 0;
}/*数据的最小值*/
					   //功能：从pdData[]中找出最小的放入*pdMin。

extern int GNMA_statistics(IN double *pdData, /*输入的数据,必须为double类型*/
	IN int iNumber, /*输入数据的个数*/
	IN int iNull, /*sizeof（数据的类型），目前此参数不可用，可默认为sizeof（double）*/
	OUT double *pdMean,/*均值*/
	OUT double *pdStdDev,/*标准差*/
	OUT double *pdPeak, /*峰值*/
	OUT double *pdMin,/*最小值*/
	OUT double *pdMax,/*最大值*/
	OUT double *pdMean3Sigma)
{
	return 0;
}
/*mean+3sigma*/
							  //功能：求出pdData[]的平均值*pdMean、标准差*pdStdDev、最大绝对值*pdPeak、
							  //					  最小值*pdMin、最大值*pdMax 和“平均值加3∑”*pdMean3Sigma。
extern int	GNMA_average_data(IN double *pdData, /*输入数据,必须为double类型*/
	IN int iNumber, /*数据的个数*/
	IN int iNull, /*sizeof（数据类型），目前此参数不可用，可默认为sizeof（double）*/
	OUT double *pdMean,/*均值*/
	OUT double *pdStdDev)
{
	return 0;
}
/*标准差*/
						  //功能：求出pdData[]的平均值*pdMean和标准差*pdStdDev。

extern int GNMA_calc_bandwidth(IN int sim_mode, /*仿真模式*/
	IN double *freq_point/*频率数组*/,
	IN double *magnitude/*幅值数组*/,
	IN int nbr_fre_trace,/*频率个数*/
	IN double sample_period,/*采用周期，我们公司一般为400微秒的整数倍*/
	IN double start_fr/*开始频率*/,
	IN double stop_fr/*停止频率*/,
	OUT int *if_found/*是否找到，如果没找到返回0*/,
	OUT double *bw/*计算出来的带宽*/)
{
	return 0;
}
//功能:求出带宽，带宽，定义为幅频值首次穿越零分贝点对应的频率值。

extern int GNMA_calc_phase_margin(IN int sim_mode, /*仿真模式*/
	IN double *freq_point/*频率数组*/,
	IN double *magnitude/*幅值数组*/,
	IN double *phase/*相位数组*/,
	IN int nbr_fre_trace,/*频率个数*/
	IN double sample_period,/*采样周期，我们公司一般为400微秒的整数倍*/
	IN double start_fr/*开始频率*/,
	IN double stop_fr/*停止频率*/,
	OUT int *if_found/*是否找到,0表示没有找到*/,
	OUT double *ph_mar/*相位裕度*/,
	OUT double *ph_fre/*相位裕度对应的频率点值*/)
{
	return 0;
}

//功能:求出相位裕度。

extern int  GNMA_calc_amplitude_margin(IN int sim_mode,/*仿真模式*/
	IN double *freq_point/*频率数组*/,
	IN double *magnitude/*幅值数组*/,
	IN double *phase,/*相位数组*/
	IN int nbr_fre_trace, /*频率点个数*/
	IN double sample_period,/*采样周期，我们公司一般为400微秒的整数倍*/
	IN double bw/*带宽频率,做为启始频率*/,
	IN double amp_stop_fr/*停止频率*/,
	OUT int*if_found/*是否找到，0表示没有找到*/,
	OUT double *ampl_mar/*幅值裕度*/,
	OUT double *ampl_freq/*对应的频率值*/)
{
	return 0;
}






