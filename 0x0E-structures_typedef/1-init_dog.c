#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to variable struct dog to ne initialized
 * @name: pointer to the name of dog to initialize
 * @age: age of dog to initialize
 * @owner: pointer to the name of owner of dog to be initialized
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
