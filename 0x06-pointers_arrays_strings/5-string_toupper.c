#include "main.h"

/**
* string_toupper - function that makes the whole string uppercase 
* @s: string
* Return: pointer to the resulting string
*/
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;

		ptr++;
	}

	return (s);
}
