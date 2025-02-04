#include "main.h"

/*
 *
 *
 *
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for(idx = 0; idx < n; idx++)
		*(s + idx) = b;

	return s;
}
