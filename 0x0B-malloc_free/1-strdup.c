#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated space of a copy of the string
 * @str: the string to be copied
 *
 * Return: the new copy of the string , if sucess. Null if it fails.
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int x;

	if (str == NULL)
	{
		return (NULL);
	}

	arr = malloc((strlen(str) + 1) * sizeof(char));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < strlen(str); x++)
	{
		arr[x] = str[x];
	}

	arr[x] = '\0';

	return (arr);
}
