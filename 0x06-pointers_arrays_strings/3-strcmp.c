#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1: string
* @s2: string
* Return: 0 if s1 == s2 and 1 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int it = 0;

	while (s1[it] && s2[it])
	{
		if (s1[it] != s2[it])
			return (1);

		it++;
	}

	if (s1[it] == '\0' && s2[it])
		return (-15);

	if (s1[it] && s2[it] == '\0')
		return (15);

	return (0);
}
