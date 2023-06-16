#include "main.h"
/**
 * _calloc - allocates memory for an array,using malloc
 * @nmemb: input unsigned int
 * @size: input unsigned int size
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str = NULL;
	char *arr;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	arr = (char *)str;
	for (x = 0; x < (nmemb * size); x++)
		*(arr + x) = 0;
	return (arr);
}
