#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: the input string to be copied
 * @dest: the input string to be joined
 *
 * Return: dest if succesful if not 0.
 */
char *_strcat(char *dest, char *src)
{
	int destCount, i;

	destCount = i = 0;

	while (dest[destCount] != '\0')
	{
		destCount++;
	}

	while (src[i] != '\0')
	{
		dest[destCount + i] = src[i]; 
		i++;
	}


	return (dest);
}
