#include <stdio.h>
#include "main.h"

/**
 * main - checks if c is uppercase or lowercase
 * _isupper: checks if letter is uppercase or lowercase
 * @c: the char to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 'A' && c <= 'Z' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
