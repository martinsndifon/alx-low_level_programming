#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
