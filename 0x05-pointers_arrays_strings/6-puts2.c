#include "main.h"

/**
* puts2 - a function that prints a string but steps one character.
* @str: pointer to string to be printed.
* Return: Void
*/
void puts2(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	for (; *str != '\0' && len > 0; (len -= 2), (str += 2))
		_putchar(*str);

	 _putchar('\n');
}

