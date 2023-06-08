#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 *
 * @n: input number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	return (recursion(n, i));
}

/**
 * recursion - returns the real root
 *
 * @n: input number
 * @i: input number
 * Return: the resulting square root
 */
int recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (recursion(n, i + 1));
}

