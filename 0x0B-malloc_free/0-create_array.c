#include "main.h"
/**
 * create_array - creates an array
 * @size: input size of pointer
 * @c: input char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL && arr != 0)
                return (NULL);

	else if (arr == NULL || arr != 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
