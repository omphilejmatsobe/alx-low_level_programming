#include "main.h"
#include <string.h>

/**
 * is_palindrome -  indicates if a string is a palindrome or not
 * @s: input string
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{

	unsigned int count;

	count = strlen(s);

	if (s[0] == '\0')
		return (1);

	return (_palindrome(s, count - 1));
}
/**
 * _palindrome - checks if theres a palindrome
 * @s: input string
 * @count: input int string length
 *
 * Return: 1 if palindrome and 0 if not
 */
int _palindrome(char *s, int count)
{
	if (s[0] != s[count])
	{
		return (0);
	}

	if (s[0 + 1] == '\0')
	{
		if (s[0] == s[count])
		{
			return (1);
		}
	}

	return (1 * _palindrome(s + 1, count - 2));
}
