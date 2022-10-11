#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new structure
 * @name: name of new_dog
 * @age: age of new_dog
 * @owner: owner of new_dog
 *
 * Return: a pointer to new_dog(dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;

	return (ptr);
}
