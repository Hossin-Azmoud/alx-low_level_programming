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
	int len = strlen(format);

	sep = ", ";
	va_start(arg_list_, format);
	while (char_token && idx < len)
	{
		char_token = *(format + idx);
		if (*(format + idx + 1) == 0)
			sep = "";
		switch (char_token)
		{
			case 'c': {
				printf("%c%s", va_arg(arg_list_, int), sep);
			} break;
			case 'f': {
				printf("%f%s", va_arg(arg_list_, double), sep);
			} break;
			case 's': {
				s = va_arg(arg_list_, char*);
				if (s == NULL)
					s = "(nil)";

				printf("%s%s", s, sep);
			} break;
			case 'i': {
				printf("%i%s", va_arg(arg_list_, int), sep);
			} break;
			default: {
			} break;
		}
		idx++;
	}

	printf("\n");
	va_end(arg_list_);
}
