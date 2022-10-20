#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts the number of nodes in a linked list
 * @h: pointer to the linked list
 *
 * Return: the lentgh of linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
