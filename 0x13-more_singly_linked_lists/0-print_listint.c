#include "lists.h"

/**
 * print_listint - main entry point
 * @h: the linked list
 * Return: Upon Success - Nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h){
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

