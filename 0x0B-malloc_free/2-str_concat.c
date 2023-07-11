#include "main.h"

/**
* _strlen - function that calcs the length of a string.
* @s: string that will be concatenated
* Return: (int) length of s
*/
int _strlen(char *s)
{
	int ln = 0;

	if (s == NULL)
		return (ln);

	while (s[ln] != '\0')
		ln++;

	return (ln);
}

/**
* str_concat - function that concatenates two strings.
* @s1: string that will be concatenated
* @s2: string that will be concatenated
* Return: (char *) pointer to the string that concatenates s1, s2
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	int  len1;
	int  len2;
	int  it;

	if (s1 == NULL && s2 == NULL)
		return ("\0");

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	new  = (char *) malloc(len1 + len2 + 1);

	if (new == NULL)
		return (NULL);

	it = 0;
	if (s1 != NULL)
	{
		while (it < len1)
		{
			new[it] = s1[it];
			it++;
		}
	}

	if (s2 != NULL)
	{
		while (it - len1 < len2)
		{
			new[it] = s2[it - len1];
			it++;
		}
	}

	return (new);
}
