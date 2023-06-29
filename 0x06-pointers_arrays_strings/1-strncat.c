#include "main.h"

/**
* _strncat - function that concats n bytes from src to dest.
* @n: amount of bytes to concat
* @src: source string
* @dest: destincation string
* Return: char * result of concat operation
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
