#include "variadic_functions.h"

/**
* sum_them_all - func that sums up its arguments.
* @n: count of args to sum.
* Return: (int) sum of args
*
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list_;
	unsigned int idx, accumulator = 0;

	if (n == 0)
		return (accumulator);

	va_start(arg_list_, n);
	idx = 0;

	while (idx < n)
	{
		accumulator += va_arg(arg_list_, int);
		idx++;
	}

	va_end(arg_list_);
	return (accumulator);
}
