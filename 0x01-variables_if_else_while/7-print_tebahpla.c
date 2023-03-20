#include <stdio.h>
/* more headers go here */

/**
 * main - Entry point
 * print the alphabet in lowercase and reversed
 *
 * Return: (0) Success
*/
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
