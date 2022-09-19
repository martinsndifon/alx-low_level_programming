#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int j = 0, i = 0;
	char str[100];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		s[i] = str[j];
		j++;
		i--;
	}
}
