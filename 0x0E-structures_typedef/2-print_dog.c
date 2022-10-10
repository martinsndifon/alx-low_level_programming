#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the elements of a structure
 * @d: the object to work with
 *
 * Return: (void)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);

	if ((*d).age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", (*d).age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
