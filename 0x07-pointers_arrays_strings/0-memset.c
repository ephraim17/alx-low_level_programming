#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: input string
 * @b: input char
 * @n: input size
 *
 *Return: S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
