#include <stdio.h>
#include <stdlib.h>

/**
* main - program that checks how much coins we need to give change
* @argv: array of arguments
* @argc: length of argv
* Return: 0 SUCCESS
*/
int main(int argc, char *argv[])
{
	int coins[] = { 25, 10, 5, 2, 1 };
	int num     = 0;
	int count   = 0;
	int it;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (1);
	}

	for (it = 0; it < 5; it++)
	{
		count += num / coins[it];
		num   %= coins[it];
	}
	printf("%i\n", count);
	return (0);
}
