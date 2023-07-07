#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two numbers
* @argv: array of argumenets
* @argc: length of argv
* Return: 0 SUCCESS
*/
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%i\n", (a * b));
	return (0);
}
