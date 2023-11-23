#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: dobluy linked list to be freed.
 * Return:void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *frdlis;

	while (head != NULL)
	{
		frdlis = head;
		head = head->next;
		free(frdlis);
	}
}
