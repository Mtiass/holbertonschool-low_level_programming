#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t
 * list.
 * @h: parameter which is a pointer to the head of a singly linked list.
 * Return:number of elements (size_t).
 */
size_t list_len(const list_t *h)
{
	size_t nodecont = 0;
	const list_t *actnod = h;

	while (actnod != NULL)
	{
		nodecont++;
		actnod = actnod->next;
	}
	return (nodecont);
}
