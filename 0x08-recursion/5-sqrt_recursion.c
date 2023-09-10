#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number x
 * @n: the input int xx
 *
 * Return: the square root of x
 */
int _sqrt_recursion(int n)
{

	unsigned int x = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_root(n, x));
}
/**
 * _root - calculated the square of a number
 * @n: the number to compare
 * @x: the base number
 *
 * Return: the number equal to the square root of n
 */
int _root(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);


	return (_root(n, x + 1));
}
