#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int idx;

	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		if (c == *(s + idx))
			return (s + idx);
	}

	return NULL;
}
