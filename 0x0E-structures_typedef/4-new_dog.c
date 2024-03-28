#include "dog.h"
/**
 *
 *
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
	{
		free(name);
		free(owner);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
