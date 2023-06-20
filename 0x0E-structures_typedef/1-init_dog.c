#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: input struct dog.
 * @name: input char name
 * @age: input float age
 * @owner: input char owner name
 * Return: 0 success.
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

