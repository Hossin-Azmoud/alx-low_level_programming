#include "variadic_functions.h"


/**
* print_all - a function that prints anything
* @format: the format.
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list arg_list_;
	char *sep, *s, char_token = '1';
	int idx = 0;

	sep = "";
	va_start(arg_list_, format);

	while (char_token && format)
	{
		char_token = format[idx];
		switch (char_token)
		{
			case 'c': {
				printf("%s%c", sep, va_arg(arg_list_, int));
			} break;
			case 'f': {
				printf("%s%f", sep, va_arg(arg_list_, double));
			} break;
			case 's': {
				s = va_arg(arg_list_, const char *);
				if (s == NULL)
					s = "(nil)";

				printf("%s%s", sep, s);
			} break;
			case 'i': {
				printf("%s%d", sep, va_arg(arg_list_, int));
			} break;
			default: {
				idx++;
			} break;
		}

		sep = ", ";
		idx++;
	}

	printf("\n");
	va_end(arg_list_);
}
