#include "main.h"
/**
 * is_prime_number - checks if prime number
 *
 * @n: input number
 * Return: 1 if is a prime number and 0 if not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - checks prime
 *
 * @n: input number
 * @i: input
 * Return: 1 if n is prime 0 if not
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if ((n % i) == 0 && (i > 0))
		return (0);

	return (prime(n, i - 1));
}

