#include "function_pointers.h"

/**
* array_iterator - a function that executes a function
* given as a parameter on each element of an array.
* @array:  input array.
* @action: action to be performed on each element.
* @size:   is the size of the array
* Return: Void (ALWAYS)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t it;

	if (array == NULL || action == NULL)
		return;

	if (size == 0)
		return;

	for (it = 0; it < size; ++it)
		action(array[it]);
}
