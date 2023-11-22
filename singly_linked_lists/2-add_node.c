#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head:is a pointer to a pointer to the head of a singly linked list.
 * @str:is a pointer to a string that contains the data to be
 * stored in the new node.
 * Return: a pointer to the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	char *stcpy = strdup(str);

	if (newnode == NULL)
	{
		free(stcpy);
		free(newnode);
		return (NULL);
	}
	if (stcpy == NULL)
	{
		free(stcpy);
		free(newnode);
		return (NULL);
	}
	newnode->str = stcpy;
	newnode->len = strlen(stcpy);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
