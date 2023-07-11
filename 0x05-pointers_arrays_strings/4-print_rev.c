#include "main.h"
/**
 * print_rev - prints a string in rev
 *
 * @s: input string to be printer
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	s--;

	while (*s != '\0' && i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}

	_putchar('\n');
}
