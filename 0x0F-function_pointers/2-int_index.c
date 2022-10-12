#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to work with
 * @size: size of the array
 * @cmp: pointer to the function to use
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = 0;
		j = (*cmp)(array[i]);
		if (j == 0)
			continue;
		else if (j == 1)
			return (i);
	}
	return (-1);
}
