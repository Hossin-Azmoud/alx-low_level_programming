#include "main.h"

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

	return (dest);
}
