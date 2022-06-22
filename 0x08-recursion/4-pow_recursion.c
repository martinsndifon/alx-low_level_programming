#include "main.h"

/**
 * _pow_recursion - returns the factorial of a given  number
 * 
 * @x: int value
 * @y: integer power
 * 
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    else
    return (_pow_recursion(x,y));
}