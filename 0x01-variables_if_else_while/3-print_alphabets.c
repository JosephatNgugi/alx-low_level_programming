#include <stdio.h>
/* more headers goes here */

/**
 * main - Entry point
 * print the alphabet in lowercase
 *
 * Return: (0) Success
*/
int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
