#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at index
 * @head: pointer to the head node
 * @index: the index of the node to return, starting from 0
 *
 * Return: the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
