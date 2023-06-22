#include "main.h"

/**
* print_numbers - prints 0 -> 9
* Return: void
*/
void print_numbers(void)
{
	int start = 0;

	while (start < 10)
	{
		_putchar(start + '0');
		start++;
	}

	_putchar('\n');
}
