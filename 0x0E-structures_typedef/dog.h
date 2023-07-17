#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
typedef struct dog_t dog;
/**
 * struct dog - a struct that represents a dog.
 * @name: the name of the dawg.
 * @age: the age of the dawg.
 * @owner: the name of the owner of the dawg.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
