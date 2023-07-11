#include "main.h"
#include <stdio.h>
#define MAX 512

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
* strtow - a function that splits a string into words.
* @str: the string that will be split.
* Return: char array of words..
*/
char **strtow(char *str)
{
	char **out = (char **) malloc(sizeof(char *) * MAX);
	int len    = (_strlen(str) + 1);
	int it     = 0;
	int row    = 0;
	int col    = 0;
	
	
	if (str == NULL)
		return (NULL);

	while (*str == ' ')
		str++;
	
	if (*str == '\0')
		return (NULL);

	for (it = 0; str[it] != '\0'; it++)
	{
		out[row] = (char *) malloc(sizeof(char) * len);

		if (out[row] == NULL)
			return (NULL);

		for (col = 0; (str[it] != ' ' && str[it] != '\0'); it++, col++)
			out[row][col] = str[it];

		out[row][col] = '\0';

		if (col > 0)
			row++;
	}

	out[row] = NULL;
	return out;
}
