#include "main.h"
/**
 * print_line - draws straight line in terminal
 * @n: inout number of lines
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
