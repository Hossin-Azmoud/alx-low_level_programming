#include "main.h"

/**
* _find_sqrt - function that get sqrt of n
* @n: number
* @i: number
* Return: int sqrt of n
*/
int _find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_find_sqrt(n, i + 1));
}


/**
* _sqrt_recursion - function that get sqrt of n
* @n: number
* Return: int sqrt of n
*/
int  _sqrt_recursion(int n)
{
	return (_find_sqrt(n, 0));
}
