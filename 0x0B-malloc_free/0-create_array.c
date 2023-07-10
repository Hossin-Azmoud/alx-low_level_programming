#include "main.h"

/**
* create_array - a function that creates an array of chars.
* and initializes it with a specific char.
* @size: size of the char array that will be created.
* @c: the char that will be used to initialize the array.
* Return: (char *)
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int it;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (it = 0; it < size; it++)
		ptr[it] = c;

	return (ptr);
}

