#include "main.h"
/**
 *_puts_recursion - prints string followed by new line
 *
 * @s: input
 * return: *s
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
