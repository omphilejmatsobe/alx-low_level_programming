#include "main.h"

/**
 *_memcpy - memory copy
 *
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: dest copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 1; x <= y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
