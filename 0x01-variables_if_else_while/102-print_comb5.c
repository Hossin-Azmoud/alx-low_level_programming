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
	int x = 0, y = 1;

	while (x < 100)
	{
		while (y < 100)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');

			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
		y = x + 1;
	}

	putchar('\n');
	return (0);
}
