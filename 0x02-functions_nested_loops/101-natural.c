#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 Always (SUCCESS)
 */

int main(void)
{
	
	int sum = 0;
	int i = 0;
	
	while(i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
