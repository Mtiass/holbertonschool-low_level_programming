#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list.
 * @head:is a pointer to a pointer to the head of a doubly linked list.
 * @n:parameter passed to the function.
 * Return:the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *lastnode = *head;

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (newnode);
}
