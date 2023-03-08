#include "main.h"
/**
 * int _strlen_recursion - return the lengthe of a string
 *
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
