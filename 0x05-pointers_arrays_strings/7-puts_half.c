#include "main.h"
/**
 * puts_half - prints half of an array
 *
 * @str: the input string
 */
void puts_half(char *str)
{
	int i = 0;
	int x = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	x = i;

	while (x > (i / 2))
	{
		str--;
		x--;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
