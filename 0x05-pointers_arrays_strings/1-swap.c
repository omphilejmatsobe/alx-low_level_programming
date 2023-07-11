#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: first input argument type int
 * @b: second input argument type int
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
