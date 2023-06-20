#include "main.h"
/**
 * jack_bauer -  function that prints every
 * minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: void.
 */

void jack_bauer(void)
{
	int hours = 0;
	int mins  = 0;

	for (hours = 0; hours <= 23; hours++)
	{
		int s = hours / 10;

		for (mins = 0; mins <= 59; mins++)
		{
			int k = mins / 10;

			_putchar(s % 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(k % 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
		}
	}
}
