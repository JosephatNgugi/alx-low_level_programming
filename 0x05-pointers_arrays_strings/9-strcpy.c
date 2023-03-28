#include <stdio.h>

/**
 * *_strcpy - copies a string to buffer
 * including the null byte terminator
 * @dest: pointer to character
 * @src: pointer to character
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (i = 0; src[i] != '\0'; i++)
		len = i;

	for (i = 0; i  < len; i++)
		dest[i] = src[i];
	dest[i] = '\n';

	return (dest);
}
