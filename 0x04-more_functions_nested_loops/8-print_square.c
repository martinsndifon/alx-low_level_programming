#include "main.h"

/**
 * print_square - prints #
 *
 * Return: void
 */

void print_diagonal(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i != size)
	{
		while (j != size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
	_putchar('\n');
}
