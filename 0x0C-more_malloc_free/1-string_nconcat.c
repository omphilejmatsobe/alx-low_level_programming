#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st input string
 * @s2: 2nd input string
 * @n: bytes of s2 to be included in the new string
 *
 * Return: the result of s1 and s2(until n bytes) concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int byteSpace, x, y;

	if (strlen(s2) >= n)
		byteSpace = n;
	else
		byteSpace = strlen(s2);

	pointer = malloc(sizeof(pointer) * (strlen(s1) + byteSpace + 1));
	if (pointer == NULL)
		return (NULL);

	for (x = 0; x < strlen(s1); x++)
		pointer[x] = s1[x];

	for (y = 0; y < byteSpace; y++)
		pointer[x + y] = s2[y];

	pointer[x + y] = '\0';

	return (pointer);
}
