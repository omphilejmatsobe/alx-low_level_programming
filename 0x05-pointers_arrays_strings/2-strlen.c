#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string paramenter
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		length++;

	return (length);
}
