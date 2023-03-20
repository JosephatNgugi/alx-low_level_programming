#include <stdio.h>
/* more headers go here */

/**
 * main - Entry point
 * print all base16 numbers in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48, j = 97;

	for (; i <= 57;)
	{
		putchar(i);
		i++;
	}
	for (; j <= 102;)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
