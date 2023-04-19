#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_of_bytes);
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument Vector (Array of arguments)
 *
 * Return: On Success (0)
 */
int main(int argc, char *argv[])
{
	int num_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_of_bytes);

	return (0);
}

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_of_bytes: Size in bytes of the code to be printed
 */
void print_opcodes(int num_of_bytes)
{
	int i;
	int (*main_addr) = &main;
	unsigned char *code_ptr = (unsigned char *) main_addr;

	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02x ", code_ptr[i]);
	}
	printf("\n");
}
