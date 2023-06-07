#include "main.h"
/**
 *_puts_recursion - prints string followed by new line
 *
 * @s: input
 * return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s != NULL)
	{
		_putchar(*s);
		_puts_recursion(*s++);
	}
	else
		_putchar('\n');
}
