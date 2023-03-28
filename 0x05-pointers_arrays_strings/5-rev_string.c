#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > j)
	{
		temp = s[i - 1];
		s[i - 1] = s[j];
		s[j] = temp;
		j++;
		i--;
	}
}
