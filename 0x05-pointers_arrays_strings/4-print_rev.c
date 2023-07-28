#include "main.h"

/**
* print_rev - prints a string in the reversed order.
* @s: string to be printed reversed
* Return: void
*/
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	while (l > 0)
	{
		_putchar(s[l - 1]);
		l--;
	}
	_putchar('\n');
}

