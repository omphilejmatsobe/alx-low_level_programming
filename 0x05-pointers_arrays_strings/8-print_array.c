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
	int i = 0;

	while (i < n && *a != '\n')
	{
		printf("%d", *a);
		if (i < n - 1)
		{
			printf(", ");
		}
		a++;
		i++;
	}

	printf("\n");
}
