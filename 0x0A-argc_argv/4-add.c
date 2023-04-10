#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * add positive numbers and prints the result
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: On Success (0), otherwise (1)
 */

int main(int argc, char *argv[])
{
	int i, num, result = 0;

	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num] != '\0'; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);
		if (num > 0)
			result += num;
	}
	printf("%d\n", result);
	return (0);
}
