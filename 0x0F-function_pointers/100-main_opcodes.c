#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point.
* program that prints the op_code of its main.
* @argc: arg count
* @argv: arg array
* Return: 0 
*/
int main(int argc, char **argv)
{
	unsigned char *m;
	int it, nbytes;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	m  = (unsigned char *)main;
	it = 0;

	while (it < nbytes)
	{
		printf("%02x", m[it]);

		if (it != nbytes - 1)
			putchar(' ');

		it++;
	}

	printf("\n");
	return (0);
}
