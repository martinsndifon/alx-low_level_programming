#include <stdio.h>

/**
 * main - print number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 1)
		printf("%d\n", argc);
	return (0);
}
