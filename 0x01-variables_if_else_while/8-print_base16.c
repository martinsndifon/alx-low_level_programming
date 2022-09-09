#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char ch;
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
