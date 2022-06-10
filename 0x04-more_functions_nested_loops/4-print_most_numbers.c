#include "main.h"

/**
 * print_most_numbers - A tests function
 * Return: most numbers
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 32 && i != 34)

			_putchar(i);
	}
	_putchar(10);
}
