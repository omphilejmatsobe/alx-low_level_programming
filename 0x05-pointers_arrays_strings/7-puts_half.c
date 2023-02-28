#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: str
 */
void puts_half(char *str)
{
	int k, r, i;

	i = 0;

	for (k = 0; str[k] != '\0'; k++)
		i++;

	r = (i / 2);

	if ((i % 2) == 1)
		r = ((i + 1) / 2);

	for (k = r; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
