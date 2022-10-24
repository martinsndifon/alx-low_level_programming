#include "lists.h"

/**
 * print_listint - prints all the elements of a singly linked list
 * @h: head pointer to the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
