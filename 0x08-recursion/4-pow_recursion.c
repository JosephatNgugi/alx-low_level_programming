/**
 * _pow_recursion - returns the value a number raised to the power of y
 * @x: first integer
 * @y: second integer
 *
 * Return: the value of x raised to the power of y
 */

int  _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
