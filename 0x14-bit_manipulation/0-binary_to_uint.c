#include "main.h"
#include <stdio.h>

/**
* _strlen - calc the length of a buffer.
* @s: buffer
* Return: len of s
*/
int _strlen(const char *s)
{
	int sz = 0;

	if (s == NULL)
		return (sz);

	while (s[sz] != 0)
	{
		sz++;
	}

	return (sz);
}

/**
 * _pow - power.
 * @base: base of power operation.
 * @power: the power to be raised by.
 * Return: result.
 */
unsigned int _pow(int base, int power)
{
	unsigned int num = 1;

	if (power == 0)
		return (1);

	if (base == 0)
		return (0);

	for (; power > 0; power--)
		num *= base;

	return (num);
}

/**
* binary_to_uint - from bin to int.
* @b: pointer to char.
* Return: converted int.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int bit = 0;
	int bit_power = 0;
	int idx = (_strlen(b) - 1);

	if (b == NULL)
		return (decimal);

	bit = (b[idx] - '0');

	while (idx >= 0)
	{
		if (bit != 0 && bit != 1)
			return (0);

		if (bit == 1)
			decimal += _pow(2, bit_power);

		bit_power++;
		idx--;
		bit = (b[idx] - '0');
	}

	return (decimal);
}
