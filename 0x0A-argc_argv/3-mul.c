#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
