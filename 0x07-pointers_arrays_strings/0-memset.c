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
	int i;

	for (i = n; i > 0; i--)
	{
		*s = b;
		s++;
	}
	return (s);
}
