#include <stdio.h>

/**
* main - program that multiplies two numbers
* @argv: array of argumenets
* @argc: length of argv
* Return: 0 SUCCESS
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%i\n", (a * b));

	return (0);
}
