#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 * struct node - structure to hold the linked list
 * @str: string member
 * @len: lenght of the string
 * @next: pointer to the next node
 *
 */

struct node
{
	char *str;
	int len;
	struct node *next;
};
typedef struct node list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
