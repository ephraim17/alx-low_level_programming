#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: input param for name
 * @f: pointer to function
 * Return: (0) Success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
	return (0);
}
