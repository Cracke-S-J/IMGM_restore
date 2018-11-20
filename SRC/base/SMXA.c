
#include <SMXA.h>





int SMXAreadImportedData(int iParam1) {
	return 0;
}

//TBD函数返回值类型、参数传值or指针不确定-_-
void SMXA_mc_changed(const SMXA_mc_changed_data_set_abbr *data_set_abbr)
{
	return;
}
void SMXA_read_imported_data(const bool *init_critical)
{
	return;
}
int SMXA_driver_str_info(const SMXA_driver_str_info_driver *driver,
	bool *driver_enabled) 
{
	return 0;
}
int SMXA_get_number_of_enabled_drivers(int *enabled_driver_cnt)
{
	return 0;
}


int SMXAxITS_initialize(int dirver_list[0x384], SMXA_init_option_str options_str_list[SMXA_MAX_DRIVERS],
	SMXA_importance importance, SMXA_driverset_spec spec, int epc_flags[2])
{
	return 0;
}



