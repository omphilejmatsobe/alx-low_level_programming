#include "dog.h"
#include "string.h"

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
	if (dog == NULL)
	{
		free(dog);
		free(name);
		free(owner);
		return (NULL);
	}

	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		free(name);
		free(owner);
		return (NULL);
	}

	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(name);
		free(owner);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);
}
