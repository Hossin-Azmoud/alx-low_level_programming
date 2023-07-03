#include "main.h"

/**
* _memcpy -  function that copies memory area.
* @dest: memory address to copy to
* @src: memory address to copy from
* @n: the amount of slots that will be copied over
* Return: result
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it = 0;

	while (it < n)
	{
		dest[it] = src[it];
		it++;
	}

	return (dest);
}
