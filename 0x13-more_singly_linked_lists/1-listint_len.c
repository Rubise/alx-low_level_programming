#include "lists.h"

/**
 * listint_len - tells number of elements of a linked list
 * @h: linked list of type listint_t to tell
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
