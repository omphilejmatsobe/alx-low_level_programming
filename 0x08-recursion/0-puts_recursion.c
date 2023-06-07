#include "main.h"
/**
 *_puts_recursion - prints string followed by new line
 *
 * @s: input pointer of string
 * return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);

		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
