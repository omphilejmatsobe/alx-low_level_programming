#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: The input array
 * @n:  The number of elements of the array to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0;i < n && *(a + i) != '\n'; i++)
	{
		printf("%d", *a);
		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
