#include "main.h"

/**
* _strncpy - function that copies n bytes from src to dest.
* @n: amount of bytes to copy
* @src: source string
* @dest: destincation string
* Return: char * result of copy operation
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
	return (dest);
}


