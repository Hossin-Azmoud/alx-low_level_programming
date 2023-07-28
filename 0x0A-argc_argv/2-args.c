#include <stdio.h>

/**
* main - program that prints its args
* @argv: array of argumenets
* @argc: length of argv
* Return: 0 SUCCESS
*/
int main(int argc, char *argv[])
{
	int it;

	for (it = 0; it < argc; it++)
		printf("%s\n", argv[it]);

	return (0);
}
