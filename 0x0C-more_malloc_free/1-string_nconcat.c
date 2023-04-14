#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);
/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second String
 * @n: First number of bytes of s2
 *
 * Return: Pointer to a newly allocated space containing
 * s1 followed by the first n bytes of s2 concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len_str, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n < len_s2)
		len_s2 = n;

	len_str = len_s1 + len_s2 + 1;
	str = malloc(sizeof(*str) * len_str);

	if (str == NULL)
		return (NULL);

	_memcpy(str, s1, len_s1);
	_memcpy(str + len_s1, s2, len_s2);
	str[len_s1 + len_s2] = '\0';

	return (str);
}

/**
 * _strlen - returns the length of a string.
 *@s: The string to check
 *
 * Return: The length of string s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _memcpy - copies from memory area source to memory area destination
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: size of memory area to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
