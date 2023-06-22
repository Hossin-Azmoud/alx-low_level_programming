#include <math.h>
#include <stdio.h>

/**
 * main - prime factor
 * a program that finds and prints
 * the largest prime factor
 * of the number 612852475143
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int number = 612852475143;

	for (c = (int)sqrt(number); c > 2; c++)
	{
		if (number % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
