#include "main.h"
/**
 *_puts_recursion - prints string followed by new line
 *
 * @s: input
 * return: *s
 */
void _puts_recursion(char *s)
{
	while(*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
