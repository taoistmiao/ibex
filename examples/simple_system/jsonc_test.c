#include <json-c/json.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// extern const char * entry_parser(const char * str);
#include "Vibex_simple_system__Dpi.h"
// const char * entry_parser(const char * str)
// {
// 	json_object *new_obj;

// 	new_obj = json_tokener_parse(str);
// 	printf("new_obj.to_string()=%s\n", json_object_to_json_string(new_obj));
// 	// char * new_obj_str;
// 	// strcpy(new_obj_str, json_object_to_json_string(new_obj));


// 	json_object *pc_val;
// 	if (json_object_object_get_ex(new_obj, "pc", &pc_val)){
// 		printf("new_obj.pc=%s\n", json_object_to_json_string(pc_val));
// 	}
// 	// char * pc_val_str;
// 	// strcpy(pc_val_str, json_object_to_json_string(pc_val));
// 	json_object_put(new_obj);

// 	return "test";
// }

const char * entry_parser(const char * entry, void * value)
{
	json_object *new_obj;
	new_obj = json_tokener_parse(entry);
	printf("new_obj.to_string()=%s\n", json_object_to_json_string(new_obj));
	// char * new_obj_str;
	// strcpy(new_obj_str, json_object_to_json_string(new_obj));


	json_object *pc_val;
	if (json_object_object_get_ex(new_obj, "pc", &pc_val)){
		printf("new_obj.pc=%s\n", json_object_to_json_string(pc_val));
	}
	// char * pc_val_str;
	strcpy((char *) value, json_object_to_json_string(pc_val));
	json_object_put(new_obj);

	return (const char *) value;
}

void * new_chandle() {
	char * str = (char *) malloc(sizeof(char) * BUFSIZ);
	return (void *) str;
}

void free_chandle(void * str) {
	free(str);
}
