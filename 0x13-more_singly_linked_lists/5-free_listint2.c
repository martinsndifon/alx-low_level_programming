#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the first node in the list
 *
 * Return: void
 */

 void free_listint2(listint_t **head)
{
	listint_t *temp1;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	temp1 = *head;

	while (temp1 != NULL)
	{
		listint_t *temp2 = temp1->next;

		free(temp1);
		temp1 = temp2;
	}
	*head = NULL;
}
