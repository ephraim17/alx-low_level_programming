#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets value of nth bit to 1 at a given index
 * @index: index number we're using
 * @n: n
 * Return: (1) or (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	return (((1 << index) | *n));
}
