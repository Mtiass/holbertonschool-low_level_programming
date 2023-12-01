#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *actnod;
	unsigned long int i;
	int comma = 0;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		actnod = ht->array[i];
		while (actnod != NULL)
		{
			if (comma) /* If comma is not zero */
				printf(", ");
			printf("'%s': '%s'", actnod->key, actnod->value);
			actnod = actnod->next;
			comma = 1;
/* Ensures that a comma is between each pair but not at the beginning or end */
		}
	}
	printf("}\n");
}
