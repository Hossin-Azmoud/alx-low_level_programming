#include "main.h"
#include <string.h>

#define INT_MIN_S "-2147483648"
#define INT_MIN_I -2147483648

/**
* _atoi - convert a string to integer.
* @s: pointer to the string the will be converted.
* Return: Void
*/

int  _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	if (strcmp(INT_MIN_S, s) == 0)
		return (INT_MIN_I);

	while (*s)
	{
		if ((*s >= '0' && *s <= '9') || *s == '-')
		{
			if (*s == '-')
			{
				sign = -sign;
			}
			else
			{
				n *= 10;
				n = n + (*s - '0');
			}

			s++;
			continue;
		}

		s++;
		if (n > 0)
			break;
	}

	return (n * sign);
}
