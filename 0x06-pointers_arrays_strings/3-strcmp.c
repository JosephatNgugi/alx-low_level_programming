/**
 * _strcmp - compares two strings
 * @s1: pointer to first string to compare
 * @s2: pointer to second string to compare
 *
 * Return: an integer less than, equal to, or
 * greater than zero if s1 is found to be to be
 * less than, to match, or be greater than s2
 * respectively
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	for (; *s1 != '\0' || *s2 != '\0';)
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			break;
		}
		else
			result = 0;
		s1++;
		s2++;
	}

	return (result);
}
