#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabet 10 times
 * 
 * return: void
 */

/*int main(void)
{
	print_alphabet_x10();
	return (0);
}*/
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
