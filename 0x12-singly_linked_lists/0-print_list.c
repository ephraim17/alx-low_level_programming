#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints elements of list_t list
 * @h: list_t
 *
 * Return: Number of nodes in h
 */

size_t print_list(const list_t *h)
{
	//size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			//n++;
		}
	}
	return (len);
}
