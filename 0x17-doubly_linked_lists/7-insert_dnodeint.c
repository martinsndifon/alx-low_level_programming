#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a node at index in a doubly linkedlist
 * @h: head of the linked list
 * @idx: index to be inserted at
 * @n: node to be inserted
 *
 * Return: head of the modified linkedlist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (!temp || !temp->next)
			return (NULL);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(*node));

	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->prev = temp;
	node->next = temp->next;
	temp->next->prev = node;
	temp->next = node;

	return (node);
}
