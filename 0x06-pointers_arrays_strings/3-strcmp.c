#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1: string
* @s2: string
* Return: 0 if s1 == s2 and 1 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int it = 0;
	int s1_l = 0, s2_l = 0;

	while (s1[s1_l])
		s1_l++;

	while (s2[s2_l])
		s2_l++;

	if (s1_l < s2_l)
		return (-15);

	if (s1_l > s2_l)
		return (15);

	while (s1[it] && s2[it])
	{
		if (s1[it] != s2[it])
			return (1);

		it++;
	}

	return (0);
}
