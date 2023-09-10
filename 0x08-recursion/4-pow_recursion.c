#include "main.h"
/**
 * _pow_recursion - returns the value a number x raised to a power y
 * @x: the base number
 * @y: the power
 *
 * Return: the value of x raise the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	
	if (y == 0)
		return (1);

	return x * _pow_recursion(x, y - 1);
}
