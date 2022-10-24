#include "lists.h"

/**
 * listint_len - checks for the number of elements in a singly linked list
 * @h: head pointer to the first node in the linked list
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
