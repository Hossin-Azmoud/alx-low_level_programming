#include <stdio.h>

/**
 * main - Entry point
 * function that prints base16 numbers {0-f} 
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
