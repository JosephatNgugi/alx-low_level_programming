#include <stdio.h>

/**
 * _strncpy - copies a string to buffer
 * @dest: pointer to dest character array
 * @src: pointer to src character array
 * @n: maximum Number of bytes to be copied
 *
 * Return: Pointer to the resulting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
