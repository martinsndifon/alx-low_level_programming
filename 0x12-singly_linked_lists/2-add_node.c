#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of the list
 * @head: pointer to the first node in the list
 * @str: string to add to list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (*head);
}
