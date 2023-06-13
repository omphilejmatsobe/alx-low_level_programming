#include <stdlib.h>
#include "main.h"

/**
 * Count - word counter function
 * @s: string to evaluate
 *
 * Return: word count
 */
int Count(char *s)
{
	int str = x = y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
		    str = 0;

		else if (str == 0)
		{
			str = 1;
			y++;
		}
	}

	return (y);
}

/**
 * **strtow - split string
 *
 * @str: input pointer
 * Return: array
 */

char **strtow(char *str)
{
	char **array, *res;
	int x, y = 0, len = 0, words, chr = 0, a, z;

	words = Count(str);
	if (words == 0)
		return (NULL);
	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (chr)
			{
				res = (char *) malloc(sizeof(char) * (chr  + 1));

				if (res == NULL)
					return (NULL);
				z = x;
				while (a < z)
					*res++ = str[a++];
				*res = '\0';
				array[y] = res - chr;
				y++;
				chr  = 0;
			}
		}
		else if (chr++ == 0)
			a = x;
	}
	array[y] = NULL;

	return (array);
}
