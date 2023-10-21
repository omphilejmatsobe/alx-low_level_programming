#include "main.h"
/**
 * create_array - makes an array of a specific size
 * @size: size of the array
 * @c: chracter to initialize the array with
 *
 * Return: the array if successful, Null if not 
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return(arr);
}
