#include "lists.h"

/**
* get_nodeint_at_index - getting node
* @head: first node in the linked list
* @index: index
* Return: Upon Success - pointer to the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;
	while (temp &&
		       	i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

