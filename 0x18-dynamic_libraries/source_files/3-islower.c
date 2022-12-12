#include "main.h"

/**
 * _islower - checks if an entered character is lower case
 * @c: character to check
 * Return: 1 for lower case and 0 for upper case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
