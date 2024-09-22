#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	
	if (size == 0)
	{
		return NULL;
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return s;
}
