#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: the string to be printed between nums.
* @n: count of args to sum.
* Return: (int) sum of args
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list_;
	unsigned int idx;

	va_start(arg_list_, n);
	idx = 0;

	while (idx < n)
	{
		printf("%i", va_arg(arg_list_, int));

		if (idx < n - 1)
			printf("%s", (separator != NULL) ? separator : "");

		idx++;
	}

	printf("\n");
	va_end(arg_list_);
}
