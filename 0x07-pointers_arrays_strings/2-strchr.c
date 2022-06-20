#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * @s: pointer to a charater
 * @c: a char
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
