#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: string to be printed
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i;

	while (*s[i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*s[i]);
		i--;
	}
	_putchar('\n');
}
