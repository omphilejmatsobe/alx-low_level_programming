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
	char *array;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (count = 0; count < (size * nmemb); count++)
		array[count] = 0;

	return (array);
}
