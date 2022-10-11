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
	dog_t new_dog;
	dog_t *p = &new_dog;
	dog_t *ptr;

	if (p == NULL)
		return (NULL);

	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;

	ptr = (dog_t *)malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	(*ptr).name = name;
	(*ptr).owner = owner;

	return (p);
}
