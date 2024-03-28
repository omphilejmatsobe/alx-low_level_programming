#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: struct to be printed.
 * 
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: Nil\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		
		if (d->name == NULL)
			printf("Owner: Nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
