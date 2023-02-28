#include "main.h"

/**
 * rev_string - reverse a string
 * @s: Input
 * Return: s in reverse
 */

void rev_string(char *s)
{
	char rv = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rv = s[i];
		s[i] = s[counter];
		s[counter] = rv;
	}
}

