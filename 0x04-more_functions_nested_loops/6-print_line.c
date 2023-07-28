#include "main.h"

/**
* print_line - prints a line with _
* @n: number of _
* Return: void
*/

void print_line(int n)
{
	char c = '_';

	while (n > 0)
	{
		_putchar(c);
		n--;
	}

	_putchar('\n');
}
