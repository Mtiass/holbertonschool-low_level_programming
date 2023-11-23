#include "lists.h"
/**
 * sum_dlistint -function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head:parameter which is a pointer to the head of a doubly linked list.
 * Return:int result of the sum of all the data (n) of a doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
