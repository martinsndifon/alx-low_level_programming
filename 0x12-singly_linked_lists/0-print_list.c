#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: pointer to the first node in the list
 *
 * Return: number of members in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
