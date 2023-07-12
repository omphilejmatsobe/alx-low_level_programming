#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: the copying string
 * @src: the string being copied
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}

	if (*src == '\0')
	{
		dest[i] = '\0';
	}

	return (dest);
}
