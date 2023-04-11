#include <stdio.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = size - 1;

	while(left <= right)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++ )
		{
			printf("%ld", i);
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
