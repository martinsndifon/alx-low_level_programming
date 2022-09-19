#include "main.h"

/**
* puts2 - print one char out of 2 of a string
*@str: string to print
*Return: Nothing
*/

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
