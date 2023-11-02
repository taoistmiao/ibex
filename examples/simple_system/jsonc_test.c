#include <json-c/json.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern const char * entry_parser(const char * str);
const char * entry_parser(const char * str)
{
	json_object *new_obj;

	new_obj = json_tokener_parse(str);
	printf("new_obj.to_string()=%s\n", json_object_to_json_string(new_obj));

	json_object *pc_val;
	if (json_object_object_get_ex(new_obj, "pc", &pc_val)){
		printf("new_obj.pc=%s\n", json_object_to_json_string(pc_val));
	}
	json_object_put(new_obj);

	return (const char *) json_object_to_json_string(pc_val);
}