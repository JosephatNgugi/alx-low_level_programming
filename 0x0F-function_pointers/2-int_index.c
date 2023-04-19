#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which the cmp
 * function does not return 0,
 * -1 if no element matches or the size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
