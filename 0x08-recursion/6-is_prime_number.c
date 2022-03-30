/**
 * is_prime - determine is number is prime
 * @i: input in i
 * @j: input int j
 * Return: boolean val of the state of inputs
 */

int is_prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (is_prime(i, j - 1));
}

/**
 * is_prime_number - print 1 if no. is prime
 * @n: input integer
 *
 * Return: 1 is no. is prime, else 0
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
