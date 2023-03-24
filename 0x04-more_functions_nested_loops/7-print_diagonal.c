#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal line
 * @n: number of times line to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;

		while (i < n)
		{
			j = i;

			for (; j > 0;)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
