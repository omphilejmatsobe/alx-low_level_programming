#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: input
 * Return: s
 */
int _strlen(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen(s + 1);
	}

	return (i);
}
