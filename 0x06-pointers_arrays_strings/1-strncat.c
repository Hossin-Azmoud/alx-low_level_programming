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

	while (n > 0)
	{
		*ptr++ = *src++;
		n--;

		if (*ptr == '\0')
			return (dest);
	}

	*ptr = '\0';
	return (dest);
}
