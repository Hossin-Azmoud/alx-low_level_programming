#include "main.h"
/**
 * print_sign - checks n's sign
 * check if n is negative, positive or neither (0)
 * @n: Number to be checked
 * Return: 1 if (n > 0), 0 if (n == 0), -1 if (n < 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
