#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you would need 
 * to flip to get from one number to another
 * @n: starting number
 * @m: finishing number.
 * Return: number of flips u need to do in order to reach (m)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_ = n ^ m;
	unsigned int flips = 0;
	
	for (; xor_; xor_ >>= 1)
		flips += (xor_ & 1);
	
	return (flips);
}
