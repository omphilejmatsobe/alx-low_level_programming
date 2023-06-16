#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: type unsigned int
 * @size: type unsigned int size of elements
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str = NULL;
	char *arr;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (str);

	arr = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	arr = (char *)str;
	for (x = 0; x < (nmemb * size); x++)
		*(arr + x) = 0;
	return (arr);
}
