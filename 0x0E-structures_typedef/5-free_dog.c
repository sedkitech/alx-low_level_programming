#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a dog memory
 * @d: pointer to a struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;


	free(d);
}
