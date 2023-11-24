#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index index of
 * a dlistint_t linked list.
 * @head:is a pointer to a pointer to the head of a doubly linked list.
 * @index: is the index of the node that should be deleted. Index starts at 0.
 * Return:1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *acnode = *head;
	unsigned int con = 0;

	if (acnode == NULL || *head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = acnode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(acnode);
	}
	else
	{
		for (; acnode != NULL && con < index; con++)
		{
			prev = acnode;
			acnode = acnode->next;
		}
		prev->next = acnode->next;
		if (acnode->next != NULL)
			acnode->next->prev = prev;
		free(acnode);
	}
	return (1);
}
