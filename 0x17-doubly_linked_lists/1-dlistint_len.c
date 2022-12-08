#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: the number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
