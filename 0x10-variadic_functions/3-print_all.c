#include "variadic_functions.h"

/**
* print_all - a function that prints anything
* @format: the format.
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list arg_list_;
	void *curr;
	char internal_fmt[3], *nil_fmt = "(%s)", *nil = "nil";
	int  idx = 0, printed = 0;
	char char_token = *(format + idx);
	
	va_start(arg_list_, format);
	internal_fmt[0] = '%';
	internal_fmt[2] = 0;

	while (char_token)
	{
		if (char_token == 'c'
		|| char_token == 'f'
		|| char_token == 'i'
		|| char_token == 's'
		)
		{
			curr            = va_arg(arg_list_, void*);
			internal_fmt[1] = char_token;

			printf(
				(curr != NULL) ? (internal_fmt) : nil_fmt,
				(curr != NULL) ? curr : nil
			);
			printed = 1;
		}

		idx++;
		char_token = *(format + idx);

		if (printed && char_token)
		{
			printf(", ");
			printed = 0;
		}
	}

	printf("\n");
	va_end(arg_list_);
}
