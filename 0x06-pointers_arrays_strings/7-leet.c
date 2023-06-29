#include "main.h"

/**
* leet - function that encodes a string into 1337
* @s: string
* Return: pointer to the resulting string
*/
char *leet(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr == 'A' || *ptr == 'a')
			*ptr = '4';

		if (*ptr == 'e' || *ptr == 'E')
			*ptr = '3';

		if (*ptr == 'o' || *ptr == 'O')
			*ptr = '0';

		if (*ptr == 't' || *ptr == 'T')
			*ptr = '7';

		if (*ptr == 'l' || *ptr == 'L')
			*ptr = '1';

		ptr++;
	}

	return (s);
}
