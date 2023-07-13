#include "main.h"

/**
* array_range - function that creates an array of integers.
* @min: min bound
* @max: max bound
* Return: the pointer to the newly created array
*/
int  *array_range(int min, int max)
{
	int *range;
	int iter;
	int sz;

	if (min > max)
		return (NULL);

	sz    = (max - min) + 1;
	range = (int *) malloc(sz * sizeof(int));

	if (range == NULL)
		return (NULL);

	for (iter = 0; iter < sz ; ++iter)
		range[iter] = (min + iter);

	return (range);
}
