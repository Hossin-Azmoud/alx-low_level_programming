#include "main.h"
/**
 * print_last_digit - print + returns the last digits.
 * @n: num to be processed
 * Return: last digit
 */

int print_last_digit(int n)
{
	int num = (n > 0 || n == INT_MIN) ? n : -n;
	int lst;

	lst = num % 10;
	_putchar((num == INT_MIN) ? ('0' - lst) : ('0' + lst));
	return ((num == INT_MIN) ? -lst : lst);
}
