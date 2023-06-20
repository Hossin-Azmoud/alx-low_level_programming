#include "main.h"

/**
 * main - Entry point
 * function a program that prints lowercase alpha letters.
 * Return: 0 Always (SUCCESS)
 */
void print_alphabet(void)
{
	char c = 'a';
	
	while(c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
