#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: input void char pointer of memory
 * @old_size: input unsigned int size
 * @new_size: input unsigned int size
 * Return: arr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *arr, *intA;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	intA = ptr;
	for (x = 0; x < old_size; x++)
		*(arr + x) = *(intA + x);
	free(ptr);
	return (arr);
}
