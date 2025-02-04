#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: memory where is stored
 *@b: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		*(s + idx) = b;

	return (s);
}
