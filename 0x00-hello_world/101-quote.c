#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Return value is one
 *
 * Return: 0
 */
int main(void)
{
	char data[] = "and that piece of art is useful\* - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", data);
	return (1);
}
