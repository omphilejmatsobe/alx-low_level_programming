#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the new memory, if success, else returns NULL
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
