#include "main.h"

/**
* get_bit - a func to get a certain bit using index.
* @n: Number
* @index: bit index.
* Return: 0 or 1 depending on the bit value.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index & 1);
}
