#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: value input
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i != n)
	{
		_putchar(' ');
		i++;
	}
	_putchar('\\');
	_putchar('\n');
}
