#include "main.h"

/**
 * print_square - prints #
 *
 * Return: void
 */

void print_diagonal(int size)
{
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i != size)
	{
		_putchar('#');
		i++;
	}

	_putchar('\n');

