#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Number of bits to flip
 * @n: int
 * @m: int
 * Return: Number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int flip = 0;

	while (result)
	{
		if (1 & result)
		{

			flip++;
		}
	result = result >> 1;
	}
	return (flip);
}
