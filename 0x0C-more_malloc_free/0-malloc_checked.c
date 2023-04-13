#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: Size of memory to be allocated in bytes
 *
 * Return: A pointer to the allocated memory, on failure
 * the malloc will cause a normal process termination with
 * a (98) status value
 */

void *malloc_checked(unsigned int b)
{
	int *mem_alloc = malloc(b);

	if (mem_alloc == NULL)
		exit(98);
	return (mem_alloc);
}
