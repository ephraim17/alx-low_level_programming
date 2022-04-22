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

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

