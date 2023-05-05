#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: A long integer value to print binary for
 */
void print_binary(unsigned long int n)
{
	int i = 0;

	while (n != '\0')
	{
		if (n & (1 << i))
			_putchar('1');
		else
			_putchar('0');
		i++;
	}
	_putchar('\n');
}
