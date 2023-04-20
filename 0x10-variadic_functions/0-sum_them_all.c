#include "variadic_functions.h"

/**
 * sum_them_all - Adds all of its parameters
 * @n: Number of parameters
 *
 * Return: The sum of the parameters passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(params, n);
	for (i = n; i > 0; i--)
	{
		sum += va_arg(params, int);
	}
	va_end(params);

	return (sum);
}
