#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: 1st input string.
 * @s2: 2ndinput string.
 *
 * Return: the output string of s1 and s2 concatenated, if success.
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int x;

	x = 0;

	arr = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < strlen(s1); x++)
	{
		arr[x] = s1[x]; 
	}

	for (x = 0; x < strlen(s2); x++)
	{
		arr[strlen(s1)+ x] = s2[x];
	}

	if (arr == NULL)
	{
		free(NULL);
		return (NULL);
	}

	arr[strlen(s1) + strlen(s2)] = '\0';

	return (arr);
}
