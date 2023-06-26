#include "main.h"

/**
* print_array - a function that prints an int Array
* @a: pointer to array that should be printed.
* @n: the amount of elements to print.
* Return: Void
*/
void print_array(int *a, int n)
{
	int it = 0;

	while (a[it] && n > 0)
	{
		printf("%d", a[it]);
		it++;
		n--;

		if (a[it] && n > 0)
			printf(", ");
	}

	printf("\n");
}
}

