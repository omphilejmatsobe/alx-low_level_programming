#include "main.h"

/**
 * malloc_checked - Allocates memory to a variable.
 * @b: The input variable to be allcocated memory.
 *
 * Return: Pointer to the newly allocated memory.
 * If the program fails it returns Null.
 */
void *malloc_checked(unsigned int b)
{
	void *new_memory;

	new_memory = malloc(b);
	if (new_memory == NULL)
	{
		free(new_memory);
		exit(98);
	}

	return (new_memory);
}
