#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize struct dog
 *
 * @d: argument that passes the struct
 * @name: pass name of the dog
 * @age: pass age of the dog
 * @owner: pass owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
