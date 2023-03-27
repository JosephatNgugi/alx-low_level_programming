/**
 * swap_int - swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
