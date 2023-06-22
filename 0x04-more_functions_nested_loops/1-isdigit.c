#include "main.h"

/**
* _isdigit - checks if a character is a digit or not
* @c: character to be checked
* Return: 0 if c is not a digit 1 otherwise
*/
int _isdigit(int c);
{
	return ((int)(c >= '0' && c <= '9'));
}
