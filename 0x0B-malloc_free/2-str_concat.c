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
	unsigned int x, sizeOne, sizeTwo;

	sizeOne = strlen(s1);
	sizeTwo = strlen(s2);

	x = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL)
	{
		sizeOne = 0;
	}
	else if (s2 == NULL)
	{
		sizeTwo = 0;
	}


	arr = malloc((sizeOne + sizeTwo + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < sizeOne; x++)
	{
		arr[x] = s1[x];
	}

	for (x = 0; x < sizeTwo; x++)
	{
		arr[strlen(s1) + x] = s2[x];
	}

	arr[sizeOne + sizeTwo] = '\0';

	return (arr);
}
