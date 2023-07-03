#include "main.h"

/**
* _putchar -  function that writes a character into stdout.
* @c: char to be written
* Return: always 1
*/
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
