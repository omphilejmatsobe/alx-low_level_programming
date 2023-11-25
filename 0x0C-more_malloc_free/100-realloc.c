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

	pointer = malloc(new_size);
	if(pointer == NULL)
		return (NULL);

	if (old_size == new_size)
	{
		free (pointer);
		return (ptr);
	}

	if (ptr == NULL)
	{
		free(pointer);
		return (NULL);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	copy =  ptr;

	for (x = 0; x < sizeof(ptr); x++)
	{
		pointer[x] = copy[x];
	}

	free(ptr);
	return (pointer);
}
