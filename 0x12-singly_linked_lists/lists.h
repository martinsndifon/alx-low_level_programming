#ifndef LISTS_H
#define LISTS_H

struct node
{
	char * str;
	int len;
	struct node * next;
};
typedef struct node list_t;

size_t print_list(const list_t *h);
#endif