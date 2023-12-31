#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr = *head;

	if (head != NULL)
	{
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
