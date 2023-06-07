#include <stdio.h>

/**
 * factorial - returns a factorial of a number
 *
 * @n: input integer
 * Return: the factorial of the input integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
