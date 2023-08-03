#include "main.h"
/**
 * set_bit - sets a bit.
 * @n: number to proc.
 * @index: index of the bit to set.
 * Return: The result.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n |= (1 << index);
	return (0);
}
