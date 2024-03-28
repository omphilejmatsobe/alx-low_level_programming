#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes variables of type struct dog.
 * @d: Input struct to be initialized.
 * @name: Input string for name of struct dog instance to be initialized.
 * @age: Input float for age of struct dog instance to be initialized.
 * @owner: Input string for owner name of struct intance dog to be initialized.
 * Return: None.
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
