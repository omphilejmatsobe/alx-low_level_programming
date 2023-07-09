#include "main.h"
#include <math.h>
/**
 * main - finds the prime factore of a number
 *
 * Return: 0 if success
 */
int main(void)
{
	find_prime(612852475143);

	return (0);
}
/**
 * find_prime - finds largets prime factor
 *
 * @num: input number
 */
void find_prime(long num)
{
	long x, i, result;
	int check;


	for (x = 1; x < sqrt(num) * 100; x++)
	{
		if (num % x == 0)
		{
			check = 0;

			for (i = 1; i < x; i++)
			{
				if (x % i == 0)
				{
					check++;
				}
			}

			if (check == 1)
			{
				result = x;
			}
		}
	}

	printf("%ld\n", result);
}
