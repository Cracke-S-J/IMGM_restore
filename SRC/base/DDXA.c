
#include <DDXA.h>









int DDXA_def_check(char *module_name, int checksum)
{
	return 0;
}

int DDXA_def_get_attr(char *type_name_p,
	char *element_name_p,
	char *attr_name_p,
	DDXA_def_value_t *attr_value_p,
	bool *exists_p)
{
	return 0;
}

int DDXA_def_get_global_data(char *module_name,
	char *key,
	DDXA_def_value_t *value_p,
	bool *exists_p)
{
	return 0;
}

int DDXA_tree_read(FILE *fp,
	DDXA_tree_t *file_attributes,
	DDXA_tree_t *tree_p,
	bool must_be_binary)
{
	return 0;
}

int DDXA_tree_read_detect(FILE *fp,
	DDXA_tree_t *file_attributes,
	DDXA_tree_t *tree_p,
	bool *binary_detect_p)
{
	return 0;
}

int DDXA_tree_free(DDXA_tree_t *tree_p)
{
	return 0;
}

int DDXA_tree_get_sub_tree(DDXA_tree_t *tree_p,
	char *key,
	DDXA_tree_t **subtree_p)
{
	return 0;
}

int DDXA_map_tree_to_C_object(DDXA_tree_t *tree_p,
	char *def_name,
	bool initialise,
	void *C_object_p,
	DDXA_map_log_mode_t log_mode,
	char *log_field,
	bool *update_p)
{
	return 0;
}


int DDXA_C_object_full_alloc(char *def_name,
	void **C_object_p)
{
	return 0;
}
int DDXA_C_object_sub_alloc(char *def_name,
	void *C_object_p)
{
	return 0;
}
int DDXA_C_object_sub_free(char *def_name,
	void *C_object_p)
{
	return 0;
}
int DDXA_C_object_full_free(char *def_name,
	void **C_object_p)
{
	return 0;
}
int DDXA_C_object_print(FILE *fp,
	int indent,
	char *def_name,
	void *C_object_p)

{
	return 0;
}
int DDXA_C_object_to_virtual(char *def_name,
	void *C_object_p,
	DDXA_virtual_t *virtual_p)

{
	return 0;
}
int DDXA_virtual_get_def_type_kind(DDXA_virtual_t *virtual_p,
	DDXA_def_type_kind_t *def_type_kind_p)

{
	return 0;
}
int DDXA_virtual_get_nr_of_children(DDXA_virtual_t *virtual_p,
	int *nr_of_children_p)

{
	return 0;
}
int DDXA_virtual_get_child_field_name(DDXA_virtual_t *virtual_p,
	int child_nr,
	char **field_name_p)

{
	return 0;
}
int DDXA_virtual_get_child(DDXA_virtual_t *parent_virtual_p,
	int child_nr,
	DDXA_virtual_t *child_virtual_p)

{
	return 0;
}
int DDXA_virtual_get_union_child_name_with_disc(DDXA_virtual_t *virtual_p,
	char *disc_item_name,
	int *child_nr_p)

{
	return 0;
}
int DDXA_virtual_get_fixed_string_len(DDXA_virtual_t *virtual_p,
	int *fixed_string_len_p)
{
	return 0;
}
int DDXA_virtual_get_nr_of_enum_items(DDXA_virtual_t *virtual_p,
	int *nr_of_items_p)

{
	return 0;
}
int DDXA_virtual_get_enum_item(DDXA_virtual_t *virtual_p,
	int item_nr,
	char **item_name_p,
	int *value_p)

{
	return 0;
}
int DDXA_virtual_get_attr_list(DDXA_virtual_t *virtual_p,
	char *attr_list_p[],
	int *nr_attributes_p)

{
	return 0;
}
int DDXA_virtual_get_attr(DDXA_virtual_t *virtual_p,
	char *attr_name,
	DDXA_def_value_t *attr_value_p,
	bool *exists_p)

{
	return 0;
}
int DDXA_virtual_get_enum_attr_list(DDXA_virtual_t *virtual_p,
	int index,
	char *attr_list_p[],
	int *nr_attributes_p)

{
	return 0;
}
int DDXA_virtual_get_enum_attr(DDXA_virtual_t *virtual_p,
	int index,
	char *attr_name,
	DDXA_def_value_t *attr_value_p,
	bool *exists_p)
{
	return 0;
}
int DDXA_virtual_set_attr(DDXA_virtual_t *virtual_p,
	char *attr_name,
	DDXA_def_value_t *attr_value_p)
{
	return 0;
}
int DDXA_virtual_get_attr_access(DDXA_virtual_t *virtual_p,
	char *attr_name,
	bool *exists_p,
	bool *writable_p,
	bool *creatable_p,
	bool *deletable_p)
{
	return 0;
}
int DDXA_virtual_set_var_array_len(DDXA_virtual_t *virtual_p,
	int new_len)
{
	return 0;
}
int DDXA_virtual_attr_to_string(DDXA_virtual_t* virtual_p,
	char* attr_name,
	DDXA_def_value_t* value_p,
	DDXA_var_string_t* repr_p)
{
	return 0;
}

