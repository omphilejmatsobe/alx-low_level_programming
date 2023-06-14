#include "main.h"

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: input pointer to string.
 * @s2: input pointer to strin
 * Return: concarenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len;
	unsigned int u, x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;

	len = x + y + 1;
	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
	{
		str[z] = s1[z];
	}
	for (u = 0; u < y; z++, u++)
	{
		str[z] = s2[u];
	}
	str[len] = s2[u];
	return (str);
}
