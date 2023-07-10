#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * print_number - prints int with putchar
 * @n: int to be printed
 */
void print_number(int n)
{
	int x, num, _int, pwr, i;
	int c, ctr = 0;

	c = n;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}

	if ( c == 0)
	{
		ctr = 1;
	}
	while (c != 0)
	{
		c = c / 10;
		ctr++;
	}


	for ( x = 0; x < ctr; x++)
	{
		pwr = 1;
		for (i = 1; i < ctr - x; i++)
		{
			pwr = pwr * 10;
		}
		
		num = n % pwr;
		_int = (n - num) / pwr;
		n = num;

		_putchar(48 + _int);
	}
}
