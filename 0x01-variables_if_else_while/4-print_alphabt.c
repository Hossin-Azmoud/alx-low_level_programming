#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * function that prints lowercase letters from { a-z }
 * Return: 0 always (SUCCESS)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}

		letter++;
	}

	putchar('\n');
	return (0);
}