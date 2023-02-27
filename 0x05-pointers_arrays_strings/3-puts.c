#include "main.h"
/**
 * -puts - prints a string, followed by a new line
 *
 *  @str: input
 *  Return: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
