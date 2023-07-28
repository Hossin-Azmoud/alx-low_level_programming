#include "main.h"
/**
 * _isalpha - checks if c is lowercase
 * checks if c a lowercase/uppercase charachter
 * @c: charachter to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	return ((int) ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}
