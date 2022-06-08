#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints to 98
 * @n: integer 
 * Return: 0
 */

void print_to_98(int n)
{
	int i;
			
	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
																if (i == 0)
																	_putchar('0');
																_putchar(44);
																_putchar(32);
																_putchar(i + '0');
															}
	}
	else if (n > 98)
	{
		for (i = n; 97 < n; i--)
		{
																if (i == 0)
																	_putchar('0');
																_putchar(44);
																_putchar(32);
																_putchar(i + '0');
															}
														}

}
