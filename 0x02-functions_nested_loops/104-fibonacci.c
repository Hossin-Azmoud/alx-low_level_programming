#include <stdio.h>

/**
 * main - Program that prints the first 50 fib numbers.
 * Return: 0 Always (SUCCESS)
 */

int main(void)
{
	unsigned long m = 1;
	unsigned long n = 2;
	unsigned long limit = 98;
	int i = 0;

	while (i <= limit)
	{
		printf("%lu", m);

		if (i < 49)
		{
			n += m;
			m = n - m;
			printf(", ");
		}

		i++;
	}
	printf("\n");
	return (0);
}
