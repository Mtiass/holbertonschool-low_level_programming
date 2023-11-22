#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: parameter that is a pointer to the head of a singly linked list.
 * Return: the number of nodes(size_t).
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *currnode = h;

	while (currnode != NULL)
	{
		if (currnode->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", currnode->len);
			printf("%s\n", currnode->str);
		}
		nodes++;
		currnode = currnode->next;
	}
	return (nodes);
}
