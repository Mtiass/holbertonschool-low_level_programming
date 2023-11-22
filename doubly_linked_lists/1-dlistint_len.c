#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list.
 * @h:parameter which is a pointer to the head of a doubly linked list.
 * Return:number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
