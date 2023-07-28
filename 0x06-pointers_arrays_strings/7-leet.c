#include "main.h"

/**
* leet - function that encodes a string into 1337
* @s: string
* Return: pointer to the resulting string
*/
char *leet(char *s)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	int  it   = 0;
	char *ptr = s;

	while (*ptr)
	{
		for (it = 0; leet_chars[it] != '\0'; it++)
		{
			if (*ptr == leet_chars[it])
			{
				*ptr = leet_nums[it];
				break;
			}
		}

		ptr++;
	}

	return (s);
}
