#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize variable of type dog
 * @d: pointer to new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
