#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: parameter that is a pointer to the head of a doubly linked list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *curnode = h;

	while (curnode != NULL)
	{
		printf("%i \n", curnode->n);
		nodes++;
		curnode = curnode->next;
	}
	return (nodes);
}
