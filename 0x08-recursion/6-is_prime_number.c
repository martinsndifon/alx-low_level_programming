#include "main.h"

/**
 * is_prime_number - checks for prime number
 *
 * @n: int number to work with
 *
 * Return: 1 if n is a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	int i, j = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			j++;
		}
	}
	if (j == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
