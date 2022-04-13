#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function given as a param on each elem of array
 * @array: first param
 * @size: second param
 * @action:third param
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
