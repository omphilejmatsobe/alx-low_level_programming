#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores dog object and its attributes
 * @name: name of dog
 * @age: number of years the dog lived
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
