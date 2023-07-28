#include "main.h"

/**
* print_square - a func that prints a square
* @size: size of the square to be printed
* Return: void
*/
void print_square(int size)
{
	char c = '#';
	int w = size, h = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (h > 0)
	{
		w = size;
		while (w > 0)
		{
			_putchar(c);
			w--;
		}
		_putchar('\n');
		h--;
	}
}
