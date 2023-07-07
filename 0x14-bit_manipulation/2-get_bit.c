#include "main.h"
/**
 * get_bit - return the value of a bit in a given index
 * @n: input unsigned long int
 * @index: input unsigned int position of unsigned int
 * Return: bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}

