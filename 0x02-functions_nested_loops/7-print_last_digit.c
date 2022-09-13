#include "main.h"

/**
 * print_last_digit - Entry point
 * @d: the integer to check
 * Return: 0
 */
int print_last_digit(int n)
{
	int m;
	if (n < 0)
	{
		n = n * -1;
	}
	m = n % 10;
	_putchar(m + '0');
	return (m);
}
