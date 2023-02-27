#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: input
 * @b: input
 * Return: a,b
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
