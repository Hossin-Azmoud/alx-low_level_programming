#include "main.h"
/*
* print_number - prints a number n
* @n: number to be printed.
* Return: void
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	if (n == 0)
	{
		return;
	}

	print_number(n / 10);
	_putchar(n % 10 + '0');
}
