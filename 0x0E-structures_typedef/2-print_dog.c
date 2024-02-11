#include "dog.h"

/**
 * print_dog - Prints the element of struct d.
 * @d: Input struct d.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %p\n", (void *) d->name);
		else
			printf("Name: %s\n",d->name);

		printf("Age: %f\n", d->age);

		if (d->name == NULL)
			printf("Owner: %p\n", (void *) d->owner);
		else
			printf("Owner: %s\n",d->owner);
	}
}
