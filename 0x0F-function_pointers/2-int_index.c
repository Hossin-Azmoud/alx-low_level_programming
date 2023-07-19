#include "function_pointers.h"

/**
* int_index - a function that searches for an int.
* @array:  input array.
* @cmp: the comparing function.
* @size:   is the size of the array
* Return: Void (ALWAYS)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int it;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (it = 0; it < size; ++it)
	{
		if (cmp(array[it]) != 0)
		{
			return (it);
		}
	}

	return (-1);
}
