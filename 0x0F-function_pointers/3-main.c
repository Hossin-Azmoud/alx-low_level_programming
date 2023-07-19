#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
* main - Entry point
* program that does a specific op, based on cli args.
* @argc: arg count
* @argv: arg array
* Return: 0 on success, 1 on failure.
*/
int main(int argc, char **argv)
{

	int a, b;
	char *op;
	int (*func)(int, int);

	if (argc < 4)
	{
		return (1);
	}

	a  = atoi(argv[1]);
	op = argv[2];
	b  = atoi(argv[3]);
	func = get_op_func(op);

	if (func == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", func(a, b));
	return (0);
}
