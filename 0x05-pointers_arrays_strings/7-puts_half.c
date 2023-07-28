#include "main.h"

/**
* puts_half - a function that prints a half a string
* @str: pointer to string to be printed.
* Return: Void
*/
void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len])
		len++;

	if (len % 2 == 0)
		start = len / 2;

	if (len % 2 != 0)
		start = (len + 1) / 2;

	for (; str[start] != '\0' && start < len; start++)
		_putchar(str[start]);

	 _putchar('\n');
}

