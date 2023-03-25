#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Find and print the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	long num = 612852475143;

	for (n = (int) sqrt(num); n > 2; n++)
	{
		if (num % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}

	return (0);
}
