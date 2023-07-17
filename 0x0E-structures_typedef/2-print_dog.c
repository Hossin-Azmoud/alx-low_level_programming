#include "dog.h"

/**
* print_dog - a function that prints the dawg structure.
* @d: pointer to the struct that will be initialized
* Return: void
*/
void print_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
