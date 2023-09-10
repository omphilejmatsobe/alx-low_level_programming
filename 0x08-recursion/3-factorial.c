#include "main.h"
/**
 * factorial - returns a factorial of a number
 *
 * @n: input number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return n * factorial(n - 1);
}
