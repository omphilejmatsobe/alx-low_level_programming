#include "main.h"
/**
 * _strlen_recursion - returns the lenth of a string
 * @s: the input string to be measured
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	return 1 + _strlen_recursion(s + 1);
}
