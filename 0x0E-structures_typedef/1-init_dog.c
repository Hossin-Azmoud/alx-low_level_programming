#include "dog.h"

/**
* init_dog - a function that initializes a variable of type struct dog
* @d: pointer to the struct that will be initialized
* @name: name of the dog.
* @age: age of the dog.
* @owner: name of the owner of the dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	if (name)
		d->name  = name;

	if (owner)
		d->owner = owner;

	d->age   = age;
}
