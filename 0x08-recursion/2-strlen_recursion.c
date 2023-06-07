#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 *@s: input
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;

		s = s++;

		i = i + _strlen_recursion(s);
	}

	return (i);
}
