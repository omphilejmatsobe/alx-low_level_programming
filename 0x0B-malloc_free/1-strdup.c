#include "main.h"
/**
 * _strdup - creates a copy of the string given as a parameter
 * @str: the input string
 *
 * Return: pointer to newly allocated space in memory,
 * Null if no success
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int x, y;

	x = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (y = 0; str[y] != '\0'; y++)
	{
		x++;
	}

	arr = malloc(sizeof(char) * (x + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	y = 0;

	while (y < x)
	{
		arr[y] = str[y];
		y++;
	}

	return (arr);
}
