#include "main.h"

/**
 * _strchr - locate a character
 *
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (&s[z]);
	}
	return (0);
}
