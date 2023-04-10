#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: On Success (0), (1) otherwise
 */

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", coins);
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
			cents--;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
