#include "main.h"

/**
 * _islower - checks if c is lowercase
 * checks if c is lowercase or not
 * @c: charachter to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	return ((int) (c >= 'a' && c <= 'z'));
}
