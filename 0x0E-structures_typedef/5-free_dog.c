#include "dog.h"

/**
* free_dog - a function that frees a dog struct.
* @d: a pointer to the structure that will be freed
* Return: void always.
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
