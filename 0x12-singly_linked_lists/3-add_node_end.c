#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to pointer
 * @str: string to add to list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *node = malloc(sizeof(*node));
	list_t *tmp;

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		return (*head);
	}

		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		node->next = tmp->next;
		tmp->next = node;

	return (tmp);
}
