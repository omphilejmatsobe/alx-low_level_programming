#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: string argument to the function
 *
 * Return: Nothin.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
