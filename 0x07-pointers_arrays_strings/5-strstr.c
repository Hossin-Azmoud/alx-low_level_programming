#include "main.h"

/**
* _str- function function that locates a substring.
* @haystack: the string to be searched in
* @accept: the substring we are looking for
* Return: result
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, it;
	int len  = strlen(needle);
	char *ptr;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
			{
				ptr = (haystack + i);
				for(it = 0; ptr[it]; it++)
				{
					if (ptr[it] != needle[it])
						break;
				}

				if (it == len)
					return (ptr);
			}
		}
	}

	return (NULL);
}
