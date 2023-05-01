#include "lists.h"

/**
* add_nodeint - main entry point
* @head: pointer
* @n: data to insert in that new node
* Return: Upon Success - nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!new){
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}

