#include "lists.h"

/**
 * *insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head pointer to the linked list
 * @idx: the index of the node, starting at 0
 * @n: node to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, i = 0;
	listint_t *temp, *newnode;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = (*head);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx >= count)
		return (NULL);

	temp = (*head);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;

	if (idx == 0)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return (*head);
	}
	else
	{
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (temp);
}
