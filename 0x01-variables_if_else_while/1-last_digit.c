#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* (MOODY) */
/**
 * main - Entry point.
 * Function that gets a random number n then logs  some information about it.
 * Return: 0 Always (SUCCESS)
 */
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;

	printf("Last digit of %d is %d ", n, lst);

	if (lst > 5)
	{
		printf("and is greater than 5\n");
		return (0);
	}

	if (lst == 0)
	{
		printf("and is 0\n");
		return (0);
	}

	if (lst < 6)
		printf("and is less than 6 and not 0\n");

	return (0);
}
