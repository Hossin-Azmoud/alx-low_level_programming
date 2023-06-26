#include "main.h"

/**
* _atoi - convert a string to integer.
* @s: pointer to the string the will be converted.
* Return: Void
*/

int  _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	while (*s)
	{
		if ((*s >= '0' && *s <= '9') || *s == '-')
		{
			if (*s == '-')
				sign = -sign;
			else
			{
				n *= 10;
				n = n + (*s - '0');
			}
		}
		s++;
	}

	return (n * sign);
}
