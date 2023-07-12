#include "main.h"
/**
 * print_array - printsn number of elements of an array
 *
 * @a: input pointer to an array being printed
 * @n: number of elements to be printed
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
