#include "lists.h"

/**
* listint_len - main entry point
* @h: linked list
* Return: Upon Success - nodes
*/

size_t listint_len(const listint_t *h){
	size_t num = 0;
	while (h){
		num++;
		h = h->next;
	}
	return (num);
}

