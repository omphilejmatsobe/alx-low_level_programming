#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: input
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	int r = x;
	int k;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	else if ( y > 0)
	{
		x = k * x;
		y = y - 1;
		_pow_recursion(x, y);
	}

	return (x);
}
