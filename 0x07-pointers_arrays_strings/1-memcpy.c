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
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
