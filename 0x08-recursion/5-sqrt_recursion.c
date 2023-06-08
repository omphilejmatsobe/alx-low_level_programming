#include "main.h"

/**
 *_sqrt_recursion - returns a square root
 *
 *@n: input interger
 *Return: the return of the square root
 */
int _sqrt_recursion(int n)
{
	int y = 0, x = 0;
	int z = 0;

	for (x = 0; x <= n; x++)
	{
		if (n == x * x)
		{
			y++;
			z = x;
		}
	}

	if (y == 0)
	{
		return (-1);
	}

	return (z);
}
