/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : PO
* 模块名称 : POXA
* 文件名称 : POXA_tc.h
* 概要描述 :
*	PO组件POXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _POXA_TC_H_
#define _POXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <THXA.h> 
#include <base.h> 




/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef char POXA_DocIDType[0x100];

typedef struct
{
    int len;
    int max_len;
    POXA_DocIDType* array;
} POXA_DocIDListType;

typedef struct
{
    POXA_DocIDType DocID;
    timestamp LastModifiedTime;
} POXA_DocMetaDataType;

typedef struct
{
    int len;
    int max_len;
    POXA_DocMetaDataType* array;
} POXA_DocMetaDataListType;

typedef struct
{
    int len;
    int max_len;
    varstring* array;
} POXA_var_string_array_t;

typedef enum
{
    POXA_DATA_TYPE_UNDEFINED = 0,
    POXA_DATA_TYPE_DD = 1,
    POXA_DATA_TYPE_FILE = 2,
} POXA_DataType;

typedef struct
{
    bool get_supported;
    bool get_file_path_supported;
    bool put_supported;
    bool verify_supported;
    bool delete_supported;
    bool list_supported;
} POXA_SupportedServicesType;

typedef enum
{
    POXA_FORMAT_XML = 0,
    POXA_FORMAT_GZIP_XML = 1,
} POXA_SupportedFormatsType;

typedef struct
{
    int len;
    int max_len;
    POXA_SupportedFormatsType* array;
} POXA_SupportedFormatsList;



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int POXA_set_sim_mode(const THXA_SIM_MODE *sim_mode,
	const THXA_TRACE_MODE *trace_mode,
	const THXA_REQ_MODE *data_mode);
int POXA_get_sim_mode(THXA_SIM_MODE *sim_mode_ptr,
	THXA_TRACE_MODE *trace_mode_ptr,
	THXA_REQ_MODE *data_mode_ptr);
int POXA_download(const varstring *xml_recipe_filename,
	const varstring *xml_report_filename,
	const bool *use_file_compression);
int POXA_download_for_tsw(const varstring *xml_recipe_filename,
	const varstring *xml_report_filename,
	const bool *use_file_compression);
int POXA_create(const varstring *doc_id,
	const varstring *recipe_ID,
	const varstring *layer_ID,
	const varstring *xml_filename);
int POXA_verify(const varstring *xml_recipe_filename,
	const varstring *xml_report_filename,
	const bool *use_file_compression);
int POXA_verify_for_tsw(const varstring *xml_recipe_filename,
	const varstring *xml_report_filename,
	const bool *use_file_compression);
int POXA_upload(const varstring *doc_id,
	const varstring *recipe_name,
	const bool *use_file_compression,
	const timestamp *time_stamp,
	const POXA_var_string_array_t *parameters);
int POXA_upload_for_tsw(const varstring *doc_id,
	const varstring *recipe_name,
	const bool *use_file_compression,
	const timestamp *time_stamp,
	const POXA_var_string_array_t *parameters);
int POXA_delete(const varstring *doc_id);
int POXA_list(const varstring *filter,
	POXA_DocMetaDataListType **list);
int POXA_do_service(const varstring *document_type,
	const varstring *service,
	const varstring *document_path,
	const varstring *input_file_path,
	const varstring *output_file_path,
	const bool *use_file_compression,
	const timestamp *time_stamp,
	const POXA_var_string_array_t *parameters,
	const varstring *user_name,
	POXA_DocMetaDataListType **list,
	POXA_var_string_array_t **error_messages);
int POXA_get_document(const varstring *document_type,
	const varstring *document_path,
	const varstring *output_file_path,
	const timestamp *time_stamp,
	const POXA_var_string_array_t *parameters,
	bool *is_compressed,
	POXA_SupportedFormatsList *supported_format_types);
int POXA_register(const varstring *document_type,
	const varstring *server_address,
	const varstring *root_element,
	const varstring *DD_definition,
	const varstring *DD_definition_vr,
	const POXA_DataType *data_type);
int POXA_register2(const varstring *document_type,
	const varstring *server_address,
	const varstring *root_element,
	const varstring *DD_definition,
	const varstring *DD_definition_vr,
	const POXA_DataType *data_type,
	const POXA_SupportedServicesType *services);
int POXA_set_supported_formats(const varstring *document_type,
	const POXA_SupportedFormatsList *supported_formats);
int POXA_unregister(const varstring *document_type);
int POXA_unregister2(const varstring *document_type);



#endif // _POXA_TC_H_
