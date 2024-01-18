#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to be allocated
 * If fails terminate with status falue of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = NULL;
	pointer = malloc(b);
	if (pointer == NULL)
	{
		free(pointer);
		exit(98);
	}

	return (pointer);
}
