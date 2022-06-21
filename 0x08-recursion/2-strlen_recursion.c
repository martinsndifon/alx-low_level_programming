#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: string to work with
 * 
 * Return: s
 */

int _strlen(char *s)
{
    int i = 0;

    while (*(s + i))
    {
        i++;
    }
    return (i);
}