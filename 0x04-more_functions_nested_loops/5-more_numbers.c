#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
*/
void more_numbers(void)
{
	int start;
	int it    = 0;
	int limit = 15;

	while (it < 10)
	{
		start = 0;
		while (start < limit)
		{
			if (start > 9)
			{
				_putchar(((start / 10) % 10) + '0');
				_putchar((start % 10) + '0');

			} else
			{
				_putchar(start + '0');
			}

			start++;
		}

		_putchar('\n');
		it++;
	}
}
