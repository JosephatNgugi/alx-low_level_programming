#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to previously allocated memory
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i, cpy_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	if (old_size < new_size)
		cpy_size = old_size;
	else
		cpy_size = new_size;

	for (i = 0; i < cpy_size; i++)
		*((char *)ptr2 + i) = *((char *)ptr + i);

	free(ptr);


	return (ptr2);
}
