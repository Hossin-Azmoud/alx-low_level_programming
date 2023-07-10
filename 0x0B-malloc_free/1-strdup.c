#include "main.h"

/**
* _strdup - function that duplicates a string.
* @str: the string that will be duplicated.
* Return: (char *) duplicated string.
*/

char *_strdup(char *str)
{
	int  it = 0;
	char *new_;

	if (str == NULL)
		return (NULL);

	while (str[it] != '\0')
		it++;

	new_ = (char *) malloc(it + 1);

	if (new_ == NULL)
		return (NULL);

	new_[it] = '\0';
	it--;

	while (it > 0)
	{
		new_[it] = str[it];
		it--;
	}

	return (new_);
}
