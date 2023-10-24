#include "main.h"
/**
 * create_array - creates an array and initializes with c
 * @size: the size of the array
 * @c: the data used to initialize the array
 *
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}

	return (arr);
}
