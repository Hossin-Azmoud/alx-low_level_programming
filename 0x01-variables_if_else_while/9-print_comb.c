#include <stdio.h>

/**
 * main - Entry point
 * function a program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0 Always (SUCCESS)
 *
 */

int main(void)
{
	int start = 0;

	while (start < 10)
	{
		putchar(start + '0');

		if (start < 9)
		{
			putchar(',');
			putchar(' ');
		}

		start++;
	}
	putchar('\n');
	return (0);
}
