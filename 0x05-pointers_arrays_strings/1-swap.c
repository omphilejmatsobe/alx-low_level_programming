#include "main.h"

/**
 * swap_int - Swaps the values of its parameters.
 *
 * @a: First argument passed by reference.
 * @b: Second argument passed by reference.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int n = *a; /* n stores the value at the address of a */

	*a = *b;
	*b = n;
}
