#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: amount of memory to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = NULL;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
