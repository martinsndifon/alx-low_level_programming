#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);

)

/**
 * op_sub - substracts two integers
 * @a: first int
 * @b: second int
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}


/**
 * op_mod - modulo operator
 * @a: first int
 * @b: second int
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
