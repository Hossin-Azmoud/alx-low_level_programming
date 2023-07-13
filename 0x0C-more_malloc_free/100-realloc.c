#include "main.h"
#define MIN(a, b) ((a > b) ? b : a)

/**
 * _realloc - a function that reallocates memory for an array.
 * @ptr: pointer to the old chunk of memory
 * @old_size: old size of the previously alloc'd memory
 * @new_size: new size that will be alloc'd for the old chunk.
 * Return: (void *) pointer to the new allocated chunk.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int iter;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	if (old_size == 0 || ptr == NULL)
		return (new);

	for (iter = 0; iter < MIN(new_size, old_size); ++iter)
		((char *)(new))[iter] = ((char *)(ptr))[iter];

	free(ptr);
	return (new);
}
