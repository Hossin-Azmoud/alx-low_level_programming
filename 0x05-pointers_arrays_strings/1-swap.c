#include "main.h"

/**
* swap_int - a function that swaps the value of two integers.
* @a: Number
* @b: Number
* Return: void;
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = b;
	*b = tmp;
}

