#include "main.h"

/**
* _putchar - puts char
* function that prints a character
* Return: 1 written character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
