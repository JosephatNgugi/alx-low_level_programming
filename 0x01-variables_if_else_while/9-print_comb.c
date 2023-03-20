#include <stdio.h>
/* more headers go here */

/**
 * main - Entry point
 * print base10 digits 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48;

	while (i <= 58)
	{
		putchar(i);
		i++;
		if (i == 58)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
