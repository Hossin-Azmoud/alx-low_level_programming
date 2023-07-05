#include "main.h"

/**
* _strlen_recursion - function that calculates the length of a string
* @s: string to be processed
* Return: int length of s
*/
int  _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
