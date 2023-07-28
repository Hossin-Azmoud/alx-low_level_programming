#include <stdio.h>
#include <stdlib.h>
/**
 * is_digits - a function that check if a buffer has only digits.
 * @buffer: the sequence that will be tested
 * Return: 1 if true, 0 if not.
 */

int is_digits(char *buffer)
{
	int it;

	for (it = 0; buffer[it] != '\0'; it++)
	{
		if (buffer[it] >= '0' && buffer[it] <= '9')
			continue;

		return (0);
	}

	return (1);
}

/**
* main - program that sums the arguments
* @argv: array of arguments
* @argc: length of argv
* Return: 0 SUCCESS
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int it;

	for (it = 1; it < argc; it++)
	{
		if (is_digits(argv[it]))
		{
			sum += atoi(argv[it]);
			continue;
		}

		printf("Error\n");
		return (1);
	}

	printf("%i\n", sum);
	return (0);
}
