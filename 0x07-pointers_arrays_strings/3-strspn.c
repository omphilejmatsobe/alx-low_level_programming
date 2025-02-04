#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int idx;
	unsigned int internalIdx;
	unsigned int count = 0;

	for (idx = 0; *(s + idx) != '\0' && *(s + idx) != 32; idx++)
	{
		for (internalIdx = 0; *(accept + internalIdx) != '\0'; internalIdx++)
		{
			if (*(s + idx) == *(accept + internalIdx))
				count++;
		}
	}

	return (count);
}
