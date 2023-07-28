#include "main.h"

/**
* _strcat - a function that concatinates dest with src strings
* @src:  the source string
* @dest: the destination string
* Return: char* destination string.
*/
char *_strcat(char *dest, char *src)
{
	int ln = 0;
	char *ptr;

	while (dest[ln])
		ln++;

	ptr = dest + ln;

	while (*src)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
