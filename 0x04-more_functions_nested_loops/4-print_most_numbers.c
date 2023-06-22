#include "main.h"

/**
* print_most_numbers - prints 0 -> 9 except 2 and 4..
* Return: void
*/
void print_most_numbers(void)
{
	int start = 0;

	while (start < 10)
	{
		if (start != 2 && start != 4)
		{
			_putchar(start + '0');
		}

		start++;
	}

	_putchar('\n');
}
