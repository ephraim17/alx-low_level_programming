#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: Converted number or 0 if set conditions are met
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned val;
	
	if (b == NULL)
	{
		return (0);
	}
	for (val = 0; *b; b++)
	{
		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val <<= 1;
		else
			return (0);
	}
	return val;
}
