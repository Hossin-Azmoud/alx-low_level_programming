#include "main.h"

/**
* _putchar - function that prints chars.
* @c: character.
* Return: int, number of bytes that was written.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
