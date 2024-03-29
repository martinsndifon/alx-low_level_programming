#include "lists.h"

/**
 * sum_listint - sums the data (n) in a linked list
 * @head: head pointer to the linked list
 *
 * Return: the sum of all the data in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
