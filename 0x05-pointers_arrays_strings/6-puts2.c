#include "main.h"
/**
 * puts2 - prints characters in an odd order of indexes
 *
 * @str: string to be printer
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}

		i++;
		str++;
	}

	_putchar('\n');
}
