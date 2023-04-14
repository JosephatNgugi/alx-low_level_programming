#include <stdlib.h>
#include <main.h>

int _isdigit(int c);
void print_number(int n);
int _atoi(char *s);
void print_error(void);
/**
 * main - Entry point, Multiplies two integers
 * @argc: Argument count
 * @argv: Argument vector(array of arguments)
 *
 * Return: 0 on success, otherwise 98
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;


	if (argc != 3)
		print_error();
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	print_number(result);
	_putchar('\n');

	return (0);
}

/**
 * _isdigit - checks if a character is a digit 0 through 9
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}

/**
 * print_error - prints an error message and
 * exits with a 98 status code
 */
void print_error(void)
{
	char *str = "Error";

	while (*str)
		_putchar(*s++);

	_putchar('\n');
	exit(98);
}

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int result = 0, i = 0;

	while (s[i] != '\0')
	{
		if (_isdigit(s[i]))
			result = (result * 10) + (s[i] - '0');
		else
			print_error();
		i++;
	}

	return (result);
}

/**
 * print_number - Prints an integer using _putchar
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
