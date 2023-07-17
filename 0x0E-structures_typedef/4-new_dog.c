#include "dog.h"

/**
* new_dog - a function that creates new dog_t
* @name: name of the dog.
* @age: age of the dog
* @owner: pwner of the dog.
* Return: (new_dog_) a pointer to the new created dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog_ == NULL || name == NULL || owner == NULL || age < 0)
	{
		if (new_dog_ != NULL)
			free(new_dog_);

		return (NULL);
	}

	(new_dog_)->age  = age;
	(new_dog_)->name = malloc(strlen(name) + 1);

	if ((new_dog_)->name == NULL)
	{
		free(new_dog_);
		return (NULL);
	}

	(new_dog_)->owner = malloc(strlen(owner) + 1);

	if ((new_dog_)->owner == NULL)
	{
		free((new_dog_)->name);
		free(new_dog_);
		return (NULL);
	}

	(new_dog_)->name = strcpy((new_dog_)->name, name);
	(new_dog_)->owner = strcpy((new_dog_)->owner, owner);

	return (new_dog_);
}
