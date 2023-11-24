#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position.
 * @h:is a pointer to a pointer to the head of a doubly linked list.
 * @idx: is the index of the list where the new node should be added. Index
 * starts at 0.
 * @n:param integer value to be stored int the new node..
 * Return:the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *actnod = *h;
	dlistint_t *newnod = malloc(sizeof(dlistint_t));

	if (newnod == NULL)
	{
		free(newnod);
		return (NULL);
	}
	newnod->n = n;
	if (*h == NULL && idx == 0)
	{
		*h = newnod;
		newnod->prev = NULL;
		newnod->next = NULL; }
	else if (idx == 0)
	{
		newnod->next = actnod;
		newnod->prev = NULL;
		actnod->prev = newnod;
		*h = newnod; }
	else
	{
		while (actnod != NULL && --idx)
			actnod = actnod->next;
		if (actnod == NULL)
		{
			free(newnod);
			return (NULL);
		}
		newnod->prev = actnod;
		newnod->next = actnod->next;
		if (actnod->next != NULL)
			actnod->next->prev = newnod;
		actnod->next = newnod;
	}
	return (newnod);
}
