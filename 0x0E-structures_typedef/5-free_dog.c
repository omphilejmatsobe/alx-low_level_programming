#include "dog.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * free_dog - Free dogs.
 * @d: input pointer struct to data.
 * Return: 0 success.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

