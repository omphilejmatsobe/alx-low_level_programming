#include "main.h"
/**
 * _strncat - concatenates two string
 *
 * @dest: input string that is being joined
 * @src: input string to be copied
 * @n: input string byte number
 *
 * Return: the linked string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destCount, x;

	destCount = x = 0;

	while (dest[destCount] != '\0')
	{
		destCount++;
	}

	while (src[x] != '\0' && x < n)
	{
		dest[destCount + x] = src[x];
		x++;
	}

	return (dest);
}
