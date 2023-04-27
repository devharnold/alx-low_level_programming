#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: list_t list to be freed
* Return: Upon Success
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{

		temp = head->next;
		free(head);
		free(head->str);
		head = temp;
	}
}

