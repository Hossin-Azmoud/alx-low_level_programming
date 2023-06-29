#include "main.h"

/**
* cap_string - function that capitalizes all words in a string
* @s: string
* Return: pointer to the resulting string
*/
char *cap_string(char *s)
{
	char *ptr = s;
	int  word_reached = 0;

	if (s == NULL)
		return (NULL);

	while (*ptr != '\0')
	{
		if (ptr == s)
			if (*ptr >= 'a' && *ptr <= 'z')
				*ptr = *ptr - 32;

		if (word_reached && *ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - 32;

		if ((*ptr == '.') || (*ptr == ',') || (*ptr == ';') || (*ptr == '!')
		|| (*ptr == '?') || (*ptr == '"') || (*ptr == '(')
		|| (*ptr == ')') || (*ptr == '{') || (*ptr == '}')
		|| (*ptr == ' ') || (*ptr == '\t') || (*ptr == '\n'))
		{
			word_reached = 1;
		}
		else
		{
			word_reached = 0;
		}

		ptr++;
	}

	return (s);
}
