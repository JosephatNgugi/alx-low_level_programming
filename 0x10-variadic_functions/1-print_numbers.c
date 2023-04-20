#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: Pointer to the string to be printed
 * @n: Number of parameters passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (separator)
			if (i - (n - 1) != 0)
				printf("%s", separator);
	}
	va_end(params);
	printf("\n");
}
