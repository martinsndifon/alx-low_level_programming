#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to the head node of the linked list
 * @n: value to insert into the linked list
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp, *tail;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(*newnode));

	if (newnode == NULL)
		return (NULL);
	temp = *head;

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}

	while (temp != NULL)
	{
		tail = temp;
		temp = temp->next;
	}
	tail->next = newnode;
	newnode->prev = tail;

	return (*head);
}

