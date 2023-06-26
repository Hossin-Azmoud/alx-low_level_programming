#include "main.h"

/**
* _puts - a function that prints a string
* @str: pointer to string to be printed.
* Return: Void
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

