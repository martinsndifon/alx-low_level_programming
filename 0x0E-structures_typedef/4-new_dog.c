#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to work with
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the null byte to the buffer pointed to by dest
 * @dest: pointer to the buffer to save copied string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new structure
 * @name: name of new_dog
 * @age: age of new_dog
 * @owner: owner of new_dog
 *
 * Return: a pointer to new_dog on success or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	(*new_dog).name = malloc(sizeof(char) * (len1 + 1));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	(*new_dog).owner = malloc(sizeof(char) * (len2 + 1));
	if ((*new_dog).owner == NULL)
	{
		free(new_dog);
		free((*new_dog).name);
		return (NULL);
	}

	_strcpy((*new_dog).name, name);
	_strcpy((*new_dog).owner, owner);
	(*new_dog).age = age;

	return (new_dog);
}
