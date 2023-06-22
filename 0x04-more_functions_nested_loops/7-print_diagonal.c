#include "main.h"

/**
* print_diagonal- prints a diagonal line
* @n: length of line
* Return: void
*/
void print_diagonal(int n)
{
	char c     = '\\';
	char space = ' ';
	int space_count = 0;
	int tmp;

	while (n > 0)
	{
		tmp = space_count;

		while (tmp > 0)
		{
			_putchar(space);
			tmp--;
		}

		_putchar(c);
		n--;
		space_count++;
	}

	_putchar('\n');
}
