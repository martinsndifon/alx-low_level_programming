#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: number of bytes
 *
 * Return: NULL if nmemb/size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;
	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;
	return (str);
}
