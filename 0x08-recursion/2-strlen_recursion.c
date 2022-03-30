#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *
 * @s: input string
 * Return: (0) Success.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
