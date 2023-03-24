#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: number of times line to be drawn
 */

void print_line(int n)
{
	while (n != 0 && n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
