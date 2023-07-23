#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @*: input pointer
 *
 * Return: change string
 */
char *string_toupper(char *a)
{
	int x, y;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 97 && a[x] <= 122)
		{
			y = 122 - a[x];

			a[x] = 90 - y;
		}
	}

	return (a);
}
