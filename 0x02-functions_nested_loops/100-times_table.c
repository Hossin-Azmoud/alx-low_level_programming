#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number to process
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, next;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			next = (j + 1) * i;
			if (j == n)
			{
				printf("%i\n", i * j);
				continue;
			}
			if (next < 10)
			{
				printf("%i,   ", i * j);
				continue;
			}

			if (next >= 10 && next < 100)
			{
				printf("%i,  ", i * j);
				continue;
			}

			if (next >= 100)
			{
				printf("%i, ", i * j);
				continue;
			}
		}
	}
}
