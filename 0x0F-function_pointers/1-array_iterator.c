#include <stdio.h>

/**
 * array_iterator - iterates through an array and
 * passes array element to another function
 * @array: the array to iterate through
 * @size: size of the array
 * @action: function pointer to use
 *
 * Return: (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
