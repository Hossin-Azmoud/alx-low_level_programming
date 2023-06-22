
#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
*/
void more_numbers(void)
{
	int  start;
	char buff[3];
	int  i     = 0;
	int  it    = 0;
	int  limit = 15;

	while (it < 10)
	{
		start = 0;

		while (start < limit)
		{
			if (start > 9)
			{
				buff[0] = (start / 10) % 10 + '0';
				buff[1] = (start % 10) + '0';
				buff[2] = '\0';
				i = 0;
				while (buff[i] != '\0')
				{
					_putchar(buff[i]);
					i++;
				}

			} else
			{
				_putchar(start + '0');
			}

			start++;
		}

		_putchar('\n');
		it++;
	}
}
