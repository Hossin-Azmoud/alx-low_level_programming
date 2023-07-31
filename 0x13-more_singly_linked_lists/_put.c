#include "lists.h"
/**
* _putchar - func that prints a single char.
* @c: char to print.
* Return: always 1 (if write succeeds.)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _puts - func that prints a single char.
* @buff: char to print.
* Return: always 1 (if write succeeds.)
*/
int _puts(char *buff)
{
	int sz = 0;

	while (buff[sz] != 0)
		sz++;

	return (write(1, buff, sz));
}
