#include "main.h"
#include <string.h>
/**
 * _strlen - returns the lenth of a string
 *
 * @s: the input argument type string
 * Return: number of char , lenth of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
	{
		i++;
	}

	return (i);
}
