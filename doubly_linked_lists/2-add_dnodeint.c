#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head:is a pointer to a pointer to the head of a doubly linked list.
 * @n:parameter passed to the function.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;

	return (newnode);
}
