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
#endif

