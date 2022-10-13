#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints variable arguments strings
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *
 * Return: (void)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap, an;

	if (n != 0)
	{
		va_start(ap, n);
		va_start(an, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(an, char *) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(ap, char *));

			if (separator != NULL && (i < n - 1))
				printf("%s", separator);
		}
		va_end(ap);
		va_end(an);
		printf("\n");
	}
}
