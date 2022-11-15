#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct pointer
 *
 * @d: entry struct with pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
