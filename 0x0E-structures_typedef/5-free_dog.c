#include "dog.h"

/**
 * free_dog - Frees the passed on struct.
 * @d: Input strct dog_t to be freed.
 *
 * Return: Nothing.
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
