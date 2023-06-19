#ifndef DOG_
#define DOG_
/**
 * struct dog - struct
 * @name: string name of dog
 * @age: int age
 * @owner: string name owner
 *
 * Description: Information about dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
