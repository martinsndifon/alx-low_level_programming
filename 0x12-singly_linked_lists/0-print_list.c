#include <stdio.h>
#include "lists.h"

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