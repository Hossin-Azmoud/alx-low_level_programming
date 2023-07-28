#include "main.h"

/**
* is_prime_number - function that check if n is prime.
* @n: number
* Return: int 1 if is prime and 0 otherwiser
*/

int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	return	(_is_p(n, 2));
}

/**
* _is_p - function that returns if n is prime or not
* @n: number
* @i: number
* Return: int 1 if is prime and 0 otherwiser
*/
int  _is_p(int n, int i)
{
	if (n == 0 || n == 1)
		return (0);

	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (_is_p(n, (i + 1)));
}
