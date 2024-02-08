#include "main.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size to be allocated.
 *
 * Return: Pointer to the newly allocated memory.
 * If the program fails it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	array = malloc(0);

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	return (array);
}
