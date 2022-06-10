#include "main.h"

/**
 * print_number - prints an integer with _putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int n;

	if (n < 0)
	{
		_putchar('-%d', n);
	}
	else
	{
		_putchar('%d', n)
	}
		
	_putchar("\n")
}
