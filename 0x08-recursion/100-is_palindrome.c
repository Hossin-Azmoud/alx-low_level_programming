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

/**
* is_palindrome - return if s is a palindrome
* @s: string to be processed
* Return: int 1 if is a palindrome and 0 otherwiser
*/

int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}



/**
* check_palindrome - return if s is a palindrome
* @s: string to be processed
* @left: left pointing index
* @right: right pointing index
* Return: int 1 if is a palindrome and 0 otherwiser
*/
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);

	return (check_palindrome(s, left + 1, right - 1));
}
