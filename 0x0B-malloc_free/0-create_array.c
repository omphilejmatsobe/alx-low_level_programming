#include "main.h"
/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(size * sizeof(char));

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	
	return (arr);
}
