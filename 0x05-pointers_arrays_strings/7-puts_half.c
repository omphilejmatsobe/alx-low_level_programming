#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		count++;

	if (count % 2 != 0)
	{
		i = ((count - 1) / 2);
		i++;
	}
	else
		i = (count / 2);

	for (; i < count; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
