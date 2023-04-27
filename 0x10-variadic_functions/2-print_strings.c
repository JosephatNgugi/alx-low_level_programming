#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings from a list of parameters
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *str_arr;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		str_arr = va_arg(params, char *);
		if (str_arr == NULL)
			str_arr = "(nil)";
		printf("%s", str_arr);

		if (separator)
		{
			if (i - (n - 1) != 0)
				printf("%s", separator);
		}
	}
	va_end(params);
	printf("\n");
}
