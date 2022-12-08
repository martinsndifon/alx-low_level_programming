#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head pointer to the first node in the list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
