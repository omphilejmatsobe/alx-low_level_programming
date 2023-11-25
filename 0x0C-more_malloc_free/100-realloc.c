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
		return (ptr);

	if (ptr == NULL)
		return (NULL);


	copy = (char *) ptr;

	for (x = 0; x < sizeof(ptr); x++)
	{
		pointer[x] = copy[x];
	}

	free(ptr);
	return (pointer);
}
