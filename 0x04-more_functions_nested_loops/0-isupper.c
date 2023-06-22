#include "main.h"

/**
* _isupper - checks if a character is uppercase or not
* @c: character to be checked
* Return: 0 if c is not uppercase 1 otherwise
*/
int _isupper(int c)
{
	return ((int)(c >= 'A' && c <= 'Z'));
}
