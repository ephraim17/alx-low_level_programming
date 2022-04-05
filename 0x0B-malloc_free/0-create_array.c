#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @c: input char
 * @size: input size
 *
 * Return: a pointer to array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char *) malloc(size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
