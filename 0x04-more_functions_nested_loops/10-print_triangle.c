#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int space, hash, x, y;

	x = 0;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			x++;

			for (space = (size - x); space > 0; space--)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= x; hash++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
