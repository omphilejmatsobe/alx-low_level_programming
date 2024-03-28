#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: Input struct to be printed.
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %p\n", (void *) d->name);
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->name == NULL)
			printf("Owner: %p\n", (void *) d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
