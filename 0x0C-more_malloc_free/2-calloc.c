#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of the elements of the array
 * @size: the size of the elements of the array
 *
 * Return: the pointer to the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	char *string;
	unsigned int x;

	pointer = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	string = (char *)pointer;
	for (x = 0; x < (nmemb + size); x++)
	{
		string[x] = '0';
	}
	return (string);
}
