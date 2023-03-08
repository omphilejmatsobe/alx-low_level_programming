#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *
 *@s: input
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	int o;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
}
