#ifndef DOG_H
#define DOG_H
/**
 * struct dog - list details about a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner fo the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog - rename struct with typedef
 */
typedef struct dog dog_t;

#endif /* DOG_H */