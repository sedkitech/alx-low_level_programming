#include "dog.h"

/**
 * init_dog - initialize dog struct
 * @d: struct dog
 * @name: dog's name
 * @age: dog's name
 * @owner: dog's owner
 * Description: init dog struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
