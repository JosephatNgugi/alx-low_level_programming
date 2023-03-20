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
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
