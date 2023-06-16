#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* (MOODY) */

/**
 * main - Entry point
 * function that gets a random value n, then prints information about it...
 * Return: 0 SUCCESS
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		printf("%d is zero", n);
	}

	printf("\n");
	return (0);
}
