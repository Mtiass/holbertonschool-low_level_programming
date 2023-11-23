#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list.
 * @head:parameter which is a pointer to the head of a doubly linked list.
 * @index: is the index of the node, starting from 0.
 * Return:the address of the new node, or NULL if it failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *acnode = head;
	unsigned int con = 0;

	while (acnode != NULL)
	{
		if (con == index)
			return (acnode);
		con++;
		acnode = acnode->next;
	}
	return (NULL);
}
