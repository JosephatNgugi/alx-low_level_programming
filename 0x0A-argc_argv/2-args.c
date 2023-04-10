#include <stdio.h>

/**
 * main - Entry point
 * prints all arguments it recieves
 * @argc: Argument count
 * @argv: Argurment vector
 *
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