int DDXA_virtual_string_to_attr(DDXA_virtual_t* virtual_p,
	char* attr_name,
	char* repr,
	DDXA_def_value_t* value_p)
{
	return 0;
}
int DDXA_virtual_validate_string(DDXA_virtual_t* virtual_p,
	char* attr_name,
	char* repr,
	bool rep_is_complete,
	DDXA_validation_result_t* validation_result_p)
{
	return 0;
}
int DDXA_virtual_get_scaled_unit(DDXA_virtual_t* virtual_p,
	DDXA_var_string_t* repr_p)
{
	return 0;
}
int DDXA_virtual_set_valid_attr(DDXA_virtual_t *virtual_p,
	char *attr_name,
	DDXA_def_value_t *attr_value_p,
	DDXA_out_of_range_behavior_t mode)
{
	return 0;
}
int DDXA_virtual_traverse(DDXA_virtual_t *virtual_p,
	DDXA_strategy_t strategy,
	DDXA_virtual_traverse_callback_t cb,
	void *context_p)
{
	return 0;
}
int DDXA_virtual_get_active_disc_name(DDXA_virtual_t *virtual_p,
	char **disc_name_p)
{
	return 0;
}
int DDXA_SI_convert_from(char *unit,
	char *scale,
	DDXA_def_value_t *value_p)
{
	return 0;
}
int DDXA_SI_convert_to(char *unit,
	char *scale,
	DDXA_def_value_t *value_p)
{
	return 0;
}
int DDXA_SI_construct_scaled_unit(char *unit,
	char *scale,
	int max_size,
	char *scaled_unit)
{
	return 0;
}
int DDXA_write_start(DDXA_write_info_t *write_info_p,
	FILE *fp,
	bool binary)
{
	return 0;
}
int DDXA_write_C_object(DDXA_write_info_t *write_info_p,
	char *field_name,
	char *def_name,
	void *C_object_p)
{
	return 0;
}
int DDXA_write_stop(DDXA_write_info_t *write_info_p)
{
	return 0;
}

int DDXPTH_get_main_size(char *def_name,
	size_t *main_size_p)
{
	return 0;
}
int DDXAxSERIALIZE_pack(char *def_name,
	void *C_object_p,
	void **buffer_p,
	size_t *buffer_length_p)
{
	return 0;
}
int DDXAxSERIALIZE_full_unpack(char *def_name,
	void **buffer_p,
	size_t *buffer_length_p,
	void **C_object_p)
{
	return 0;
}
int DDXAxSERIALIZE_sub_unpack(char *def_name,
	void **buffer_p,
	size_t *buffer_length_t,
	void *C_object_p)
{
	return 0;
}
int DDXAxSERIALIZE_get_packed_size(char *def_name,
	void *C_object_p,
	size_t *packed_size_p)
{
	return 0;
}
int DDXAxOBJECT_full_create(char *def_name,
	void **C_object_p)
{
	return 0;
}
int DDXAxOBJECT_set(char *def_name,
	char *attribute_type,
	void *C_object_p)
{
	return 0;
}
int DDXAxOBJECT_full_destroy(char *def_name,
	void **C_object_p)
{
	return 0;
}
int DDXAxOBJECT_sub_destroy(char *def_name,
	void *C_object_p)
{
	return 0;
}
int DDXAxOBJECT_clone(char *def_name,
	void *original, void **clone)
{
	return 0;
}
int DDXAxOBJECT_to_string_repr(char *def_name,
	void *C_object_p,
	char *instance_prefix,
	int format,
	size_t max_size,
	char *representation)
{
	return 0;
}
int DDXAxOBJECT_get_string_repr_size(char *def_name,
	void *C_object_p,
	char *instance_prefix,
	int format,
	size_t *size)
{
	return 0;
}
int DDXAxVARARRAY_ensure_length(char *def_name,
	void *varray, //DDXAxVARARRAY_type_t *varray,
	int min_length)
{
	return 0;
}
//int DDXAxVARARRAY_GET_LENGTH(char *def_name
//	AABB_X_varray *varray,
//	int *cur_len);




int ddxaxvararray_get_length_imp(char *def_name, int len)
{
	return 0;
}
int DDXAxOBJECT_sub_create(char *def_name, void *param1)
{
	return 0;
}
int DDXAxOBJECT_sub_clone(char *def_name, void *param1, void *param2)
{
	return 0;
}
int DDXAxVARARRAY_set_length(char *def_name, void *param1, int len)
{
	return 0;
}


