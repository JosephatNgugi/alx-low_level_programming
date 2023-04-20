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

	if (n == 0)
		return;

	if (separator == NULL)
		return;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		if (i - (n - 1) == 0)
			printf("%d", va_arg(params, int));
		else
			printf("%d%c ", va_arg(params, int), *separator);
	}
	printf("\n");
}
