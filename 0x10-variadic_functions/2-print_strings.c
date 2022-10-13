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
	char *str;
	unsigned int i;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (separator != NULL && (i < n - 1))
				printf("%s", separator);
		}
		va_end(ap);
		printf("\n");
	}
}
