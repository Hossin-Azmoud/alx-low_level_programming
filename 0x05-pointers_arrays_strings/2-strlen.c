#include "main.h"

/**
* _strlen - a function that gets the size of a string.
* @s: pointer to string to be processed.
* Return: int size of the passed string.
*/
int _strlen(char *s)
{
	int it = 0;

	if (s == NULL)
		return (0);

	while (*s[it] != '\0')
		it++;

	return (it);
}

