#include "main.h"
/**
* _putchar - function that prints a character
* @c: character to be printed
* Return: always 1 on sucess
*/
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
