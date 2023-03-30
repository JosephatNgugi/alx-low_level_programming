/**
 * string_toupper - changes all letters of a string to uppercase
 * @str: pointer to a string to be modified
 *
 * Return: pointer to modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}

	return (str);
}
