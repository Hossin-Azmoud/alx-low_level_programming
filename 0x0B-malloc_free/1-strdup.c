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
