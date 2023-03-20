#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - Entry point
 * print a random number and check if the
 * last digit is greater than 5 or less than 6
 *
 * Return: (0) Success
*/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Find the last digit */
	lastDigit = n % 10;
	printf("Last digit of %d is %d ", n lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
