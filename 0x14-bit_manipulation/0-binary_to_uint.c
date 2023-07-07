#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: input char pointer to binary char
 * Return: BaseTen number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, baseTen;

	x = baseTen = 0;

	if (b == NULL)
		return (0);

	while (*(b + x) != '\0')
	{
		if (*(b + x) != '0' && *(b + x) != '1')
			return (0);

		baseTen <<= 1;

		if (*(b + x) == '1')
			baseTen ^= 1;
		x++;
	}
	return (baseTen);
}
