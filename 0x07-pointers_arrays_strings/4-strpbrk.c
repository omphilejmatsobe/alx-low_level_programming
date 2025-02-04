#include "main.h"

/**
 * _strpbrk - Function taht searches a string for any of a set of byte
 * @s: Memory area to be checked
 * @accept: Source
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int idx;
	unsigned int internalIdx;

	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		for (internalIdx = 0; *(accept + internalIdx) != '\0'; internalIdx++)
		{
			if (*(s + idx) == *(accept + internalIdx))
				return (s + idx);
		}
	}

	return (NULL);
}
