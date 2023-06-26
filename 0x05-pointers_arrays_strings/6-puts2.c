#include "main.h"

/**
* puts2 - a function that prints a string but steps one character.
* @str: pointer to string to be printed.
* Return: Void
*/
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}

