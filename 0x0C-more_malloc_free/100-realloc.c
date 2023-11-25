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

	(void) old_size;
	pointer = malloc(new_size);
	if(pointer == NULL)
		return (NULL);

	copy = (char *) ptr;

	for (x = 0; x < old_size; x++)
	{
		pointer[x] = copy[x];
	}

	free(ptr);
	return (pointer);
}
