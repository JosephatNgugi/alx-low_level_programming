#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on each
 * element of a array
 * @array: Pointer to array of integers
 * @size: Size of the array
 * @action: Function Pointer taking an int argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
