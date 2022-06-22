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
	int i;
	
	i = is_prime_number(n, n / 2);
	if (i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
