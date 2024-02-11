#ifndef _DOG_
#define _DOG_

#include <stdlib.h>

/**
 * struct dog - Entities of a dog.
 * @name: The name of the dog.
 * @owner: The name of the owner of the dog.
 * @age: The age of the dog.
 *
 * Description: This is a structure to store information about a dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_ */
