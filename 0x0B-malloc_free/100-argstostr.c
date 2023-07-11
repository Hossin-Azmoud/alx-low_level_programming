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
* argstostr - a function that concats all args of the program.
* @ac: arg count
* @av: arg vector
* Return: String that concats av.
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int ln = 0;
	int i, j, it = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		ln += _strlen(av[i]);

	ln  = ln + ac;
	str = malloc(sizeof(char) * (ln + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, it++)
		{
			str[it] = av[i][j];
		}

		str[it++] = '\n';
	}

	str[ln] = '\0';
	return (str);
}

