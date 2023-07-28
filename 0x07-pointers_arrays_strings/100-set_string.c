#include "main.h"

/* MOODY */
/**
* set_string - function that sets the value of a pointer to a char.
* @s: double pointer to the string to be set
* @to: pointer to string to be set to.
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
