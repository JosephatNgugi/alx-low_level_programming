#include <stdio.h>

/**
 * main - Entry point
 * FizzBuzz- prints 1 to 100, for numbers which are multiples of three
 * print Fizz, print Buzz for multiples of five and FizzBuzz for numbers
 * which are multiples of both three and five instead of the number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 1;
	int last_num = 100;

	for (; num <= last_num; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
