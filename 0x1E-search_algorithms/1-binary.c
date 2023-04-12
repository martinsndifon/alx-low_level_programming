#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a
 * binary search algorithm
 * @array: pointer to first element of array to seach
 * @size: the size of the array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, left = 0, right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");

			if (i == right)
				printf("\n");
		}
		mid = (left + right) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
