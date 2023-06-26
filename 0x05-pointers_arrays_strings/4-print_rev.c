#include "main.h"

/**
* print_rev - prints a string in the reversed order.
* @s: string to be printed reversed
* Return: void
*/
void print_rev(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	
	print_rev(s + 1);
	_putchar(*s);
}

