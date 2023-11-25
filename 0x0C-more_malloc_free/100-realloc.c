#include "main.h"

/**
 *
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;

	(void) old_size;
	pointer = malloc(new_size);
	if(pointer == NULL)
		return (NULL);

	pointer = ptr;

	free (ptr);
	return (pointer);
}
