#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 * Return: number of elements in h - upon success
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}

