#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a singly linked list
 * @head: pointer to the pointer to the second node in the list
 * @n: structure member
 *
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
