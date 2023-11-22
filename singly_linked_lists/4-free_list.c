#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head:parameter that is a pointer to the head of a singly linked list.
 * Return:
 */
void free_list(list_t *head)
{
	list_t *frlis;

	while (head != NULL)
	{
		frlis = head;
		head = head->next;
		free(frlis->str);
		free(frlis);
	}
}
