#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: is a pointer to a pointer to the head of a singly linked list.
 * @str:is a pointer to a string that contains the data to be
 * stored in the new node.
 * Return:a pointer to the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *lastnod = *head;
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
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		while (lastnod->next != NULL)
			lastnod = lastnod->next;

		lastnod->next = newnode;
	}
	return (newnode);
}
