#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - struct of a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: elements of a dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif