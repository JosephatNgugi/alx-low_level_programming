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
