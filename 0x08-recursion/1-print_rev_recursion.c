#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
