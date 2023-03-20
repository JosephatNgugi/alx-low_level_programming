#include <stdio.h>
/* more headers go here */

/**
 * main - Entry point
 * print base10 digits 0 to 9 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
