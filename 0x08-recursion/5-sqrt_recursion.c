#include "main.h"

/**
 * factorial - returns the factorial of a given  number
 * 
 * @n: int number to find square root
 * 
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
    if (n <= 0)
        return (-1);
    else
        return (_sqrt_recursion(n));
}