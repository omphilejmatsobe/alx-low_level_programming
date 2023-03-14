#include "main.h"
/**
 * create_array - creates an array of chars, initializes it with a char
 * @size: input
 * @c: input
 *
 * Return: pointer, if it fails return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *cha;
	unsigned int i;

	cha = malloc(size * sizeof(char));

	if (cha == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		cha[i] = c;

	return (cha);
}
