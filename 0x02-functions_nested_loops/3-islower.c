#include "main.h"

/**
 * _islower - checks if an entered character is lower case
 * @c - character to check
 * return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
