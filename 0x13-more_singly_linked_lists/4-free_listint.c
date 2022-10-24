#include "lists.h"

/**
 * free_listint - frees all allocated memory in a linked list
 * @head: pointet to the first node in the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}

	free(head);
	head = NULL;
}
