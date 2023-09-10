#include "main.h"

/**
 * is_palindrome -  indicates if a string is a palindrome or not
 * @s: input string
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{

	unsigned int x, count;

	count = 0;

	if (s[0] == '\0')
		return (1);

	for (x = 0; s[x] != '\0'; x++)
	{
		count++;
	}

	count--;

	if (s[0] != '\0' && s[count] != '\0')
        {
                if (s[0] != s[count])
                        return (0);

                if (s[1] == '\0')
                {
                        if (s[0] == s[count])
                                return (1);
                }
        }

        return (1 * is_palindrome(s + 1));
}
