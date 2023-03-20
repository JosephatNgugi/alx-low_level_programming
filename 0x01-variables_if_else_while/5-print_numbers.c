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
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i++);
	}
	printf("\n");
	return (0);
}
