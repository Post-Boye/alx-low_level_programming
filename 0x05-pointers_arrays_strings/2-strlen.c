#include "main.h"

/**
 * _strlen - Finction that returns the length of a string
 * @s: this is the input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
