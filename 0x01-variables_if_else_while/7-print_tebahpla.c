#include <stdio.h>

/**
 * main - Entry point
 * program that prints the lowercase alphabet in reverse
 * Return: 0 Always (SUCCESS)
 *
 */

int main(void)
{
	char start = 'z';
	char end   = 'a';

	while (start >= end)
	{
		putchar(start);
		start--;
	}

	putchar('\n');
	return (0);
}
