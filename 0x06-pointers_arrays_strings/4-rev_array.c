#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int i, x, halfN;

	halfN = (int) n / 2;

	for (i = 0; i < halfN; i++)
	{
		x = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = x;
	}
}
