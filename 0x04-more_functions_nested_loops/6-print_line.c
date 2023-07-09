#include "main.h"
/**
 * print_line - draws straight line in terminal
 * @n: inout number of lines
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
