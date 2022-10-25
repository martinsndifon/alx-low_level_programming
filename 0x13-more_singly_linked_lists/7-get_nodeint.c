#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: head pointer to the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (index > count)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	
	return (temp);
}
