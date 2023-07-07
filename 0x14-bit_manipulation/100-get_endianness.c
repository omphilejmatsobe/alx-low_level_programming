#include "main.h"
/**
 * get_endianness - set the value to 1 at a given index
 * Return: 1 if little endian 0
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *b = (char *)&x;

	if (*b)
		return (1);
	return (0);
}
