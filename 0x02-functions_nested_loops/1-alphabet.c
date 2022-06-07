#include "main.h"

/**
 * main - using _putchar
 *
 * Return: 0
 */

int _putchar(char c);

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123;  i++)
		_putchar(i);

	_putchar(10);
}
