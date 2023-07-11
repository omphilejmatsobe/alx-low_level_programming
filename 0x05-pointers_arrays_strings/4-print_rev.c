#include "main.h"
/**
 * print_rev - prints a string in rev
 *
 * @s: input string to be printer
 */
void print_rev(char *s)
{
	int i, x;

	i = x = 0;

	if (*s == '\0')
	{
		_putchar(*s);
	}

	while (*s != '\0')
	{
		s++;
		i++;
	}

	for (x = 0; x <= i; x++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
