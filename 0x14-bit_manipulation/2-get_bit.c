#include <stdio.h>
#include "main.h"

/**
 * get_bit - return the value ofa bit at a given index
 * @index: the index starting from 0
 * @n: int
 * Return: value of a bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus;

	bitStatus = (n >> index) & 1;
	return (bitStatus);
	
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
}
