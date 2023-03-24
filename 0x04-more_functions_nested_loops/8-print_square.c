#include "main.h"

/**
 * print_square - a function that prints a square
 * @n: number of times the square to be printed
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		_putchar('#');
		_putchar('\n');
	}
}
