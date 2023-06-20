#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function that prints a struct dog.
 * @d: input pointer of struct for dog.
 * Return: 0 success.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
