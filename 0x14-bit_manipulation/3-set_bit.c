#include "main.h"
/**
 * set_bit - sets value of binary to 1
 * @n: input unsigned long int point
 * @index: input unsigned int index
 * Return: 1 if works -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= 1 << index;
	return (1);
}
