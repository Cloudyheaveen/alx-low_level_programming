#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: A pointer to struct dog
 * @name: The name to initialize
 * @age: The age to initialize
 * @owner: The owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
