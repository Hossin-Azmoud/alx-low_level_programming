#include "main.h"

/**
* rev_string - reverses the given string.
* @s: string to be reveresed.
* Return: void
*/
void rev_string(char *s)
{
	int end   = 0;
	int start = 0;
	char tmp;

	while (s[end + 1] != '\0')
		end++;

	for (; start < end; end--, start++)
	{
		tmp      = s[end];
		s[end]   = s[start];
		s[start] = tmp;
	}
}
