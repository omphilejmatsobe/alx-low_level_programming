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

	while (*s != '\0')
	{
		s++;
		i++;
	}

	for ( x = 0; x <= i ; x++)	
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
