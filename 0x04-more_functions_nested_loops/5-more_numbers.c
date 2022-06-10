#include "main.h"

/**
 * more_numbers - A tests function
 * Return: void
 */

void more_numbers(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar(10);
	}
}
