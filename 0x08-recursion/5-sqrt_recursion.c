#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int number to find square root
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
