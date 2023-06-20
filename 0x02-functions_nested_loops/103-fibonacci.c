#include <stdio.h>

/**
 * main - Program that prints the first 50 fib numbers.
 * Return: 0 Always (SUCCESS)
 */

int main(void)
{
	unsigned long m = 1;
	unsigned long n = 2;
	unsigned long sum = 0;
	int i = 0;

	while (i < 50)
	{
		if (m % 2 == 0)
		{
			sum += m;		
		}

		if (i < 49)
		{
			n += m;
			m = n - m;
		}

		i++;
	}

	printf("%li\n", sum);
	return (0);
}
