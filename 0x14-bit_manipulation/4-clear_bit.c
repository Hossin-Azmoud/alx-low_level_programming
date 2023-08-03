#include "main.h"
/**
 * clear_bit - clears a bit by index.
 * @n: The number.
 * @index: NUmber.
 * Return: 1 on success and -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* NOTE: (N |= 0 << K) */
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n = (*n | (0 << index));
	return (1);
}
