#include "main.h"

/**
 * print_last_digit - Entry point
 * @d: the integer to check
 * Return: 0
 */
int print_last_digit(int d)
{
	int a;

	if (d < 0)
		d = -d;
	a = d % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
