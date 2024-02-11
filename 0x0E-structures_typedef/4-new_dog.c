#include "dog.h"

/**
 * new_dog - Creates a new instance dog of struct dog_t.
 * @name: Input string to be saved in variable name of dog.
 * @age: Input float to be saved in variable age of dog.
 * @owner: Input string tober saved in variable owner of dog.
 *
 * Return: Instance of dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL || name == NULL || owner == NULL)
	{
		free(name);
		free(owner);
		free(dog);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
