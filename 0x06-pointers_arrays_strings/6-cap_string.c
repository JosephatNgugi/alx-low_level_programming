/**
 * cap_string - capitalize all words of a string
 * @s: string to be capitalized
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char r[] = " \t\n,;.!?\"(){}"; /* array of separators */

	/* Capitalize first character */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	while (s[i] != '\0')
	{
		/* Capitalize after separator */
		for (j = 0; r[j] != '\0'; j++)
		{
			if (s[i] == r[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}

		i++;
	}

	return (s);
}
