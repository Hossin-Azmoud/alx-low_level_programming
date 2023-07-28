#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 time
 * Return: 0 Always (SUCCESS)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
