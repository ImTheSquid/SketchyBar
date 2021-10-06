#ifndef GROUP_H_
#define GROUP_H_

#include <_types/_uint32_t.h>

struct group {
  uint32_t num_members;
  struct bar_item** members;
};

struct group* group_create();
void group_init(struct group* group);
void group_set_name(struct group* group, char* _name);
void group_add_item(struct group* group, struct bar_item* item);
void group_destroy(struct group* group);

#endif