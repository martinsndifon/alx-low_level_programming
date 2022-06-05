#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int m;
	char ch;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
