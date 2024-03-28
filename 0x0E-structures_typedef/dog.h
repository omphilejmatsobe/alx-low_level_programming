#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct that stores dog object and its attributes.
 * @name: Name of dog.
 * @age: Number of years the dog lived.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - New name for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
