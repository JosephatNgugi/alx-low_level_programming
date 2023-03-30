/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
	int i;
	char *p = s;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[]   = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*p) {
		i = 0;
		while (letters[i]) {
			if (*p == letters[i]) {
				*p = rot13[i];
				break;
			}
			i++;
		}
		p++;
	}

	return s;
}
