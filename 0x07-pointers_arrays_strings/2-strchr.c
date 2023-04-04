/**
 *_strchr - locates a character in a string
 *@s: pointer to a string
 *@c: a character to be located
 *
 *Return: a pointer to the first occurence of character c
 * in the string, or Null if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
