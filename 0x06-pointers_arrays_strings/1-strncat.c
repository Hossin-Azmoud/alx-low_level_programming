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
	char *ptr;
	int  it = 0;
	int  ln = 0;

	while (dest[ln])
		ln++;

	ptr = dest + ln;

	while (it < n && *src)
	{
		*ptr++ = *src++;
		it++;
	}

	*ptr = '\0';

	return (dest);
}


