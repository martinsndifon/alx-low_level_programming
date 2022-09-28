#include "main.h"

/**
 * _strlen_recursion - returns lenght of a string
 * @s: string to work with
 *
 * Return: s
 */

int _strlen_recursion(char *s)
{
	static int i = 0;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
