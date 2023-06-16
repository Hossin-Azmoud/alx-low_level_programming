#include <stdio.h>

/**
 * main - Entry point.
 * A function that prints {0-10}
 * Return: 0 Always (SUCCESS)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");
	return (0);
}
