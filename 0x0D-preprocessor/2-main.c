#include <stdio.h>

/**
* main - entry point.
* a program that prints the name of tha file it was compiled in.
* Return: 0 Always SUCCESS
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
