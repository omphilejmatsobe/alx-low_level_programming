#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *  @str: return string
 */
void _puts(char *str)
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

	_putchar('\n');
}
