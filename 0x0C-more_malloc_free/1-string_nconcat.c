#include <stdlib.h>
#include <string.h>

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
	unsigned int len_str, len_s1, len_s2, i;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n < len_s2)
		len_s2 = n;

	len_str = len_s1 + len_s2 + 1;
	str = malloc(sizeof(*str) * len_str);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];

	len_s1++;
	for (i = 0; i < len_str; i++)
		str[len_s1 + i] = s2[i];
	str[len_s1 + i] = '\0';

	return (str);
}
