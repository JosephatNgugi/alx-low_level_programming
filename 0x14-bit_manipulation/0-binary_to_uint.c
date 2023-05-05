#include "main.h"

int _isBinary(const char *b);

/**
 * binary_to_uint - Converts a binary number or an unsigned int.
 * @b: Pointer to a string of Binary number representation.
 *
 * Return: The converted Number, or 0 if
 * b is NULL or
 * there is one or more chars in the string that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL || _isBinary(b) != 1)
		return (0);

	while (b[i] != '\0')
	{
		decimal = decimal << 1;
		decimal += b[i] - '0';
		i++;
	}

	return (decimal);
}

/**
 * _isBinary - Checks if s string contains only binary values.
 * @b: Pointer to a string
 *
 * Return: 0 if a string contains binary digits, 1 if otherwise
 */
int _isBinary(const char *b)
{
	int i;

	for (i = 0; b[i]; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	return (1);
}

