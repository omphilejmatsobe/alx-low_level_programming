#include "main.h"
/**
 * puts2 - prints characters in an odd order of indexes
 *
 * @str: string to be printer
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
