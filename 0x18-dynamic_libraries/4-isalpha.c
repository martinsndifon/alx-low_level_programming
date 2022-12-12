#include "main.h"

/**
 * _isalpha - checks if an entered character is an alphabet
 * @c: character to check
 * Return: 1 for alphabet and 0 for other characters
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
