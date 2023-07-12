#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: input string to be reversed
 */
void rev_string(char *s)
{
        int i;
	int *p;

        i = 0;

        while (*s != '\0')
        {
		*p = *s;
                p++;
		s++;
                i++;
        }

	i--;
        s--;
	p--;

        while (*s != '\0' && i >= 0)
        {
                s--;
                i--;
        }

	s++;
	i++;

	while (*s != '\0')
	{
		*s = *p;
		s++;
		p--;
	}
}
