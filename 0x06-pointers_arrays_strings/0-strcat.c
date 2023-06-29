#include "main.h"

/**
* _strlen - gets the length of s
* @s: string buffer that will be processed
* Return: int length of s.
*/
int  _strlen(char *s)
{
	int it = 0;

	while (s[it] != '\0')
		it++;

	return (it);
}
/**
* _strcat - a function that concatinates dest with src strings
* @src:  the source string
* @dest: the destination string
* Return: char* destination string.
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
