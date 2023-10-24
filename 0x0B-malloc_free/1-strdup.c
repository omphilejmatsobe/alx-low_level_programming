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

	x = sizeof(str);
	arr = malloc(x);
	for (y = 0; y < x; y++)
	{
		arr[y] = str[y];
	}

	return (arr);
}
