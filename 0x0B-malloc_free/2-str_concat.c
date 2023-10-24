#include "main.h"
#include <string.h>
/**
 * str_concat - contains the contents of two strings
 * @s1: first input string
 * @s2: second inpit string
 *
 * Return: pointer to newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int x, y, z;

	if (s1 == NULL)
		s1 = "";

	x = strlen(s1);

	if (s2 == NULL)
		s2 = "";

	y = strlen(s2);

	arr = malloc(sizeof(char) * (x + y + 1));

	if (arr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		arr[z] = s1[z];

	for (z = 0; z < y; z++)
		arr[z + x] = s2[z];

	arr[x + y + 1] = '\0';

	return (arr);
}
