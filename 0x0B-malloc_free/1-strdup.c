#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: 0 if (sucess)
 */
char *_strdup(char *str)
{
	char *string;

	int x, y = 0;

	if (str == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
		x++;

	string = malloc(sizeof(char) * (x + 1));

	if (string == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		string[y] = str[y];

	return (string);
}
