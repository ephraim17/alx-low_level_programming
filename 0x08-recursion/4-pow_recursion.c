/**
 * _pow_recursion - returns the value of x to the power y
 *
 * @x: first int
 * @y: second int
 *
 * Return: (0) Success.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
