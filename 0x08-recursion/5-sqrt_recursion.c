int _sqrt(int n, int min, int max);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to get the square root of
 *
 * Return: the square root of n,
 * if n does not have a natural square root return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 0, n));
}

/**
 * _sqrt - recursively searches for the square root of a number
 * using binary search
 * @n: integer to search square root of
 * @min: lower search range
 * @max: upper search range
 *
 * Return: the square root of n
 */

int _sqrt(int n, int min, int max)
{
	int mid;

	if (min <= max)
	{
		mid = (min + max) / 2;
		if (mid * mid == n)
			return (mid);
		else if (mid * mid > n)
			return (_sqrt(n, min, mid - 1));
		else
			return (_sqrt(n, mid + 1, max));
	}
	return (-1);
}
