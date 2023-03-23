#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 through 9
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
