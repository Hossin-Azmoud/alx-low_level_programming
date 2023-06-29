#include "main.h"

/**
* cap_string - function that capitalizes all words in a string
* @s: string
* Return: pointer to the resulting string
*/
char *cap_string(char *s)
{
	char *ptr = s;

	if (s == NULL)
		return (NULL);

	while (*ptr)
	{
		if ((*ptr == '.') || (*ptr == ',') || (*ptr == ';') || (*ptr == '!')
		|| (*ptr == '?') || (*ptr == '"') || (*ptr == '(')
		|| (*ptr == ')') || (*ptr == '{') || (*ptr == '}')
		|| (*ptr == ' ') || (*ptr == '\t') || (*ptr == '\n'))
		{
			if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
			{
				ptr++;
				*ptr -= 32;
			}
		}

		ptr++;
	}

	return (s);
}
