#include "main.h"
/**
 *_print_rev_recursion - prints strings in reverse order
 *
 *@s: input pointer to string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s = s + 1;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
