#include "main.h"
/**
 * print_last_digit - print + returns the last digits.
 * @n: num to be processed
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lst;

	if (n < 0)
	{
		n = -n;
	}

	lst = n % 10;
	_putchar('0' + lst);
	return (lst);
}
