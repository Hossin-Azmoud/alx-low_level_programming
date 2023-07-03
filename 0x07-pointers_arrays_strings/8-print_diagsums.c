#include "main.h"

/* MOODY */
/**
* print_diagsums - function that prints the sum of the two diagonals
* of a square matrix of integers.
* @a: Array
* @size: size of the array
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int left = 0, right = 0, i;

	for (i = 0; i < size; i++)
	{
		left  += *(a + i * size + i);
		right += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", left, right);
}
