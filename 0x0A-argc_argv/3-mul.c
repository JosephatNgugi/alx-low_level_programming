#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * multiplies two numbers and prints the result
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: On Success (0), (1) on error
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);
	return (0);
}
