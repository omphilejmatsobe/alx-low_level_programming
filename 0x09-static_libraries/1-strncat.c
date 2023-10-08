#include "main.h"
/**
 * *_strncat - concatenates two strings
 *
 * @dest: Input string
 * @src: Input string
 * @n: Input integer
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		x++;
	}

	dest[y] = '\0';
	return (dest);
}
