#include "main.h"

/**
* _strspn - function that that gets the length of a prefix substring.
* @s: the string to be processed
* @accept: the bytes we are accepting
* Return: result
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; (s[i] != ' ' && s[i]); i++)
	{
		for(j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				len++;
		}
	}

	return len;
}
