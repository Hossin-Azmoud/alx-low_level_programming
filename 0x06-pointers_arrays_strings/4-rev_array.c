#include "main.h"

/**
* reverse_array - function that reverses and array.
* @a: pointer to the array to be reversed
* @n: length of the Array
* Return: void
*/
void reverse_array(int *a, int n)
{
	int tmp;
	int end   = n - 1;
	int start = 0;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end]   = tmp;
		end--;
		start++;
	}
}
