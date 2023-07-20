#include "variadic_functions.h"

/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: the string to be printed between strings.
* @n: count of args to sum.
* Return: void
*
*/

void print_strings(const char *separator, const unsigned int n, ...);
{
	va_list arg_list_;
	unsigned int idx;

	va_start(arg_list_, n);
	idx = 0;

	while (idx < n)
	{
		printf("%s", va_arg(arg_list_, char*));

		if (idx < n - 1)
			printf("%s", (separator != NULL) ? separator : "");

		idx++;
	}

	printf("\n");
	va_end(arg_list_);
}
