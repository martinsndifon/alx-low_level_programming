#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches an array and returns the index of the first
 * occurence of the value being searched.
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for in the array
 *
 * Return: the index if found and -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
