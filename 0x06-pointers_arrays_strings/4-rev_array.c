/**
 * reverse_array - reverses the content of an array
 * @a: pointer to an array of integers to be reversed
 * @n: Number of elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, arr;

	for (i = 0; i < n / 2; i++)
	{
		arr = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = arr;
	}
}
