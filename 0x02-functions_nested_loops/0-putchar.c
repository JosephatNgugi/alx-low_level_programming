#include "main.h"
/**
 * main - Entry point
 * prints _putchar followed by a new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char arr[] = "_putchar";
	int i = 0;

	do {
		_putchar(arr[i]);
		i++;
	} while (arr[i] != '\0');
	_putchar('\n');
	return (0);
}
