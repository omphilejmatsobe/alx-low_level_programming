#ifndef _DOG_
#define _DOG_

#include <stdlib.h>
#include <stdio.h>

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_ */
