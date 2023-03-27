/**
 * _strlen - returns the length of a string.
 *@s: The value to check
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
