#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees all memory allocated for struct dog
 * @d: pointer to new_dog
 *
 * Return: (void)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
