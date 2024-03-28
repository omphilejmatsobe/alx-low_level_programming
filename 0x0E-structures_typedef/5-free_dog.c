#include "dog.h"
/**
 * free_dog - Frees memory of struct dog_t intances.
 * @d: The input struct dog.
 *
 * Return: None
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
