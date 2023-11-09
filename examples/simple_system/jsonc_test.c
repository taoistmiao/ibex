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

const char * get_pc(const char * entry, void * value)
{
    json_object *new_obj;
    new_obj = json_tokener_parse(entry);

    char * value_str;
    value_str = (char *) value;

    json_object *pc_val;
    const char * obj_str;
    if (json_object_object_get_ex(new_obj, "pc", &pc_val)){
        obj_str = json_object_to_json_string(pc_val);
		strncpy(value_str, obj_str+1, strlen(obj_str)-2);
        value_str[strlen(obj_str)-2] = '\0';
    }
    json_object_put(new_obj);

    return value_str;
}

const char * get_inst(const char * entry, void * value)
{
    json_object *new_obj;
    new_obj = json_tokener_parse(entry);

    char * value_str;
    value_str = (char *) value;

    json_object *inst_val;
    const char * obj_str;
    if (json_object_object_get_ex(new_obj, "inst", &inst_val)){
        obj_str = json_object_to_json_string(inst_val);
		strncpy(value_str, obj_str+1, strlen(obj_str)-2);
        value_str[strlen(obj_str)-2] = '\0';
    }
    json_object_put(new_obj);

    return value_str;
}


const char * get_target(const char * entry, void * value)
{
    json_object *new_obj;
    new_obj = json_tokener_parse(entry);

    char * value_str;
    value_str = (char *) value;

    json_object *target_val;
    const char * obj_str;
    if (json_object_object_get_ex(new_obj, "target", &target_val)){
        obj_str = json_object_to_json_string(target_val);
		strncpy(value_str, obj_str+1, strlen(obj_str)-2);
        value_str[strlen(obj_str)-2] = '\0';
    }
    json_object_put(new_obj);

    return value_str;
}

const char * get_addr(const char * entry, void * value)
{
    json_object *new_obj;
    new_obj = json_tokener_parse(entry);

    char * value_str;
    value_str = (char *) value;

    json_object *addr_val;
    const char * obj_str;
    if (json_object_object_get_ex(new_obj, "addr", &addr_val)){
        obj_str = json_object_to_json_string(addr_val);
		strncpy(value_str, obj_str+1, strlen(obj_str)-2);
        value_str[strlen(obj_str)-2] = '\0';
    }
    json_object_put(new_obj);

    return value_str;
}

const char * get_data(const char * entry, void * value)
{
    json_object *new_obj;
    new_obj = json_tokener_parse(entry);

    char * value_str;
    value_str = (char *) value;

    json_object *data_val;
    const char * obj_str;
    if (json_object_object_get_ex(new_obj, "data", &data_val)){
        obj_str = json_object_to_json_string(data_val);
		strncpy(value_str, obj_str+1, strlen(obj_str)-2);
        value_str[strlen(obj_str)-2] = '\0';
    }
    json_object_put(new_obj);

    return value_str;
}

void * new_chandle() {
    char * str = (char *) malloc(sizeof(char) * BUFSIZ);
    return (void *) str;
}

void free_chandle(void * str) {
    free(str);
}
