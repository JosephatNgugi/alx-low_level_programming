/**
 * _strncat - concatenates two strings by appending the src
 * to dest string using specified number of bytes,
 * @dest: Pointer to the dest character array
 * @src: Pointer to the src character array
 * @n: Number of bytes
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
