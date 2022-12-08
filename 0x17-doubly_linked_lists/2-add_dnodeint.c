#include "lists.h"
#include <stdio.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(*newnode));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	
	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}

	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;

	return (*head);
}
