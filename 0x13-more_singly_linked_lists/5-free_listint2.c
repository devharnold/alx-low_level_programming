#include "lists.h"

/**
 * free_listint2 - main point freeing a list
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		free(*head);
		temp = (*head)->next;
		*head = temp;
	}
	*head = NULL;
}

