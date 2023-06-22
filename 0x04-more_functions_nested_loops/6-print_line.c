#include "main.h"

/**
* mul - multiply two integers.
* @a: number
* @b: number
* Return: a and b multiplied result.
*/

void print_line(int n)
{
	char c = '_';

	while(n > 0)
	{
		_putchar(c);
		n--;
	}

	_putchar('\n');
}
