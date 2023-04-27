#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: List of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list params;
	char *str_arr;
	int i = 0;

	va_start(params, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(params, int));
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				break;
			case 's':
				str_arr = va_arg(params, char *);
				if (str_arr == NULL)
					str_arr = "(nil)";
				printf("%s", str_arr);
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	va_end(params);
	printf("\n");
}
