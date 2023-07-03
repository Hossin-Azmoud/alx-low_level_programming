#include "main.h"

/**
* _strchr -  function that locates a character in a string.
* @s: the string to search
* @c: the character we are looking for.
* Return: result
*/

char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);

		ptr++;
	}
	
	if (ptr == c)
		return ptr;

	return (NULL);
}
