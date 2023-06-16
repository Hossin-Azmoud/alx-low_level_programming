
#include <stdio.h>

/**
 * main - Entry point
 * function that prints numbers from 0 to 9
 * Return: 0 Always (SUCCESS)
 *
 */

int main(void)
{
	int start = 0;
	int end   = 10;

	while (start < end)
	{
		putchar(start + '0');
		start++;
	}

	putchar('\n');
	return (0);
}
