#include <stdio.h>

/**
 * main - Entry point
 * function that prints numbers from 0 to 9
 * Return: 0 Always (SUCCESS)
 *
 */

int main(void)
{
	int  start = 0;

	while (start <= 16 - 1)
	{
		if (start >= 10)
		{
			putchar(start + 'a' - 10);
		} else
		{
			putchar(start + '0');
		}

		start++;
	}

	putchar('\n');
	return (0);
}
