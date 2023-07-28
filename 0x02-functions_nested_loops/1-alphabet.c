#include "main.h"

/**
 * print_alphabet - prints alphabets
 * function a program that prints lowercase alpha letters.
 * Return: 0 Always (SUCCESS)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
