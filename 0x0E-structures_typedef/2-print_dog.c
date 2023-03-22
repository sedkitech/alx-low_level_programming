#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog struct
 * @d: struct of dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
