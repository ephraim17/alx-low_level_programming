#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a list_t
 * @h: pointer to the list_l
 *
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

