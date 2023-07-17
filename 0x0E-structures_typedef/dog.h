#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog_t - a struct that represents a dog.
 * @name: the name of the dawg.
 * @age: the age of the dawg.
 * @owner: the name of the owner of the dawg.
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(dog_t *d);
void init_dog(dog_t *d, char *name, float age, char *owner);
#endif /* DOG_H */
