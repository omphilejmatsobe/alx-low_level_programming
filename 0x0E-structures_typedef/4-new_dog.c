#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new instance of the struct dog_t.
 * @name: Input string to be passed to the new instance of dog_t.
 * @age: Input float to be passed to the new instance of dog_t.
 * @owner: Input string to be passed to the new instance of dog_t.
 *
 * Return: If success, new instance of dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name, strlen(name));

	dog->age = age;

	dog->owner = malloc(sizeof(owner));
	if (owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner, strlen(owner));

	return (dog);
}

/**
 * _strncpy - Copies a string.
 * @dest: Input destination of the copy.
 * @src: Input string being copied.
 * @n: Input number of max bytes.
 *
 * Return: the copied string.
 */
char *_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
