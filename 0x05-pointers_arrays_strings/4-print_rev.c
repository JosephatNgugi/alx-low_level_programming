#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 * @s: the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(str[i - 1]);
		i--;
	}
	_putchar('\n');
}
