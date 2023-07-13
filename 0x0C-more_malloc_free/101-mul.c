#include <stdio.h>
#include <stdlib.h>

/**
 * is_digits - a function that checks if a buffer has only digits.
 * @buffer: buffer that will be tested.
 * Return: 0 if a non-digit was found, 1 otherwise
 */
int is_digits(char *buffer)
{
	int iter = 0;

	while (buffer[iter] != '\0')
	{
		if (!(buffer[iter] >= '0' && buffer[iter] <= '9'))
			return (0);

		iter++;
	}

	return (1);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: count of arguments given to the programs
 * @argv: arguments given to the program.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	char *buff1;
	char *buff2;

	if (argc < 3)
	{
		printf("Error\n");
		return (98);
	}

	buff1 = argv[1];
	buff2 = argv[2];

	if ((is_digits(buff1) == 0) || (is_digits(buff2) == 0))
	{
		printf("Error\n");
		return (98);
	}

	printf("%i\n", atoi(buff1) * atoi(buff2));
	return (0);
}
