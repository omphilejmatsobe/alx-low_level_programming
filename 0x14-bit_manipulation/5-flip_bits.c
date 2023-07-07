#include "main.h"
/**
 * flip_bits - Returns the number of bits  needed to be flipped
 * @n: input unsigned long int pointer
 * @m: input unsigned long int position of unit
 * Return: the flipped bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int U;
	unsigned int b;

	U = n ^ m;
	b = 0;

	while (U > 0)
	{
		if ((U & 1) != 0)
			b++;
		U = U >> 1;
	}
	return (b);
}
