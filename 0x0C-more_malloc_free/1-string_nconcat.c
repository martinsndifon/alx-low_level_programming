#include "main.h"
#include <stdlib.h>


/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: string length of whole or part of s2
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i = 0, j = 0, k, m;

	while (s1 && *(s1 + i) != '\0')
		i++;
	while (s2 && *(s2 + j) != '\0')
		j++;
	k = i + n;
	k++;

	s3 = malloc(k * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	
	for (m = 0; m < i; m++)
		s3[m] = s1[m];
	
	if (n >= j)
	{
		for (m = 0; m < j; m++)
			s3[i + m] = s2[m];
	}
	else
		for (m = 0; m < n; m++)
			s3[i + m] = s2[m];

	s3[k - 1] = '\0';

	return(s3);
}
