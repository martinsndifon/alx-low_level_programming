#include "lists.h"

/**
 * *reverse_listint - reverses a linked list
 * @head: pointer to the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	prevnode = NULL;
	nextnode = (*head);

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = (*head);
		(*head) = nextnode;
	}
	(*head) = prevnode;
	return (*head);
}
