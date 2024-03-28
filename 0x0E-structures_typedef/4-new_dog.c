#include "dog.h"

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
	{
		free(name);
		free(owner);
		free(dog);
		return (NULL);
	}
	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(name);
		free(owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strncpy(dog->name, name, _strlen(name));

	dog->age = age;

	dog->owner = malloc(_strlen(owner) + 1);
	if (owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(name);
		free(owner);
		free(dog);
		return (NULL);
	}
	_strncpy(dog->owner, owner, _strlen(owner));

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
char *_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	dest[x] = '\0';

	return (dest);
}

/**
 * _strlen - Counts the length of a string.
 * @src: Input string.
 *
 * Return: If success the lenth of the string.
 */
unsigned int _strlen(char *src)
{
	unsigned int counter;

	for (counter = 0; src[counter] != '\0'; counter++)
		;

	return (counter);
}
