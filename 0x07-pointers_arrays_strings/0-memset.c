#include "main.h"

/**
* _memset -  function that fills memory with a constant byte.
* @s: memory address that will be filled
* @b: constant that will be used to fill the memory.
* @n: the amount of slots that will be filled
* Return: Result of filling.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it = 0;

	while (it < n)
	{
		s[it] = b;
		it++;
	}

	return (s);
}
