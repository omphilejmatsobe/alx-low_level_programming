#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First input string
 * @s2: Second input string
 * @n: First n bits of s2 to be used
 *
 * Return: The new string of s1 and s2(to n bits) concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int x, i;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat = malloc(sizeof(*concat) * (sizeof(s1) + sizeof(s2) + 1));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0; i < sizeof(s1); i++)
		concat[n] = s1[n];

	for (x = 0; x < n && n <= sizeof(s2); x++)
		concat[i + x] = s2[x];

	concat[i + x] = '\0';

	return (concat);
}
