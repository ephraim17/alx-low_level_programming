#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a list_t
 * @h: pointer to the list_l
 *
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	const list_t *temp;

	temp = h;
	while (h)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}

