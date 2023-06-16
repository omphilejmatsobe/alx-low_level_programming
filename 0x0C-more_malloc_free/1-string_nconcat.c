#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: input pointer
 * Return: s
 */
int _strlen(char *s)
{

	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: input int pointer to char
 * @s2: input int pointer to char
 * @n: type unsigned int
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	z = (unsigned int)_strlen(s1);
	str = malloc((z + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (x = 0, y = 0; x < (z + n); x++)
	{
		if (x < z)
			*(str + x) = *(s1 + x);
		else
		{
			*(str + x) = *(s2 + y);
			y++;
		}
	}
	*(str + x) = '\0';

	return (str);
}

