#include "dog.h"

/**
 * new_dog - creates a new structure
 * @name: name of new_dog
 * @age: age of new_dog
 * @owner: owner of new_dog
 *
 * Returns: a pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *ptr = &new_dog;

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;

	return (ptr);
}
