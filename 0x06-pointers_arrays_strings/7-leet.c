/**
 * leet - encodes a string into 1337.
 * letters a and A are replaced by 4, e and E by 3
 * o and O by 0, t and T by 7 and l and L by 1
 * @s: pointer to the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
