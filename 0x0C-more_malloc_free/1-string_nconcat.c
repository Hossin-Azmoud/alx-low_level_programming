#include "main.h"

/**
* string_nconcat - function that concats two strings.
* @s1: first string.
* @s2: second string.
* @n: amount of bytes to be taken from s2
* Return: concated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int iter = 0;
	char *new_;
	unsigned int l1;
	unsigned int l2;
	unsigned int all_len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n > l2)
		all_len = l1 + l2;
	else
		all_len = l1 + n;

	new_ = (char *) malloc(all_len + 1);

	if (new_ == NULL)
		return (NULL);

	/* adding the first string. */
	for (; iter < l1; ++iter)
		new_[iter] = s1[iter];

	/* adding the second string. */
	for (iter = 0; (iter + l1) < all_len; ++iter)
		new_[iter + l1] = s2[iter];

	new_[all_len] = 0;

	return (new_);
}



