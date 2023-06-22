#include "main.h"
#define INT_MIN__ "-2147483648"

/**
* print_number - prints a number n
* takes a number and then prints each digit
* @n: number to be printed.
* Return: void
*/
void print_number(int n)
{
	int i = 0;

	if (n == -2147483648)
	{
		while (INT_MIN__[i])
		{
			_putchar(INT_MIN__[i]);
			i++;
		}

		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n <= 9 && n >= 0)
	{
		_putchar(n % 10 + '0');
		return;
	}

	if (n == 0)
	{
		return;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
