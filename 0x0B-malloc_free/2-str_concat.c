#include "main.h"
/**
* str_concat - function that concatenates two strings.
* @s1: string that will be concatenated
* @s2: string that will be concatenated
* Return: (char *) pointer to the string that concatenates s1, s2
*/

char *str_concat(char *s1, char *s2)
{
	char *new;
	int  len1 = 0;
	int  len2 = 0;
	int  it   = 0;
	int  j    = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;

	while(s2[len2] != '\0')
		len2++;
	
	new = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	
	while (it < len1)
	{
		new[it] = s1[it];
		it++;
	}

	while (it < (len2 + len1))
	{
		new[it] = s1[j];
		it++;
		j++;
	}

	return (new);
}
