#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: the destination of the copy
 * @src: the string being copied
 * @n: number of max bytes
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
