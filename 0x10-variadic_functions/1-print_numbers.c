#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints variable arguments numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator != NULL && (i < n - 1))
				printf("%s", separator);
		}
		va_end(ap);
		printf("\n");
	}
}
