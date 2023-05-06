#include "main.h"

/**
 * flip_bits - flips bits from one number to another.
 * @n: First Number to flip bits from
 * @m: Second Number to flip bits to
 *
 * Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
