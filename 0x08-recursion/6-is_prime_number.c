#include "main.h"
/**
 * is_prime_number - return 1 if the input is a prime
 * @n: input int
 *
 * Return: 1 if prime, else return 0
 */
int is_prime_number(int n)
{
	float i = 2;

	if ( n <= 1)
		return (0);

	return (_check_prime(n, i));
}
/**
 *
 *
 *
 */
int _check_prime(float x, float y)
{
	if ((x / y) - (int)(x / y) == 0)
		return (0);
	
	if (y > (x / 2))
		return (1);

	return (_check_prime(x, y + 1));
}
