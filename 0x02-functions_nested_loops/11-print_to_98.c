#include "main.h"
#define BOUND 98
#define MAX   10
#define EOB   '\0'

/**
 * convert_int_to_ascii - converts int to ascii
 * @n: number to convert
 * @buff: buffer storage
 * Return: it an iterator index
 */

int convert_int_to_ascii(int n, char *buff)
{
	int quot = (n > 0) ? n : -n;
	int it = MAX - 1;

	buff[it] = EOB;

	it -= 1;
	do {

		buff[it] = (quot % 10) + '0';
		quot /= 10;
		if (quot == 0)
		{
			break;
		}
		it--;

	} while (quot > 0);

	if (n < 0)
	{
		buff[it] = '-';
	}

	return (it);
}

/**
 * print_to_98 - print numbers from n -> 98
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
	int diff = (n < BOUND) ? 1 : -1;
	int tmp, it;
	char buff[MAX];

	while (n != BOUND)
	{
		tmp = n;

		if (tmp < 0)
		{
			_putchar('-');
			tmp = -tmp;
		}
		it = convert_int_to_ascii(tmp, buff);

		while (buff[it])
		{
			_putchar(buff[it]);
			it++;
		}

		_putchar(',');
		_putchar(' ');
		n += diff;
	}

	_putchar((BOUND / 10) % 10 + '0');
	_putchar(BOUND % 10 + '0');
	_putchar('\n');
}
