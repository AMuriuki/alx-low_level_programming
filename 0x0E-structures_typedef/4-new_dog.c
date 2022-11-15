#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - create a new dog
 *
 * @name: pass name of the dog
 * @age: pass age of the dog
 * @owner: pass owner of the dog
 *
 * Return: NULL of function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
