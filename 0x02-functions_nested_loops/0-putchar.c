#include "main.h"

/**
 * main - Entry point
 * function a program that prints _putchar
 * Return: 0 Always (SUCCESS)
 */
int main(void)
{
	char s[9] = "_putchar\n";
	int  i = 0;

	while (i < 9)
	{
		_putchar(s[i]);
		i++;
	}

	return (0);
}
