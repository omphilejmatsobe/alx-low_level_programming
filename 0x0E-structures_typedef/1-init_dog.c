#include "dog.h"

/**
 * init_dog - Initializes variable of struct dog.
 * @d: Struct dog.
 * @name: Input string to be stored in the name variable of d.
 * @age: Input float to be stored in the age variable of d.
 * @owner: Input string variable to be stored in the owner variable of d.
 *
 * Returns: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
