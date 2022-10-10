#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees new_dog
 * @d: pointer to new_dog
 *
 * Return: (void)
 */

void free_dog(dog_t *d)
{
	free(d);
}
