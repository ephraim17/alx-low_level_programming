#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: data
 * Return: (0) Success
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

