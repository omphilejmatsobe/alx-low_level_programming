#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: Length of s2 to be used.
 * Return: The Pointer to the new string of s1 & s2(to n bits) concatenated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int countOne, countTwo;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	concat = malloc(sizeof(concat) * (strlen(s1) + n) + 1);
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (countOne = 0; countOne < strlen(s1); countOne++)
	{
		concat[countOne] = s1[countOne];
	}

	for (countTwo = 0; countTwo < n; countTwo++)
	{
		concat[countOne + countTwo] = s2[countTwo];
	}

	concat[countOne + countTwo] = '\0';

	return (concat);
}
