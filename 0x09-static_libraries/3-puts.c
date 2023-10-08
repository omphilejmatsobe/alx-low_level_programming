#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *  @str: return string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
