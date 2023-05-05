#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index
 * @n: Number to get value of bit
 * @index: The index position to get value of bit
 *
 * Return: The value of the bit at index `index`
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
