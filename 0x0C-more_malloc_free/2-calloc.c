#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: first input param
 * @size: second input param
 *
 * Return: pointr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (!pointer)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*(pointer + i) = 0;
	}
	return (pointer);
}
