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
	int i = 0;

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}