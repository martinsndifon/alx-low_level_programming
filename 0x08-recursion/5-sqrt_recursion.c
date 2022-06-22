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
	int i = 1 / 2;
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
		return (n * _sqrt_recursion(n, i-1));
	}
}
