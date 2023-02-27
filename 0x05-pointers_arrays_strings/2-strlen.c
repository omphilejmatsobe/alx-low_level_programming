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

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
