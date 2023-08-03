#include "main.h"
/**
 * set_bit - sets a bit.
 * @n: number to proc.
 * @index: index of the bit to set.
 * Return: The result.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* NOTE: (N |= 1 << K) */
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
