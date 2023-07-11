#include "main.h"

/**
* _strdup - function that duplicates a string.
* @str: the string that will be duplicated.
* Return: (char *) duplicated string.
*/

char *_strdup(char *str)
{
	int  it = 0, len = 0;
	char *new_;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_ = (char *) malloc(len + 1);

	if (new_ == NULL)
		return (NULL);

	while (it < len)
	{
		new_[it] = str[it];
		it++;
	}

	new_[it] = '\0';
	return (new_);
}
/**
* _strlen - function that calcs the length of a string.
* @s: string that will be concatenated
* Return: (int) length of s
*/
int _strlen(char *s)
{
	int ln = 0;

	if (s == NULL)
		return (ln);

	while (s[ln] != '\0')
		ln++;

	return (ln);
}

/**
* str_concat - function that concatenates two strings.
* @s1: string that will be concatenated
* @s2: string that will be concatenated
* Return: (char *) pointer to the string that concatenates s1, s2
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	int  len1;
	int  len2;
	int  it;

	if (s1 == NULL && s2 == NULL)
		return (_strdup("\0"));

	if (s1 == NULL)
		return (_strdup(s2));
	
	if (s2 == NULL)
		return (_strdup(s1));

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	new  = (char *) malloc(len1 + len2 + 1);

	if (new == NULL)
		return (NULL);

	it = 0;

	while (it < len1)
	{
		new[it] = s1[it];
		it++;
	}

	while (it - len1 < len2)
	{
		new[it] = s2[it - len1];
		it++;
	}

	return (new);
}
