#include "main.h"
/**
 * clear_bit - set the value of a bit to 1
 * @n: inout unsigned long int pointer
 * @index: input unsigned int position of uint index
 * Return: 1 if works -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;

	*n &= ~(mask);

	return (1);
}
