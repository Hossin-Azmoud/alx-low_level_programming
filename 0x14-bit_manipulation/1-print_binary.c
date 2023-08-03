#include "main.h"

/**
* print_binary - a function that prints the bin repr of n
* @n: number to be processed.
* Return: always Void
*/
void print_binary(unsigned long int n)
{
	unsigned long int bit   = 1;
	char              bit_c = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit <= (n >> 1))
		bit <<= 1;

	for (; bit > 0; bit >>= 1)
	{
		bit_c = (n & bit) ? '1' : '0';
		_putchar(bit_c);
	}
}
