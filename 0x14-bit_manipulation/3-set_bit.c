#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to an unsigned integer to set the value of bit
 * @index: index position starting from 0 of the bit to be set
 * Return: 1 if Successful, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
