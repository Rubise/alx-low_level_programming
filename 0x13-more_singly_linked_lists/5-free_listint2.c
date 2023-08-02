#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	while ((temp = *head) != NULL)
	{
		listint_t *next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
}
