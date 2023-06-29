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
* _strcpy - a function that coppies the content of src to dest.
* @src: the source string
* @dest: the destination string
* Return: char* destination string.
*/

char *_strcpy(char *dest, char *src)
{
	int it = 0;

	if (!dest || !src)
		return (NULL);

	while (src[it])
	{
		dest[it] = src[it];
		it++;
	}

	dest[it] = '\0';
	return (dest);
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
