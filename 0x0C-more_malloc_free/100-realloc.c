#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: The input string.
 * @old_size: Old size of the string.
 * @new_size: new size of the string.
 *
 * Return: The pointer to the newly allocated memory.
 * If program fails it returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int count;

	old_ptr = (char*) ptr;
	if (ptr == NULL)
		old_ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		free(ptr);
		return (NULL);
	}

	for (count = 0; count < new_size; count++)
		new_ptr[count] = old_ptr[count];

	free(old_ptr);
	return (new_ptr);
}
