/**
 * _strcat - concatenates two strings by appending the src
 * to dest string,
 * @dest: Pointer to the dest character array
 * @src: Pointer to the src character array
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
