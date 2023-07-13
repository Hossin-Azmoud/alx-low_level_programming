#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc
* @b: amount of mem to allocate
* Return: pointer to allocated chunk
*/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	if (b == INT_MAX)
		exit(98);

	pointer = (void *) malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
