#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 *
 * @b: input unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);

	if (num == NULL)
	{
		exit(98);
	}

	return (num);
}
