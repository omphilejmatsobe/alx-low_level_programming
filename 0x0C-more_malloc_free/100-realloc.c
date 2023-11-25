#include "main.h"

/**
 *
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer, *copy;
	unsigned int x;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		free(ptr);
		pointer = malloc(new_size);
		return (pointer);

	}


	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	pointer = malloc(new_size);
	if (pointer == NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy =  ptr;

	for (x = 0; x < old_size; x++)
	{
		pointer[x] = copy[x];
	}


	free(ptr);
	return (pointer);
}
