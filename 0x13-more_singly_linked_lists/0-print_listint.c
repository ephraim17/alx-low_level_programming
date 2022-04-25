#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

