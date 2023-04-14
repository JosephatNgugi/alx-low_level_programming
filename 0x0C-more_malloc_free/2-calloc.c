#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in array
 * @size: Size in bytes of each element
 *
 * Returns: Pointer to the allocated memory,
 * NULL if malloc fails, or if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);

	return (arr);
}

/**
 * _memset - fills the memory with a constant byte
 * @s: address of memory to fill
 * @b: character to fill the memory with
 * @n: the size of the memory to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
