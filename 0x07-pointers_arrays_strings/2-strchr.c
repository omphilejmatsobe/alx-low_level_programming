#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 *
 * Return: Pointer to the first occurrence of the character c in the string s
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int idx;

	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		if (c == *(s + idx))
			return (s + idx);
	}

	return (NULL);
}
