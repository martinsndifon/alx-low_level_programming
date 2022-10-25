#include "lists.h"

/**
 * delete_nodeint_at_index -  delete node at a given position.
 * @head: head pointer to the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: the address of the new node, or NULL if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	listint_t *temp, *nextnode;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = (*head);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (index >= count)
		return (-1);

	temp = (*head);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			i++;
		}
		nextnode = temp->next;
		temp->next = nextnode->next;
		free(nextnode);
	}
	return (1);
}
