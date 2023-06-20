#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number to process
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%i, ", j * i);
		}
		printf("\n");
	}
}
